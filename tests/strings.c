#include <stdio.h>
#include "strings.h"
#include "chars.h"

int main(void){

    char asd[] = "ajeje";
    char foo[] = "FOOBAR";
    
    printf("%d\n", is_vowel('A'));
    printf("%d\n", is_vowel('b'));
    printf("%d\n", char_to_digit('5'));
    printf("%s\n", string_toupper(asd));
    printf("%s\n", string_tolower(foo));
    
    return 0;
}
