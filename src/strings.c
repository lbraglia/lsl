#include "strings.h"

char * string_toupper(char * string) {
    int i = 0;
    while( (*(string + i) = toupper(*(string + i))) )  i++;
    return string;
}

char * string_tolower(char * string) {
    int i = 0;
    while( (*(string + i) = tolower(*(string + i))) )  i++;
    return string;
}
