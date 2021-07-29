#include <unistd.h>
#include <stdio.h>
#include <string.h>

int lib_strlen(char *count_string) {
    int i = 0;
    while (count_string[i]) {
        i++;
    }
    return i;
}



int main() {
    char * strOne = "Hello word";
    printf("lib_strlen - длина первой строки без учета нулевого элемента: %d\n", lib_strlen(strOne));
    printf("Для сравнения функция strlen: %ld\n\n", strlen(strOne));


    char * strTwo = "The use of hello";
    printf("lib_strlen - длина второй строки без учета нулевого элемента: %d\n", lib_strlen(strTwo));
    printf("Для сравнения функция strlen: %ld\n\n", strlen(strTwo));


    char * strThree = "123   233 2333";
    printf("lib_strlen - длина третей строки без учета нулевого элемента: %d\n", lib_strlen(strThree));
    printf("Для сравнения функция strlen: %ld\n\n", strlen(strThree));

    return 0;
}