//
// Copyright 2017 Timo Kloss
//
// This file is part of LowRes NX.
//
// LowRes NX is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// LowRes NX is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with LowRes NX.  If not, see <http://www.gnu.org/licenses/>.
//

#include "cmd_sprites.h"
#include "core.h"
#include "value.h"
#include "cmd_text.h"
#include "interpreter_utils.h"
#include <assert.h>

enum ErrorCode cmd_SPRITE(struct Core *core)
{
    struct Interpreter *interpreter = &core->interpreter;
    
    // SPRITE
    ++interpreter->pc;
    
    // n value
    struct TypedValue nValue = itp_evaluateNumericExpression(core, 0, NUM_SPRITES - 1);
    if (nValue.type == ValueTypeError) return nValue.v.errorCode;
    
    // comma
    if (interpreter->pc->type != TokenComma) return ErrorExpectedComma;
    ++interpreter->pc;
    
    // x value
    struct TypedValue xValue = itp_evaluateOptionalExpression(core, TypeClassNumeric);
    if (xValue.type == ValueTypeError) return xValue.v.errorCode;
    
    // comma
    if (interpreter->pc->type != TokenComma) return ErrorExpectedComma;
    ++interpreter->pc;
    
    // y value
    struct TypedValue yValue = itp_evaluateOptionalExpression(core, TypeClassNumeric);
    if (yValue.type == ValueTypeError) return yValue.v.errorCode;

    // comma
    if (interpreter->pc->type != TokenComma) return ErrorExpectedComma;
    ++interpreter->pc;
    
    // c value
    struct TypedValue cValue = itp_evaluateOptionalNumericExpression(core, 0, NUM_CHARACTERS - 1);
    if (cValue.type == ValueTypeError) return cValue.v.errorCode;

    if (interpreter->pass == PassRun)
    {
        int n = nValue.v.floatValue;
        struct Sprite *sprite = &core->machine.spriteRegisters.sprites[n];
        if (xValue.type != ValueTypeNull) sprite->x = (int)xValue.v.floatValue & 0xFF;
        if (yValue.type != ValueTypeNull) sprite->y = (int)yValue.v.floatValue & 0xFF;
        if (cValue.type != ValueTypeNull) sprite->character = cValue.v.floatValue;
    }
    
    return itp_endOfCommand(interpreter);
}

enum ErrorCode cmd_SPRITE_A(struct Core *core)
{
    struct Interpreter *interpreter = &core->interpreter;
    
    // SPRITE.A
    ++interpreter->pc;
    
    // n value
    struct TypedValue nValue = itp_evaluateNumericExpression(core, 0, NUM_SPRITES - 1);
    if (nValue.type == ValueTypeError) return nValue.v.errorCode;
    
    struct Sprite *sprite = NULL;
    if (interpreter->pass == PassRun)
    {
        int n = nValue.v.floatValue;
        sprite = &core->machine.spriteRegisters.sprites[n];
    }
    
    // comma
    if (interpreter->pc->type != TokenComma) return ErrorExpectedComma;
    ++interpreter->pc;
    
    union CharacterAttributes atrb;
    if (sprite)
    {
        atrb = sprite->attr;
    }
    else
    {
        atrb.value = 0;
    }
    
    // atrb value
    struct TypedValue aValue = itp_evaluateCharAttributes(core, atrb, false);
    if (aValue.type == ValueTypeError) return aValue.v.errorCode;

    if (interpreter->pass == PassRun)
    {
        sprite->attr.value = aValue.v.floatValue;
    }
    
    return itp_endOfCommand(interpreter);
}

struct TypedValue fnc_SPRITE(struct Core *core)
{
    struct Interpreter *interpreter = &core->interpreter;
    
    // SPRITE.?
    enum TokenType type = interpreter->pc->type;
    ++interpreter->pc;
    
    // bracket open
    if (interpreter->pc->type != TokenBracketOpen) return val_makeError(ErrorExpectedLeftParenthesis);
    ++interpreter->pc;
    
    // expression
    struct TypedValue nValue = itp_evaluateNumericExpression(core, 0, NUM_SPRITES - 1);
    if (nValue.type == ValueTypeError) return nValue;
    
    // bracket close
    if (interpreter->pc->type != TokenBracketClose) return val_makeError(ErrorExpectedRightParenthesis);
    ++interpreter->pc;
    
    struct TypedValue value;
    value.type = ValueTypeFloat;
    
    if (interpreter->pass == PassRun)
    {
        int n = nValue.v.floatValue;
        struct Sprite *sprite = &core->machine.spriteRegisters.sprites[n];
        switch (type)
        {
            case TokenSPRITEX:
                value.v.floatValue = sprite->x;
                break;
                
            case TokenSPRITEY:
                value.v.floatValue = sprite->y;
                break;
                
            case TokenSPRITEC:
                value.v.floatValue = sprite->character;
                break;
                
            case TokenSPRITEA:
                value.v.floatValue = sprite->attr.value;
                break;

            default:
                assert(0);
                break;
        }
    }
    return value;
}
