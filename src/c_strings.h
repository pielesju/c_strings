/* c_strings.h
 * C string library
 * Copyright (C) 2024 Julian Pieles
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef SRC_C_STRINGS_H_
#define SRC_C_STRINGS_H_
#include <stdbool.h>

bool contains(char *string, int len, char c);
bool contains(char *string1, int len1, char *string2, int len2);
bool isuppercase(char c);
bool islowercase(char c);
void touppercase(char *string, char *out, int len);
void tolowercase(char *string, char *out, int len);
void append(char *string, int len1, char *nstring, int len2, char *out);

#endif  /* SRC_C_STRINGS_H_ */
