#include <stdio.h>


int main(){
    double money;
    int n100 = 0 , n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0, n05 = 0, n025 = 0, n01 = 0, n005 = 0, n001 = 0;
    
    scanf("%lf",&money);
    
    if(money >= 100){
       while(money >= 100){ 
            n100++;
            money -= 100;
       }
       //printf("%.2lf\n",money);
    } 
    
    if(money >= 50){
       while(money >= 50){     
            n50++;
            money -= 50;
            }
       //printf("%.2lf\n",money);
    }
    
    if(money >= 20){
       while(money >= 20){
            n20++;
            money -= 20;
            }
       //printf("%.2lf\n",money);
    }
    
    if(money >= 10){
       while(money >= 10){ 
            n10++;
            money -= 10;
            }
        //printf("%.2lf\n",money);
    }
    
    if(money >= 5){
       while(money >= 5){     
            n5++;
            money -= 5;
            }
       //printf("%.2lf\n",money);
    }
    
    if(money >= 2){
       while(money >= 2){
            n2++;
            money -= 2;
            }
       //printf("%.2lf\n",money);
    }
    if(money >= 1){
       while(money >= 1){
            n1++;
            money -= 1;
            }
       //printf("%.2lf\n",money);
    }
    
    if(money >= 0.5){
       while(money >= 0.5){
            n05++;
            money -= 0.5;
            }
       //printf("%.2lf\n",money);
    }
    
    if(money >= 0.25){
       while(money >= 0.25){
            n025++;
            money -= 0.25;
            }
       //printf("%.2lf\n",money);
    }
    
    if(money >= 0.1){
       while(money >= 0.1){
            n01++;
            money -= 0.1;
            }
       //printf("%.2lf\n",money);
    }
    
    if(money >= 0.05){
       while(money >= 0.05){
            n005++;
            money -= 0.05;
            }
       //printf("%.2lf\n",money);
    }
    
    if(money >= 0.01){
       while(money >= 0.01){ 
            n001++;
            money -= 0.01;
            }
       //printf("%.2lf\n",money);
    }
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n100);
    printf("%d nota(s) de R$ 50.00\n",n50);
    printf("%d nota(s) de R$ 20.00\n",n20);
    printf("%d nota(s) de R$ 10.00\n",n10);
    printf("%d nota(s) de R$ 5.00\n",n5);
    printf("%d nota(s) de R$ 2.00\n",n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",n1);
    printf("%d moeda(s) de R$ 0.50\n",n05);
    printf("%d moeda(s) de R$ 0.25\n",n025);
    printf("%d moeda(s) de R$ 0.10\n",n01);
    printf("%d moeda(s) de R$ 0.05\n",n005);
    printf("%d moeda(s) de R$ 0.01\n",n001);
    return 0;
}