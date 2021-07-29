#include <stdlib.h>
#include <string.h>
#include <stdio.h>


char * lib_strcat(char * string_first, char * string_second){
  int len = strlen(string_first);
    int i = 0;
  while(string_second[i]) {
    string_first[len] = string_second[i];
    i++;
    len++;
  }
  return string_first;
}


int main(){
  char * strOne = "Hello word ";
  char * striInOne = "And you hello human!";  
  char * result = malloc(strlen(strOne) + strlen(striInOne) + 1); 
  for (int i = 0; strOne[i]; i++){
    result[i] = strOne[i];
  }
  printf("Тест первый!\n Функция lib_strcat: %s\n\n", lib_strcat(result, striInOne));
  free(result);



  char * strTwo = "Мой год рождения ";
  char * strInTwo = "1990!";
  result = malloc(strlen(strTwo) + strlen(strInTwo) + 1);
  for (int i = 0; strTwo[i]; i++){
    result[i] = strTwo[i];
  }
  printf("Тест второй!\n Функция lib_strcat: %s\n\n", lib_strcat(result, strInTwo));
  free(result);



  char * strThree = "     ____-----U-----____    :";
  char * strInThree = "Вот так!";
  result = malloc(strlen(strThree) + strlen(strInThree) + 1);
  for (int i = 0; strThree[i]; i++){
    result[i] = strThree[i];
  }
  printf("Тест второй!\n Функция lib_strcat: %s\n\n", lib_strcat(result, strInThree));
  free(result);


  return 0;
}