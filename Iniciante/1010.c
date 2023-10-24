#include <stdio.h>

int main(){
    int n1,n2;
    double p1, q1,p2,q2,soma;
    scanf("%d%lf%lf",&n1,&q1,&p1);
    scanf("%d%lf%lf",&n2,&q2,&p2);
    soma = q1*p1 + q2*p2;
    printf("VALOR A PAGAR: R$ %.2lf\n",soma);
    return 0;
}
