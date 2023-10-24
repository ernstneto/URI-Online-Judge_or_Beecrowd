#include <stdio.h>

int main(){
    double n,cont,a,soma1,soma2,soma3;
    double media1,media2,media3;
    char l;
    scanf("%lf",&n);
    for(int i = 0; i < n; ++i){
        scanf("%lf %c",&a, &l);
        if(l == 'C'){
            soma1+= a;
        }
        else if(l == 'R'){
            soma2+= a;
        }
        else if(l == 'S'){
            soma3+= a;
        }
        cont+= a;
    }
    media1 = soma1/cont;
    media2 = soma2/cont;
    media3 = soma3/cont;
    printf("Total: %.0lf cobaias\n",cont);
    printf("Total de coelhos: %.0lf\n",soma1);
    printf("Total de ratos: %.0lf\n",soma2);
    printf("Total de sapos: %.0lf\n",soma3);
    printf("Percentual de coelhos: %.2lf %%\n",media1*100);
    printf("Percentual de ratos: %.2lf %%\n",media2*100);
    printf("Percentual de sapos: %.2lf %%\n",media3*100);
    return 0;
}
