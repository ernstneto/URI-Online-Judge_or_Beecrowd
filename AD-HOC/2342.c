#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n,p,q;
    char c, positivo = '+', multiplicacao = '*';
    scanf("%d",&n);
    scanf("%d %c %d",&p,&c,&q);
    if(c == positivo){
        if(p + q <= n){
            printf("OK\n");
        }
        else{
            printf("OVERFLOW\n");
        }
    }
    else if(c == multiplicacao){
        if(p * q <= n){
            printf("OK\n");
        }
        else{
            printf("OVERFLOW\n");
        }
    }
    return 0;
}
