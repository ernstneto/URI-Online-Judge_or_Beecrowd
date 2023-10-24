#include <stdio.h>

int main(){
    int m,n,v[112][112],maior,cont,i,j;
    scanf("%d%d",&m,&n);
    for(i = 0;i < m; ++i){
        for(j = 0; j < n; ++j){
            scanf("%d",&v[i][j]);
        }
    }
    for(i = 0; i < m; ++i){
        for(j = 0; j < n; ++j){
            cont += v[i][j];
        }
        if(cont > maior){
            maior = cont;
        }
        cont = 0;
    }
    for(j = 0; j < n; ++j){
        for(i = 0; i < m; ++i){
            cont += v[i][j];
        }
        if(cont > maior){
            maior = cont;
        }
        cont = 0;
    }
    printf("%d\n",maior);
    return 0;
}
