#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



char * lib_strchr (const char *str, int symbol){
    char * result = (char*)malloc(strlen(str) + 1);
        int i = 0;
        while(str[i]) {

            if(str[i] == symbol){
                int a = 0;
                while (str[i]){
                    result[a] = str[i];
                    i++;
                    a++;
                } 
                return result;
            } else if (symbol == '\0') {
                return "Символ означает конец строки";
            }    
            i++;
        }
    return "Указаного элемента нет в строке";
}


int main() {
  char *str1 = "Hello word, i am glad";
  
    int symbol1 = 'w';
    printf("%s\n", lib_strchr(str1, symbol1));


    int symbol2 = '\0';
    printf("%s\n", lib_strchr(str1, symbol2));

    int symbol3 = 'y';
    printf("%s\n", lib_strchr(str1, symbol3));
    return 0;
} 