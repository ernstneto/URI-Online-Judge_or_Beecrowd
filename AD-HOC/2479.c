#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nome[11234][112], sinal;

int cmpstr(const void *a, const void *b){
    return strcmp(a,b);
}

int main(){
    int n, i, j, cont1 = 0, cont2 = 0;

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%c%*c%s%*c", &sinal, nome[i]);
        if(sinal == '+'){
            cont1 = cont1 + 1;
        }
        else if(sinal == '-'){
            cont2 = cont2 + 1;
        }

    }

    qsort(nome,i, sizeof(nome[0]),cmpstr);
    for(i = 0; i < n; i++){
        printf("%s\n", nome[i]);
    }
    printf("Se comportaram: %d | Nao se comportaram: %d\n", cont1+1, cont2);

    return 0;
}
