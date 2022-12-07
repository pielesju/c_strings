#include "strings.h"

bool islowercase(char c) {
	return (c >= 97 && c <= 122);
}

bool isuppercase(char c) {
	return (c >= 65 && c <= 90);
}

void tolowercase(char *string, char *out, int len) {
	for(int i = 0; i < len; i++) {
		if(isuppercase(*(string + i))) {
			*(out + i) = *(string + i) + 32;
		} else {
			*(out + i) = *(string + i);
		}
	}

	out[len] = '\0';
}

void touppercase(char *string, char *out, int len) {
	for(int i = 0; i < len; i++) {
		if(islowercase(*(string + i))) {
			*(out + i) = *(string + i) - 32;
		} else {
			*(out + i) = *(string + i);
		}
	}

	out[len] = '\0';
}

bool contains(char *string, int len, char c) {
	for(int i = 0; i < len; i++) {
		if(*(string + i) == c) {
			return true;
		}
	}

	return false;
}

void append(char *string, int len1, char *nstring, int len2, char *out) {
	int len3 = len1 + len2;
	for(int i = 0; i < len1; i++) {
		*(out + i) = *(string + i);
	}
	for(int i = len1; i < len3; i++) {
		*(out + i) = *(nstring + (i - len1));
	}
	*(out + len3) = '\0';
}
