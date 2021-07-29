#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *lib_strdup (const char *string){
    char * result = malloc(strlen(string) + 1);
    for (int i = 0; string[i]; i++) {
        result[i] = string[i]; 
    }
    return result;
    free(result);
}



int main() {
  char *str1 = "Hello word";
  printf("Результат функции lib_strdup: %s\n\n", lib_strdup(str1));

  char *str2 = "The use of hello";
  printf("Результат функции lib_strdup: %s\n\n", lib_strdup(str2));

  char *str3 = "        Hello        ";
  printf("Результат функции lib_strdup: %s\n\n", lib_strdup(str3));

  return 0;
}