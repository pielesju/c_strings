#ifndef STRINGS_H_
#define STRINGS_H_
#include <stdbool.h>

bool contains(char *string, int len, char c);
bool isuppercase(char c);
bool islowercase(char c);
void touppercase(char *string, char *out, int len);
void tolowercase(char *string, char *out, int len);
void append(char *string, int len1, char *nstring, int len2, char *out);

#endif
