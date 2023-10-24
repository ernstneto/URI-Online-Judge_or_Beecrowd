#include <stdio.h>

int main(){
    int L, D, K, P;
    scanf("%d%d%d%d", &L,&D,&K,&P);
    int custo = K*L;
    int x = L/D;
    int n_pedagio = x;
    
    printf("%d\n", x*P + K*L);
    return 0;
    }