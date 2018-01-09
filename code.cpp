#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void last_link(char* link, int char_count, char* last_chars){
    int linkSize = strlen(link);
    int calcLink = linkSize - char_count;
  if (calcLink < 0) calcLink = 0;

  memcpy(last_chars, link + calcLink, char_count);
  last_chars[char_count] = '\0';
}

int main() {
  char link[100];
  char linkToYcapi[] = "https://ycapi.org/iframe/?v=";

  scanf("%s", link);
  //lê o tamanho da string pra capturar os últimos caracteres
  printf("\nTamanho da String: %i\n", strlen(link));

  char last_chars[12];
  last_link(link, 11, last_chars);

  printf("%s\n", last_chars);
  printf("%s\n", last_chars);
  printf("Ycapi  -----  %s\n", linkToYcapi);
  printf("Linkfull: %s%s\n", linkToYcapi, last_chars);

  system("firefox-developer-edition https://ycapi.org/iframe/?v=fRh_vgS2dFE");

  return 0;
}
