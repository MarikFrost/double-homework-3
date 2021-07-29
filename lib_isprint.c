#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int lib_isprint(int symbol){
   if(symbol > 31 && symbol < 127){
        return 1;
    } else {   
        return 0;
    }
}

char * compare (int symbol) {
    if((lib_isprint(symbol) != 0)) {
        return "является печатным";
    } else {
        return "не печатный символ";
    }
}


int main() {
    int symbol1 = 'T';
    printf("Ввели символ : %c\n", symbol1);
    printf(" %s\n\n", compare(symbol1));

    int symbol2 = '3';
    printf("Ввели символ : %c\n", symbol2);
    printf(" %s\n\n", compare(symbol2));

    char symbol3 = '\0';
    printf("Ввели символ : %c\n", symbol3);
    printf(" %s\n\n", compare(symbol3));

    return 0;
}