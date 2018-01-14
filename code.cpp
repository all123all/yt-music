#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//esse método pega apenas os últimos caracteres do link to YouTube

void last_link(char* link, int char_count, char* last_chars){
    int linkSize = strlen(link);
    int calcLink = linkSize - char_count;
  if (calcLink < 0) calcLink = 0;

  memcpy(last_chars, link + calcLink, char_count);
  last_chars[char_count] = '\0';
}

int main() {
  char link[100]; //input do usuário será guardado aqui
  char linkToYcapi[] = "https://ycapi.org/iframe/?v=";//link à ser concatenado
  char comando [100];//string com o comando em si
  char last_chars[12];//guarda os últimos caracteres do link do YT

  scanf("%s", link);
  //lê o tamanho da string pra capturar os últimos caracteres
  printf("\nTamanho da String: %i\n", strlen(link));

  last_link(link, 11, last_chars);

  strcat(linkToYcapi, last_chars);//concatena os links para formar apenas um
  printf("Link Gerado :: %s\n", linkToYcapi);
  sprintf(comando, "firefox-developer-edition %s", linkToYcapi);

  system(comando);

  return 0;
}
