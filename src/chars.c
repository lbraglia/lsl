#include <ctype.h>

int is_vowel(char c){
    switch (c) {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
	return 1;
    default:
	return 0;
    }
}

int char_to_digit(char c){
    return c - '0';
}
