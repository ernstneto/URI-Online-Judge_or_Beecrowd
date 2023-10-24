#include <stdio.h>

int main(){
    int N,n1,n2,n3,n4,n5,n6,n7;
    int c1 = 100, c2 = 50, c3 = 20, c4 = 10, c5 = 5, c6 = 2, c7 = 1;
    scanf("%d",&N);
    printf("%d\n",N);
    n1 = N/c1;
    printf("%d nota(s) de R$ 100,00\n",n1);
    N = N%c1;
    n2 = N/c2;
    printf("%d nota(s) de R$ 50,00\n",n2);
    N = N%c2;
    n3 = N/c3;
    printf("%d nota(s) de R$ 20,00\n",n3);
    N = N%c3;
    n4 = N/c4;
    printf("%d nota(s) de R$ 10,00\n",n4);
    N = N%c4;
    n5 = N/c5;
    printf("%d nota(s) de R$ 5,00\n",n5);
    N = N%c5;
    n6 = N/c6;
    printf("%d nota(s) de R$ 2,00\n",n6);
    N = N%c6;
    n7 = N/c7;
    printf("%d nota(s) de R$ 1,00\n",n7);
    N = N%c7;
    return 0;
}
