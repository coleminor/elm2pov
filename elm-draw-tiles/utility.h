/*
 *  Copyright (C) 2014 Cole Minor
 *  This file is part of elm-draw-tiles.
 *
 *  elm-draw-tiles is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  elm-draw-tiles is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#ifndef ELM_DRAW_TILES_UTILITY_H
#define ELM_DRAW_TILES_UTILITY_H

void die_at(const char *file, int line,
            const char *fmt, ...)
  __attribute__((format(printf, 3, 4), noreturn));

#define die(m, ...) \
    die_at(__FILE__, __LINE__, m, ##__VA_ARGS__)

#endif /* ELM_DRAW_TILES_UTILITY_H */
