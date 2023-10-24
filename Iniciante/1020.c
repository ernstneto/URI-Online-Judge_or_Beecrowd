#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int ano, mes, dia;
    ano = N / 365;
    N = N %365;
    mes = (N)/30;
    N = N % 30;
    dia = N;
    printf("%d ano(s)\n",ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
    return 0;
    }