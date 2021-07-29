#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int lib_strcmp(char * str, char * str1){
    int i = 0;
    int result;
    while (str[i] || str1[i])
    {
      if (str[i] > str1[i]){
        result = 100;
      } else if (str[i] < str1[i]) {
        result = -100;
      } else if (str[i] == str1[i]){
        result = 0;
      }
      i++;
    }
    return result;
}


char * compare (char * new_string, char * old_string){
    if(lib_strcmp(new_string, old_string) > 0) {
        return "Первая строка больше";
    } else if (lib_strcmp(new_string, old_string) < 0) {
        return "Вторая строка больше";
    } else if (lib_strcmp(new_string, old_string) == 0) {
        return "Строки идентичны";
    }
}

int main(){
  char * str1 = "Hello word";
  char * str2 = "Hello word";
  printf("Сравнение строк: %s", str1);
  printf(" и %s\n", str2);
  printf("Результат: %s\n\n", compare(str1, str2));

  char * str3 = "Hello word and you hello";
  char * str4 = "Hello word";
  printf("Сравнение строк: %s", str3);
  printf(" и %s\n", str4);
  printf("Результат: %s\n\n", compare(str3, str4));

  char * str5 = "Hello word and you hello";
  char * str6 = "Hello planet and you hello";
  printf("Сравнение строк: %s", str5);
  printf(" и %s\n", str6);
  printf("Результат: %s\n\n", compare(str5, str6));

  return 0;
}