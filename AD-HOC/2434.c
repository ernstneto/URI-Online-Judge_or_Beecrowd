#include <stdio.h>

int main(){
    int saldo, n, x;

    scanf("%d%d", &n, &saldo);
    int m, resposta = saldo;
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        saldo = saldo + x;
        if(saldo < resposta){
            resposta = saldo;
        }
    }


    printf("%d\n", resposta);

    return 0;
}
