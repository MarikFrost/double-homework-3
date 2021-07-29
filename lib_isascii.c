#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int lib_isascii (int symbol){
   if(symbol > 0 && symbol < 127){
        return 1;
    } else {
        return 0;
    }
}


char * compare (int symbol){
    if(lib_isascii(symbol) != 0) {
        return "находится в таблице ASCII";
    } else {
        return "не в таблице ASCII";
    }
}


int main() {
    char a = 'l';
    printf("Символ - %c", a);
    printf(" : %s\n\n", compare(a));

    char b = 'u';    // если вставить символ © компилятор ругается, но если выполнить, напишет что символ не находится в Ascii
    printf("Символ - %c", b);
    printf(" : %s\n\n", compare(b));

    char c = '/';
    printf("Символ - %c", c);
    printf(" : %s\n\n", compare(c));

    return 0;
}