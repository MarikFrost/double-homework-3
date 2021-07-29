#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int lib_toupper (int symbol){
   if(symbol > 96 && symbol < 123){
        return symbol - 32;
    } else {   //возвращает то значение которое ввели, даже если это не буква, так как это делает стандартная функция
        return symbol;
    }
}


int main() {
    int symbol1 = 'T';
    printf("Ввели символ : %c\n", symbol1);
    printf("Результат функции lib_toupper: %c\n\n", lib_toupper(symbol1));

    int symbol2 = 'u';
    printf("Ввели символ : %c\n", symbol2);
    printf("Результат функции lib_toupper: %c\n\n", lib_toupper(symbol2));

    char symbol3 = '-';
    printf("Ввели символ : %c\n", symbol3);
    printf("Результат функции lib_toupper: %c\n\n", lib_toupper(symbol3));

    return 0;
}