/* c_strings.c
 * C String library
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
#include "c_strings.h"

bool islowercase(char c) {
    return (c >= 97 && c <= 122);
}  /* islowercase */

bool isuppercase(char c) {
    return (c >= 65 && c <= 90);
}  /* isuppercase */

void tolowercase(char *string, char *out, int len) {
    for (int i = 0; i < len; i++) {
        if (isuppercase(*(string + i))) {
            *(out + i) = *(string + i) + 32;
        } else {
            *(out + i) = *(string + i);
        }
    }

    out[len] = '\0';
}  /* tolowercase */

void touppercase(char *string, char *out, int len) {
    for (int i = 0; i < len; i++) {
        if (islowercase(*(string + i))) {
            *(out + i) = *(string + i) - 32;
        } else {
            *(out + i) = *(string + i);
        }
    }

    out[len] = '\0';
}  /* touppercase */

bool contains(char *string, int len, char c) {
    for (int i = 0; i < len; i++) {
        if (*(string + i) == c) {
            return true;
        }
    }

    return false;
}  /* contains(char) */

bool contains(char *string1, int len1, char *string2, int len2) {
    return true;
}  /* contains(string) */

void append(char *string, int len1, char *nstring, int len2, char *out) {
    int len3 = len1 + len2;
    for (int i = 0; i < len1; i++) {
        *(out + i) = *(string + i);
    }
    for (int i = len1; i < len3; i++) {
        *(out + i) = *(nstring + (i - len1));
    }
    *(out + len3) = '\0';
}  /* append */
