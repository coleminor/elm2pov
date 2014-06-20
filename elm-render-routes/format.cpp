//
//  Copyright (C) 2014 Cole Minor
//  This file is part of elm-render-routes
//
//  elm-render-routes is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  elm-render-routes is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#include "format.hpp"

#include <cstdio>
#include <string>

size_t to_chars(bool v, char *b, size_t l, const char *) {
  size_t n = snprintf(b, l, "%s", v ? "true" : "false");
  return n > l ? 0 : n;
}

size_t to_chars(char v, char *b, size_t l, const char *) {
  size_t n = snprintf(b, l, "%c", v);
  return n > l ? 0 : n;
}

size_t to_chars(int v, char *b, size_t l, const char *) {
  size_t n = snprintf(b, l, "%d", v);
  return n > l ? 0 : n;
}

size_t to_chars(unsigned v, char *b, size_t l, const char *) {
  size_t n = snprintf(b, l, "%u", v);
  return n > l ? 0 : n;
}

size_t to_chars(float v, char *b, size_t l, const char *) {
  size_t n = snprintf(b, l, "%g", v);
  return n > l ? 0 : n;
}

size_t to_chars(double v, char *b, size_t l, const char *) {
  size_t n = snprintf(b, l, "%g", v);
  return n > l ? 0 : n;
}

size_t to_chars(const char *v, char *b, size_t l, const char *) {
  if (!v)
    return 0;
  char *p = b;
  const char *const e = b + l;
  while (p < e && *v)
    *p++ = *v++;
  return p - b;
}

size_t to_chars(const std::string &v, char *b, size_t l, const char *) {
  size_t n = std::min(l, v.size());
  std::copy(v.begin(), v.begin() + n, b);
  return n;
}

size_t to_chars(void *v, char *b, size_t l, const char *) {
  size_t n = snprintf(b, l, "%p", v);
  return n > l ? 0 : n;
}