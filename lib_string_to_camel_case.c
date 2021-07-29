#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


char * string_to_camel_case (char * string){  //первод строки kemel keys в строку KeMeL KeYs с помощью стандартной функции toupper
    int i = 0;
    char * b = malloc(strlen(string));
    strcpy(b, string);
    while (string[i]){
        b[i] = tolower(string[i]);       
        if(i%2 == 0) {
            b[i] = toupper(string[i]);
        }
        i++;
    }
    return b;
    free (b);
}

int main() {
    char * string = "kemel keys";
    printf("Ввели троку - %s\n", string);
    printf("Результат после прохождения функцией string_camel_case: %s\n\n", string_to_camel_case(string));

    char * string1 = "KEMEL keys";
    printf("Ввели троку - %s\n", string1);
    printf("Результат после прохождения функцией string_camel_case: %s\n\n", string_to_camel_case(string1));

    char * string2 = "kemel keys";
    printf("Ввели троку - %s\n", string2);
    printf("Результат после прохождения функцией string_camel_case: %s\n\n", string_to_camel_case(string2));

    return 0;
}