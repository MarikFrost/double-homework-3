#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int lib_isdigit (int symbol){
    if (symbol > 47 && symbol < 58) {
        return 1;
    } else {
        return 0;
    }
}


char * compare (int symbol){
    if(lib_isdigit(symbol) !=0) {
        return "является десятичным числов";
    } else {
        return "не является числом";
    }
}


int main() {
    int a = '5';
    printf("Символ %c\n", a);
    printf("- %s\n\n",compare(a));

    int b = 'a';
    printf("Символ %c\n", b);
    printf("- %s\n\n",compare(b));

    int c = '*';
    printf("Символ %c\n", c);
    printf("- %s\n\n",compare(c));


    return 0;
}