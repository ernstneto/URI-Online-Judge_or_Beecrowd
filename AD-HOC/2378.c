#include <stdio.h>

int main(){
    int N,C,S,E,soma = 0,aux = 0;
    scanf("%d%d",&N,&C);
    for(int i = 0; i < N; i++){
        scanf("%d%d",&S,&E);
        soma = soma - S;
        soma = soma + E;
        if(soma > C){
            aux++;
        }
    }
    if(aux > 0){
        printf("S\n");
    }
    else{
        printf("N\n");
    }
    return 0;
}
