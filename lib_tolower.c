#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int lib_tolower (int symbol){
   if(symbol > 64 && symbol < 91){
        return symbol + 32;
    } else { //возвращает то значение которое ввели, даже если это не буква, так как это делает стандартная функция
        return symbol;
    }
}


int main() {
    int symbol1 = 'T';
    printf("Ввели символ : %c\n", symbol1);
    printf("Результат функции lib_tolower: %c\n\n", lib_tolower(symbol1));

    int symbol2 = 'u';
    printf("Ввели символ : %c\n", symbol2);
    printf("Результат функции lib_tolower: %c\n\n", lib_tolower(symbol2));

    char symbol3 = '-';
    printf("Ввели символ : %c\n", symbol3);
    printf("Результат функции lib_tolower: %c\n\n", lib_tolower(symbol3));

    return 0;
}