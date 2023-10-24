#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Presente{
    char nome_do_presente[111];
    int preferencia;
    double valor;
} Presente;

Presente presentes[112345];

int cmp(const void *a, const void *b){
    Presente x = *((Presente*)a), y = *((Presente*)b);
    if(x.preferencia < y.preferencia){
        return 1;
    }
    if(x.preferencia > y.preferencia){
        return -1;
    }
    if(x.valor < y.valor){
        return -1;
    }
    if(x.valor > y.valor){
        return 1;
    }
    return strcmp(x.nome_do_presente,y.nome_do_presente);
}

int main(){
    char nome[111];
    int n;
    while(scanf("%s %d",nome,&n)!= EOF){
        for(int i = 0; i < n; i++){
            scanf(" %[^\n]", presentes[i].nome_do_presente);
            scanf(" %lf%d",&presentes[i].valor, &presentes[i].preferencia);
        }
        qsort(presentes,n,sizeof(presentes[0]),cmp);
        printf("Lista de %s\n",nome);
        for(int i = 0; i < n; i++){
            printf("%s - R$%.2lf\n",presentes[i].nome_do_presente, presentes[i].valor);
        }
        printf("\n");
    }
    return 0;
}
