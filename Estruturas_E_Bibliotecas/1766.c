#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nome[112345][110];
int peso[112345], idade[112345];
double altura[112345];

int cmp(const void* a, const void* b){
    int x = (*(int*)a), y = (*(int*)b);

    if(peso[x] > peso[y]){
        return -1;
    }
    if(peso[x] < peso[y]){
        return 1;
    }
    if(idade[x] < idade[y]){
        return -1;
    }
    if(idade[x] > idade[y]){
        return 1;
    }
    if(altura[x] < altura[y]){
        return -1;
    }
    if(altura[x] > altura[y]){
        return 1;
    }
    return strcmp(nome[x],nome[y]);
}

int main(){
    int t, n, m, i, j, id[112345], a = 1, k;

    scanf("%d", &t);
    for(i = 0; i < t; i++){
        scanf("%d%d", &n, &m);
        for(j = 0; j < n; j++){
            scanf("%s %d %d %lf", nome[j], &peso[j], &idade[j], &altura[j]);
            id[j] = j;
        }
        qsort(id, n, sizeof(int), cmp);
        /*for(j = 0; j < m; j++){
            printf("%s\n", nome[id[j]]);
        }*/
        printf("CENARIO {%d}\n", a);
        for(k = 0;k < m;k++){
            printf("%d - %s\n",k+1, nome[id[k]]);
        }
        a++;
    }


    return 0;
}
