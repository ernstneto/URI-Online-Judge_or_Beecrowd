#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Medalha{
    int ouro;
    int prata;
    int bronze;
    char pais[112];
} Medalha;

Medalha medalhas[112345];

int cmp(const void *a, const void *b){
    Medalha x = *((Medalha*)a), y = *((Medalha*)b);
    if(x.ouro < y.ouro){
        return 1;
    }
    if(x.ouro > y.ouro){
        return -1;
    }
    if(x.prata < y.prata){
        return 1;
    }
    if(x.prata > y.prata){
        return -1;
    }
    if(x.bronze < y.bronze){
        return 1;
    }
    if(x.bronze > y.bronze){
        return -1;
    }
    return strcmp(x.pais,y.pais);
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%s %d%d%d",medalhas[i].pais,&medalhas[i].ouro,&medalhas[i].prata,&medalhas[i].bronze);
    }
    qsort(medalhas,n,sizeof(medalhas[0]),cmp);
    for(int i = 0; i < n; i++){
        printf("%s %d %d %d\n",medalhas[i].pais,medalhas[i].ouro,medalhas[i].prata,medalhas[i].bronze);
    }
    return 0;
}
