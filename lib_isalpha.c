#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int lib_isalpha (int symbol){
   if((symbol > 64 && symbol < 91) || (symbol > 96 && symbol < 123)){
        return 1;
    } else {
        return 0;
    }
}


char * compare (int symbol){
    if(lib_isalpha(symbol) != 0) {
        return "является буквой алфавита";
    } else {
        return "не буква алфавита";
    }
}


int main() {
    char a = 'l';
    printf("Символ - %c", a);
    printf(" : %s\n\n", compare(a));

    char b = '5';
    printf("Символ - %c", b);
    printf(" : %s\n\n", compare(b));

    char c = '/';
    printf("Символ - %c", c);
    printf(" : %s\n\n", compare(c));
}