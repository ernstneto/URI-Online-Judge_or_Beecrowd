#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
  int n, i;
  int tam_lista = 0;
  char  nome[1123][1010], lista[1123][1010];

  scanf("%d", &n);
  while(n--){
      scanf("%s", nome);
      int achei = 0;
      for(i = 0; i < tam_lista; i++){
          if(!(strcmp(nome, lista[i]))){
              achei = 1;
              break;
          }
      }
      if(!(achei)){
          strcpy(lista[tam_lista], nome);
          tam_lista++;
      }
  }
  printf("Falta(m) %d pomekon(s).\n", 151 - tam_lista);

  return 0;
}
