#include <stdio.h>

int main(){
    double salario,reajuste, porcentagem;
    scanf("%lf",&salario);
    if(salario <= 400.00){
        porcentagem = 15;
        printf("Novo salario: %.2lf\n",salario *1.15);
        printf("Reajuste ganho: %.2lf\n",(salario*1.15)-salario);
        printf("Em percentual: %.0lf %\n",porcentagem);

    }
    else if(salario > 400.00 && salario <= 800.00){
        porcentagem = 12;
        printf("Novo salario: %.2lf\n",salario *1.12);
        printf("Reajuste ganho: %.2lf\n",(salario*1.12)-salario);
        printf("Em percentual: %.0lf %\n",porcentagem);
    }
    else if(salario > 800.00 && salario <= 1200.00){
        porcentagem = 10;
        printf("Novo salario: %.2lf\n",salario *1.1);
        printf("Reajuste ganho: %.2lf\n",(salario*1.1)-salario);
        printf("Em percentual: %.0lf %\n",porcentagem);
    }
    else if(salario > 1200.00 && salario <= 2000.00){
        porcentagem = 7;
        printf("Novo salario: %.2lf\n",salario *1.07);
        printf("Reajuste ganho: %.2lf\n",(salario*1.07)-salario);
        printf("Em percentual: %.0lf %\n",porcentagem);

    }
    else if(salario > 2000.00){
        porcentagem = 4;
        printf("Novo salario: %.2lf\n",salario *1.04);
        printf("Reajuste ganho: %.2lf\n",(salario*1.04)-salario);
        printf("Em percentual: %.0lf %\n",porcentagem);
    }
    return 0;
}
