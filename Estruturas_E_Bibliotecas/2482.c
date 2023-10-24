#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int n;
    char idioma[1123][60], frase[1123][60],idioma2[1123][60];
    char nome[1123][60];

    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf(" %s",idioma[i]);
        scanf(" %[^\n]",frase[i]);
    }
    int m;
    scanf("%d",&m);
    for(int i = 0; i < m; i++){
        scanf(" %[^\n]",nome[i]);
        scanf(" %s", idioma2[i]);
        for(int j = 0; j < n; j++){
            if(strcmp(idioma[j],idioma2[i])==0){
                printf("%s\n",nome[i]);
                printf("%s\n",frase[j]);
                printf("\n");
            }
        }
    }

  return 0;
}
