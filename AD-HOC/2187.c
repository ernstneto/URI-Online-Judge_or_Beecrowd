#include <stdio.h>

int main(){
    int V,I,J,K,L,contador = 1;
    while(scanf("%d",&V)!=0){
        if(V == 0){
            break;
        }
        else{
            I = V/50;
            V = V%50;
            J = V/10;
            V = V%10;
            K = V/5;
            V = V%5;
            L = V;
            printf("Teste %d\n",contador);
            printf("%d %d %d %d\n",I,J,K,L);
            contador++;
            printf("\n");
        }
    }
    return 0;
}
