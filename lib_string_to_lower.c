#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


char * string_to_lower (char * string){  //первод строки в верхний регистр с помощью стандартной функции toupper
    int i = 0;
    char * b = malloc(strlen(string));
    while (string[i]){
        b[i] = tolower(string[i]);
        i++;
    }
    return b;
    free (b);
}

int main() {
    char * str1 = "Kemel keYS";
    printf("Ввели строку: %s", str1);
    printf(" - Результат функции string_to_lower: %s\n\n", string_to_lower(str1));

    char * str2 = "KEMEl keys";
    printf("Ввели строку: %s", str2);
    printf(" - Результат функции string_to_lower: %s\n\n", string_to_lower(str2));
    
    char * str3 = "kemel Keys";
    printf("Ввели строку: %s", str3);
    printf(" - Результат функции string_to_lower: %s\n\n", string_to_lower(str3));

    return 0;
}

