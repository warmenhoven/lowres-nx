//
// Copyright 2016 Timo Kloss
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

#include "character_rom.h"

uint8_t CharacterRom[][16] = {
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { 3, 192, 3, 192, 3, 192, 3, 192, 3, 192, 0, 0, 3, 192, 0, 0, },
    { 60, 240, 60, 240, 12, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { 60, 240, 60, 240, 255, 252, 60, 240, 255, 252, 60, 240, 60, 240, 0, 0, },
    { 3, 0, 63, 252, 243, 0, 63, 240, 3, 60, 255, 240, 3, 0, 0, 0, },
    { 60, 12, 60, 60, 0, 240, 3, 192, 15, 0, 60, 60, 48, 60, 0, 0, },
    { 15, 192, 60, 240, 60, 192, 63, 12, 243, 240, 240, 192, 63, 60, 0, 0, },
    { 3, 192, 3, 192, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { 0, 240, 3, 192, 15, 0, 15, 0, 15, 0, 3, 192, 0, 240, 0, 0, },
    { 15, 0, 3, 192, 0, 240, 0, 240, 0, 240, 3, 192, 15, 0, 0, 0, },
    { 0, 0, 60, 240, 15, 192, 255, 252, 15, 192, 60, 240, 0, 0, 0, 0, },
    { 0, 0, 3, 192, 3, 192, 63, 252, 3, 192, 3, 192, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, 0, 3, 192, 3, 192, 15, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 63, 252, 0, 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 192, 3, 192, 0, 0, },
    { 0, 12, 0, 60, 0, 240, 3, 192, 15, 0, 60, 0, 48, 0, 0, 0, },
    { 15, 240, 60, 60, 60, 252, 63, 60, 60, 60, 60, 60, 15, 240, 0, 0, },
    { 3, 192, 15, 192, 51, 192, 3, 192, 3, 192, 3, 192, 63, 252, 0, 0, },
    { 15, 240, 60, 60, 0, 60, 0, 240, 3, 192, 15, 0, 63, 252, 0, 0, },
    { 15, 240, 60, 60, 0, 60, 0, 240, 0, 60, 60, 60, 15, 240, 0, 0, },
    { 60, 60, 60, 60, 60, 60, 63, 252, 0, 60, 0, 60, 0, 60, 0, 0, },
    { 63, 252, 60, 0, 60, 0, 63, 240, 0, 60, 0, 60, 63, 240, 0, 0, },
    { 3, 240, 15, 0, 60, 0, 63, 240, 60, 60, 60, 60, 15, 240, 0, 0, },
    { 63, 252, 0, 60, 0, 240, 3, 192, 15, 0, 15, 0, 15, 0, 0, 0, },
    { 15, 240, 60, 60, 60, 60, 15, 240, 60, 60, 60, 60, 15, 240, 0, 0, },
    { 15, 240, 60, 60, 60, 60, 15, 252, 0, 60, 60, 60, 15, 240, 0, 0, },
    { 0, 0, 3, 192, 3, 192, 0, 0, 3, 192, 3, 192, 0, 0, 0, 0, },
    { 0, 0, 3, 192, 3, 192, 0, 0, 3, 192, 3, 192, 15, 0, 0, 0, },
    { 0, 240, 3, 192, 15, 0, 60, 0, 15, 0, 3, 192, 0, 240, 0, 0, },
    { 0, 0, 0, 0, 63, 252, 0, 0, 63, 252, 0, 0, 0, 0, 0, 0, },
    { 15, 0, 3, 192, 0, 240, 0, 60, 0, 240, 3, 192, 15, 0, 0, 0, },
    { 15, 240, 60, 60, 0, 60, 0, 240, 3, 192, 0, 0, 3, 192, 0, 0, },
    { 63, 240, 240, 60, 240, 252, 243, 60, 240, 252, 240, 0, 63, 240, 0, 0, },
    { 15, 192, 60, 240, 240, 60, 240, 60, 255, 252, 240, 60, 240, 60, 0, 0, },
    { 255, 240, 240, 60, 240, 60, 255, 240, 240, 60, 240, 60, 255, 240, 0, 0, },
    { 63, 240, 240, 60, 240, 0, 240, 0, 240, 0, 240, 60, 63, 240, 0, 0, },
    { 255, 192, 240, 240, 240, 60, 240, 60, 240, 60, 240, 240, 255, 192, 0, 0, },
    { 255, 252, 240, 0, 240, 0, 255, 192, 240, 0, 240, 0, 255, 252, 0, 0, },
    { 255, 252, 240, 0, 240, 0, 255, 192, 240, 0, 240, 0, 240, 0, 0, 0, },
    { 63, 240, 240, 60, 240, 0, 240, 252, 240, 60, 240, 60, 63, 240, 0, 0, },
    { 240, 60, 240, 60, 240, 60, 255, 252, 240, 60, 240, 60, 240, 60, 0, 0, },
    { 63, 252, 3, 192, 3, 192, 3, 192, 3, 192, 3, 192, 63, 252, 0, 0, },
    { 15, 252, 0, 60, 0, 60, 0, 60, 0, 60, 240, 60, 63, 240, 0, 0, },
    { 240, 60, 240, 240, 243, 192, 255, 0, 243, 192, 240, 240, 240, 60, 0, 0, },
    { 240, 0, 240, 0, 240, 0, 240, 0, 240, 0, 240, 0, 255, 252, 0, 0, },
    { 240, 60, 252, 252, 255, 252, 243, 60, 240, 60, 240, 60, 240, 60, 0, 0, },
    { 240, 60, 252, 60, 255, 60, 243, 252, 240, 252, 240, 60, 240, 60, 0, 0, },
    { 63, 240, 240, 60, 240, 60, 240, 60, 240, 60, 240, 60, 63, 240, 0, 0, },
    { 255, 240, 240, 60, 240, 60, 255, 240, 240, 0, 240, 0, 240, 0, 0, 0, },
    { 63, 240, 240, 60, 240, 60, 240, 60, 243, 204, 240, 240, 63, 252, 0, 0, },
    { 255, 240, 240, 60, 240, 60, 255, 240, 243, 192, 240, 240, 240, 60, 0, 0, },
    { 63, 252, 240, 0, 240, 0, 63, 240, 0, 60, 0, 60, 255, 240, 0, 0, },
    { 63, 252, 3, 192, 3, 192, 3, 192, 3, 192, 3, 192, 3, 192, 0, 0, },
    { 240, 60, 240, 60, 240, 60, 240, 60, 240, 60, 240, 60, 63, 240, 0, 0, },
    { 240, 60, 240, 60, 240, 60, 240, 60, 60, 240, 15, 192, 3, 0, 0, 0, },
    { 240, 60, 240, 60, 240, 60, 243, 60, 255, 252, 252, 252, 240, 60, 0, 0, },
    { 240, 60, 240, 60, 60, 240, 15, 192, 60, 240, 240, 60, 240, 60, 0, 0, },
    { 60, 60, 60, 60, 60, 60, 15, 240, 3, 192, 3, 192, 3, 192, 0, 0, },
    { 255, 252, 0, 240, 3, 192, 15, 0, 60, 0, 240, 0, 255, 252, 0, 0, },
    { 15, 240, 15, 0, 15, 0, 15, 0, 15, 0, 15, 0, 15, 240, 0, 0, },
    { 48, 0, 60, 0, 15, 0, 3, 192, 0, 240, 0, 60, 0, 12, 0, 0, },
    { 15, 240, 0, 240, 0, 240, 0, 240, 0, 240, 0, 240, 15, 240, 0, 0, },
    { 3, 192, 15, 240, 60, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 252, 0, 0, },
    { 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, },
    { 87, 213, 87, 213, 87, 213, 87, 213, 87, 213, 85, 85, 87, 213, 85, 85, },
    { 125, 245, 125, 245, 93, 117, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, },
    { 125, 245, 125, 245, 255, 253, 125, 245, 255, 253, 125, 245, 125, 245, 85, 85, },
    { 87, 85, 127, 253, 247, 85, 127, 245, 87, 125, 255, 245, 87, 85, 85, 85, },
    { 125, 93, 125, 125, 85, 245, 87, 213, 95, 85, 125, 125, 117, 125, 85, 85, },
    { 95, 213, 125, 245, 125, 213, 127, 93, 247, 245, 245, 213, 127, 125, 85, 85, },
    { 87, 213, 87, 213, 95, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, },
    { 85, 245, 87, 213, 95, 85, 95, 85, 95, 85, 87, 213, 85, 245, 85, 85, },
    { 95, 85, 87, 213, 85, 245, 85, 245, 85, 245, 87, 213, 95, 85, 85, 85, },
    { 85, 85, 125, 245, 95, 213, 255, 253, 95, 213, 125, 245, 85, 85, 85, 85, },
    { 85, 85, 87, 213, 87, 213, 127, 253, 87, 213, 87, 213, 85, 85, 85, 85, },
    { 85, 85, 85, 85, 85, 85, 85, 85, 87, 213, 87, 213, 95, 85, 85, 85, },
    { 85, 85, 85, 85, 85, 85, 127, 253, 85, 85, 85, 85, 85, 85, 85, 85, },
    { 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 87, 213, 87, 213, 85, 85, },
    { 85, 93, 85, 125, 85, 245, 87, 213, 95, 85, 125, 85, 117, 85, 85, 85, },
    { 95, 245, 125, 125, 125, 253, 127, 125, 125, 125, 125, 125, 95, 245, 85, 85, },
    { 87, 213, 95, 213, 119, 213, 87, 213, 87, 213, 87, 213, 127, 253, 85, 85, },
    { 95, 245, 125, 125, 85, 125, 85, 245, 87, 213, 95, 85, 127, 253, 85, 85, },
    { 95, 245, 125, 125, 85, 125, 85, 245, 85, 125, 125, 125, 95, 245, 85, 85, },
    { 125, 125, 125, 125, 125, 125, 127, 253, 85, 125, 85, 125, 85, 125, 85, 85, },
    { 127, 253, 125, 85, 125, 85, 127, 245, 85, 125, 85, 125, 127, 245, 85, 85, },
    { 87, 245, 95, 85, 125, 85, 127, 245, 125, 125, 125, 125, 95, 245, 85, 85, },
    { 127, 253, 85, 125, 85, 245, 87, 213, 95, 85, 95, 85, 95, 85, 85, 85, },
    { 95, 245, 125, 125, 125, 125, 95, 245, 125, 125, 125, 125, 95, 245, 85, 85, },
    { 95, 245, 125, 125, 125, 125, 95, 253, 85, 125, 125, 125, 95, 245, 85, 85, },
    { 85, 85, 87, 213, 87, 213, 85, 85, 87, 213, 87, 213, 85, 85, 85, 85, },
    { 85, 85, 87, 213, 87, 213, 85, 85, 87, 213, 87, 213, 95, 85, 85, 85, },
    { 85, 245, 87, 213, 95, 85, 125, 85, 95, 85, 87, 213, 85, 245, 85, 85, },
    { 85, 85, 85, 85, 127, 253, 85, 85, 127, 253, 85, 85, 85, 85, 85, 85, },
    { 95, 85, 87, 213, 85, 245, 85, 125, 85, 245, 87, 213, 95, 85, 85, 85, },
    { 95, 245, 125, 125, 85, 125, 85, 245, 87, 213, 85, 85, 87, 213, 85, 85, },
    { 127, 245, 245, 125, 245, 253, 247, 125, 245, 253, 245, 85, 127, 245, 85, 85, },
    { 95, 213, 125, 245, 245, 125, 245, 125, 255, 253, 245, 125, 245, 125, 85, 85, },
    { 255, 245, 245, 125, 245, 125, 255, 245, 245, 125, 245, 125, 255, 245, 85, 85, },
    { 127, 245, 245, 125, 245, 85, 245, 85, 245, 85, 245, 125, 127, 245, 85, 85, },
    { 255, 213, 245, 245, 245, 125, 245, 125, 245, 125, 245, 245, 255, 213, 85, 85, },
    { 255, 253, 245, 85, 245, 85, 255, 213, 245, 85, 245, 85, 255, 253, 85, 85, },
    { 255, 253, 245, 85, 245, 85, 255, 213, 245, 85, 245, 85, 245, 85, 85, 85, },
    { 127, 245, 245, 125, 245, 85, 245, 253, 245, 125, 245, 125, 127, 245, 85, 85, },
    { 245, 125, 245, 125, 245, 125, 255, 253, 245, 125, 245, 125, 245, 125, 85, 85, },
    { 127, 253, 87, 213, 87, 213, 87, 213, 87, 213, 87, 213, 127, 253, 85, 85, },
    { 95, 253, 85, 125, 85, 125, 85, 125, 85, 125, 245, 125, 127, 245, 85, 85, },
    { 245, 125, 245, 245, 247, 213, 255, 85, 247, 213, 245, 245, 245, 125, 85, 85, },
    { 245, 85, 245, 85, 245, 85, 245, 85, 245, 85, 245, 85, 255, 253, 85, 85, },
    { 245, 125, 253, 253, 255, 253, 247, 125, 245, 125, 245, 125, 245, 125, 85, 85, },
    { 245, 125, 253, 125, 255, 125, 247, 253, 245, 253, 245, 125, 245, 125, 85, 85, },
    { 127, 245, 245, 125, 245, 125, 245, 125, 245, 125, 245, 125, 127, 245, 85, 85, },
    { 255, 245, 245, 125, 245, 125, 255, 245, 245, 85, 245, 85, 245, 85, 85, 85, },
    { 127, 245, 245, 125, 245, 125, 245, 125, 247, 221, 245, 245, 127, 253, 85, 85, },
    { 255, 245, 245, 125, 245, 125, 255, 245, 247, 213, 245, 245, 245, 125, 85, 85, },
    { 127, 253, 245, 85, 245, 85, 127, 245, 85, 125, 85, 125, 255, 245, 85, 85, },
    { 127, 253, 87, 213, 87, 213, 87, 213, 87, 213, 87, 213, 87, 213, 85, 85, },
    { 245, 125, 245, 125, 245, 125, 245, 125, 245, 125, 245, 125, 127, 245, 85, 85, },
    { 245, 125, 245, 125, 245, 125, 245, 125, 125, 245, 95, 213, 87, 85, 85, 85, },
    { 245, 125, 245, 125, 245, 125, 247, 125, 255, 253, 253, 253, 245, 125, 85, 85, },
    { 245, 125, 245, 125, 125, 245, 95, 213, 125, 245, 245, 125, 245, 125, 85, 85, },
    { 125, 125, 125, 125, 125, 125, 95, 245, 87, 213, 87, 213, 87, 213, 85, 85, },
    { 255, 253, 85, 245, 87, 213, 95, 85, 125, 85, 245, 85, 255, 253, 85, 85, },
    { 95, 245, 95, 85, 95, 85, 95, 85, 95, 85, 95, 85, 95, 245, 85, 85, },
    { 117, 85, 125, 85, 95, 85, 87, 213, 85, 245, 85, 125, 85, 93, 85, 85, },
    { 95, 245, 85, 245, 85, 245, 85, 245, 85, 245, 85, 245, 95, 245, 85, 85, },
    { 87, 213, 95, 245, 125, 125, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, },
    { 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 127, 253, 85, 85, },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { 1, 64, 7, 208, 7, 208, 7, 208, 7, 208, 1, 64, 7, 208, 1, 64, },
    { 20, 80, 125, 244, 125, 244, 29, 116, 4, 16, 0, 0, 0, 0, 0, 0, },
    { 4, 16, 29, 116, 127, 253, 29, 116, 29, 116, 127, 253, 29, 116, 4, 16, },
    { 1, 0, 7, 84, 31, 253, 127, 212, 23, 253, 127, 244, 23, 80, 1, 0, },
    { 20, 4, 125, 29, 125, 116, 21, 208, 7, 84, 29, 125, 116, 125, 16, 20, },
    { 1, 80, 7, 244, 31, 116, 31, 212, 125, 253, 125, 116, 31, 221, 5, 68, },
    { 1, 64, 7, 208, 7, 208, 31, 64, 5, 0, 0, 0, 0, 0, 0, 0, },
    { 0, 80, 1, 244, 7, 208, 31, 64, 31, 64, 7, 208, 1, 244, 0, 80, },
    { 5, 0, 31, 64, 7, 208, 1, 244, 1, 244, 7, 208, 31, 64, 5, 0, },
    { 4, 16, 29, 116, 23, 212, 127, 253, 23, 212, 29, 116, 4, 16, 0, 0, },
    { 1, 64, 7, 208, 23, 212, 127, 253, 23, 212, 7, 208, 1, 64, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 1, 64, 7, 208, 7, 208, 31, 64, 5, 0, },
    { 0, 0, 0, 0, 21, 84, 127, 253, 21, 84, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, 0, 1, 64, 7, 208, 7, 208, 1, 64, },
    { 0, 20, 0, 125, 1, 244, 7, 208, 31, 64, 125, 0, 116, 0, 16, 0, },
    { 5, 80, 31, 244, 125, 125, 125, 253, 127, 125, 125, 125, 31, 244, 5, 80, },
    { 1, 64, 7, 208, 31, 208, 7, 208, 7, 208, 23, 212, 127, 253, 21, 84, },
    { 5, 80, 31, 244, 125, 125, 21, 244, 7, 208, 31, 84, 127, 253, 21, 84, },
    { 5, 80, 31, 244, 125, 125, 21, 244, 20, 125, 125, 125, 31, 244, 5, 80, },
    { 20, 20, 125, 125, 125, 125, 127, 253, 21, 125, 0, 125, 0, 125, 0, 20, },
    { 21, 84, 127, 253, 125, 84, 127, 244, 21, 125, 21, 125, 127, 244, 21, 80, },
    { 1, 80, 7, 244, 31, 80, 127, 244, 125, 125, 125, 125, 31, 244, 5, 80, },
    { 21, 84, 127, 253, 21, 125, 1, 244, 7, 208, 31, 64, 31, 64, 5, 0, },
    { 5, 80, 31, 244, 125, 125, 31, 244, 125, 125, 125, 125, 31, 244, 5, 80, },
    { 5, 80, 31, 244, 125, 125, 31, 253, 21, 125, 125, 125, 31, 244, 5, 80, },
    { 0, 0, 0, 0, 1, 64, 7, 208, 1, 64, 7, 208, 1, 64, 0, 0, },
    { 0, 0, 0, 0, 1, 64, 7, 208, 1, 64, 7, 208, 31, 64, 5, 0, },
    { 0, 0, 0, 80, 1, 244, 7, 208, 31, 64, 7, 208, 1, 244, 0, 80, },
    { 0, 0, 0, 0, 5, 80, 31, 244, 5, 80, 31, 244, 5, 80, 0, 0, },
    { 0, 0, 5, 0, 31, 64, 7, 208, 1, 244, 7, 208, 31, 64, 5, 0, },
    { 5, 80, 31, 244, 125, 125, 21, 244, 7, 208, 1, 64, 7, 208, 1, 64, },
    { 5, 80, 31, 244, 125, 125, 125, 253, 125, 253, 125, 84, 31, 244, 5, 80, },
    { 1, 64, 7, 208, 31, 244, 125, 125, 127, 253, 125, 125, 125, 125, 20, 20, },
    { 21, 80, 127, 244, 125, 125, 127, 244, 125, 125, 125, 125, 127, 244, 21, 80, },
    { 5, 80, 31, 244, 125, 125, 125, 20, 125, 20, 125, 125, 31, 244, 5, 80, },
    { 21, 64, 127, 208, 125, 244, 125, 125, 125, 125, 125, 244, 127, 208, 21, 64, },
    { 21, 84, 127, 253, 125, 84, 127, 208, 125, 64, 125, 84, 127, 253, 21, 84, },
    { 21, 84, 127, 253, 125, 84, 127, 208, 125, 64, 125, 0, 125, 0, 20, 0, },
    { 5, 80, 31, 244, 125, 84, 125, 253, 125, 125, 125, 125, 31, 244, 5, 80, },
    { 20, 20, 125, 125, 125, 125, 127, 253, 125, 125, 125, 125, 125, 125, 20, 20, },
    { 21, 84, 127, 253, 23, 212, 7, 208, 7, 208, 23, 212, 127, 253, 21, 84, },
    { 1, 84, 7, 253, 1, 125, 0, 125, 20, 125, 125, 125, 31, 244, 5, 80, },
    { 20, 20, 125, 125, 125, 244, 127, 208, 127, 208, 125, 244, 125, 125, 20, 20, },
    { 20, 0, 125, 0, 125, 0, 125, 0, 125, 0, 125, 84, 127, 253, 21, 84, },
    { 16, 4, 116, 29, 125, 125, 127, 253, 127, 253, 125, 125, 125, 125, 20, 20, },
    { 20, 20, 125, 125, 127, 125, 127, 253, 125, 253, 125, 125, 125, 125, 20, 20, },
    { 5, 80, 31, 244, 125, 125, 125, 125, 125, 125, 125, 125, 31, 244, 5, 80, },
    { 21, 80, 127, 244, 125, 125, 127, 244, 125, 80, 125, 0, 125, 0, 20, 0, },
    { 5, 80, 31, 244, 125, 125, 125, 125, 125, 221, 125, 244, 31, 253, 5, 84, },
    { 21, 80, 127, 244, 125, 125, 127, 244, 127, 208, 125, 244, 125, 125, 20, 20, },
    { 5, 84, 31, 253, 125, 84, 31, 244, 5, 125, 21, 125, 127, 244, 21, 80, },
    { 21, 84, 127, 253, 23, 212, 7, 208, 7, 208, 7, 208, 7, 208, 1, 64, },
    { 20, 20, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 31, 244, 5, 80, },
    { 20, 20, 125, 125, 125, 125, 125, 125, 125, 125, 31, 244, 7, 208, 1, 64, },
    { 20, 20, 125, 125, 125, 125, 127, 253, 127, 253, 125, 125, 116, 29, 16, 4, },
    { 20, 20, 125, 125, 31, 244, 7, 208, 31, 244, 125, 125, 125, 125, 20, 20, },
    { 20, 20, 125, 125, 125, 125, 31, 244, 7, 208, 7, 208, 7, 208, 1, 64, },
    { 21, 84, 127, 253, 21, 244, 7, 208, 31, 64, 125, 84, 127, 253, 21, 84, },
    { 5, 80, 31, 244, 31, 80, 31, 64, 31, 64, 31, 80, 31, 244, 5, 80, },
    { 20, 0, 125, 0, 31, 64, 7, 208, 1, 244, 0, 125, 0, 29, 0, 4, },
    { 5, 80, 31, 244, 5, 244, 1, 244, 1, 244, 5, 244, 31, 244, 5, 80, },
    { 1, 64, 7, 208, 31, 244, 125, 125, 20, 20, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 84, 127, 253, 21, 84, },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { 3, 192, 3, 208, 3, 208, 3, 208, 3, 208, 0, 80, 3, 192, 0, 80, },
    { 60, 240, 61, 244, 13, 52, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, },
    { 60, 240, 61, 244, 255, 252, 61, 245, 255, 252, 61, 245, 61, 244, 5, 20, },
    { 3, 0, 63, 252, 247, 85, 63, 240, 7, 124, 255, 245, 23, 84, 0, 64, },
    { 60, 12, 61, 61, 5, 245, 3, 212, 15, 80, 61, 124, 53, 61, 4, 5, },
    { 15, 192, 61, 240, 61, 212, 63, 28, 247, 241, 244, 212, 63, 60, 5, 69, },
    { 3, 192, 3, 208, 15, 80, 1, 64, 0, 0, 0, 0, 0, 0, 0, 0, },
    { 0, 240, 3, 212, 15, 80, 15, 64, 15, 64, 3, 192, 0, 240, 0, 20, },
    { 15, 0, 3, 192, 0, 240, 0, 244, 0, 244, 3, 212, 15, 80, 1, 64, },
    { 0, 0, 60, 240, 15, 212, 255, 252, 31, 213, 61, 240, 5, 20, 0, 0, },
    { 0, 0, 3, 192, 3, 208, 63, 252, 7, 213, 3, 208, 0, 80, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, 0, 3, 192, 3, 208, 15, 80, 1, 64, },
    { 0, 0, 0, 0, 0, 0, 63, 252, 5, 85, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 192, 3, 208, 0, 80, },
    { 0, 12, 0, 61, 0, 245, 3, 212, 15, 80, 61, 64, 53, 0, 4, 0, },
    { 15, 240, 61, 124, 61, 253, 63, 61, 61, 125, 61, 61, 15, 245, 1, 84, },
    { 3, 192, 15, 208, 51, 208, 7, 208, 3, 208, 3, 208, 63, 252, 5, 85, },
    { 15, 240, 61, 124, 5, 61, 0, 245, 3, 212, 15, 80, 63, 252, 5, 85, },
    { 15, 240, 61, 124, 5, 61, 0, 245, 0, 60, 60, 61, 15, 245, 1, 84, },
    { 60, 60, 61, 61, 61, 61, 63, 253, 5, 125, 0, 61, 0, 61, 0, 5, },
    { 63, 252, 61, 85, 61, 0, 63, 240, 5, 124, 0, 61, 63, 245, 5, 84, },
    { 3, 240, 15, 84, 61, 64, 63, 240, 61, 124, 61, 61, 15, 245, 1, 84, },
    { 63, 252, 5, 125, 0, 245, 3, 212, 15, 80, 15, 64, 15, 64, 1, 64, },
    { 15, 240, 61, 124, 61, 61, 15, 245, 61, 124, 61, 61, 15, 245, 1, 84, },
    { 15, 240, 61, 124, 61, 61, 15, 253, 1, 125, 60, 61, 15, 245, 1, 84, },
    { 0, 0, 3, 192, 3, 208, 0, 80, 3, 192, 3, 208, 0, 80, 0, 0, },
    { 0, 0, 3, 192, 3, 208, 0, 80, 3, 192, 3, 208, 15, 80, 1, 64, },
    { 0, 240, 3, 212, 15, 80, 61, 64, 15, 0, 3, 192, 0, 240, 0, 20, },
    { 0, 0, 0, 0, 63, 252, 5, 85, 63, 252, 5, 85, 0, 0, 0, 0, },
    { 15, 0, 3, 192, 0, 240, 0, 60, 0, 245, 3, 212, 15, 80, 1, 64, },
    { 15, 240, 61, 124, 5, 61, 0, 245, 3, 212, 0, 80, 3, 192, 0, 80, },
    { 63, 240, 245, 124, 244, 253, 247, 61, 244, 253, 244, 21, 63, 240, 5, 84, },
    { 15, 192, 61, 240, 245, 60, 244, 61, 255, 253, 245, 125, 244, 61, 20, 5, },
    { 255, 240, 245, 124, 244, 61, 255, 245, 245, 124, 244, 61, 255, 245, 21, 84, },
    { 63, 240, 245, 124, 244, 5, 244, 0, 244, 0, 244, 60, 63, 245, 5, 84, },
    { 255, 192, 245, 240, 244, 60, 244, 61, 244, 61, 244, 245, 255, 212, 21, 80, },
    { 255, 252, 245, 85, 244, 0, 255, 192, 245, 80, 244, 0, 255, 252, 21, 85, },
    { 255, 252, 245, 85, 244, 0, 255, 192, 245, 80, 244, 0, 244, 0, 20, 0, },
    { 63, 240, 245, 124, 244, 5, 244, 252, 244, 61, 244, 61, 63, 245, 5, 84, },
    { 240, 60, 244, 61, 244, 61, 255, 253, 245, 125, 244, 61, 244, 61, 20, 5, },
    { 63, 252, 7, 213, 3, 208, 3, 208, 3, 208, 3, 208, 63, 252, 5, 85, },
    { 15, 252, 1, 125, 0, 61, 0, 61, 0, 61, 240, 61, 63, 245, 5, 84, },
    { 240, 60, 244, 245, 247, 212, 255, 80, 247, 192, 244, 240, 244, 60, 20, 5, },
    { 240, 0, 244, 0, 244, 0, 244, 0, 244, 0, 244, 0, 255, 252, 21, 85, },
    { 240, 60, 252, 253, 255, 253, 247, 125, 244, 125, 244, 61, 244, 61, 20, 5, },
    { 240, 60, 252, 61, 255, 61, 247, 253, 244, 253, 244, 61, 244, 61, 20, 5, },
    { 63, 240, 245, 124, 244, 61, 244, 61, 244, 61, 244, 61, 63, 245, 5, 84, },
    { 255, 240, 245, 124, 244, 61, 255, 245, 245, 84, 244, 0, 244, 0, 20, 0, },
    { 63, 240, 245, 124, 244, 61, 244, 61, 247, 205, 244, 241, 63, 252, 5, 85, },
    { 255, 240, 245, 124, 244, 61, 255, 245, 247, 212, 244, 240, 244, 60, 20, 5, },
    { 63, 252, 245, 85, 244, 0, 63, 240, 5, 124, 0, 61, 255, 245, 21, 84, },
    { 63, 252, 7, 213, 3, 208, 3, 208, 3, 208, 3, 208, 3, 208, 0, 80, },
    { 240, 60, 244, 61, 244, 61, 244, 61, 244, 61, 244, 61, 63, 245, 5, 84, },
    { 240, 60, 244, 61, 244, 61, 244, 61, 60, 245, 15, 212, 3, 80, 0, 64, },
    { 240, 60, 244, 61, 244, 61, 247, 61, 255, 253, 253, 253, 245, 61, 20, 5, },
    { 240, 60, 244, 61, 60, 245, 15, 212, 61, 240, 245, 60, 244, 61, 20, 5, },
    { 60, 60, 61, 61, 61, 61, 15, 245, 3, 212, 3, 208, 3, 208, 0, 80, },
    { 255, 252, 21, 245, 3, 212, 15, 80, 61, 64, 245, 0, 255, 252, 21, 85, },
    { 15, 240, 15, 84, 15, 64, 15, 64, 15, 64, 15, 64, 15, 240, 1, 84, },
    { 48, 0, 60, 0, 15, 0, 3, 192, 0, 240, 0, 60, 0, 13, 0, 1, },
    { 15, 240, 1, 244, 0, 244, 0, 244, 0, 244, 0, 244, 15, 244, 1, 84, },
    { 3, 192, 15, 240, 61, 124, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 252, 5, 85, },
};
