#include <stdio.h>

int main(){
    int a[6], x, i, j;
    int maior = 0, menor = 0;

    for(i = 0; i < 5; i++){
        scanf("%d", &x);
        while(x < 1 || x > 13){
            scanf("%d", &x);
        }
        a[i] = x;
    }
    /*for(i = 0; i < 5; i++){
        printf("%d\n", a[i]);
    }*/

    for(i = 0; i < 5; i++){
        for(j = i - 1; j >= 0; j--){
            if(a[i] > a[j]){
                maior++;
            }
            else if(a[i] < a[j]){
                menor++;
            }
        }
    }
    if(maior > 0 && menor == 0){
        printf("C\n");
    }
    else if(maior == 0 && menor > 0){
        printf("D\n");
    }
    else if(maior > 0 && menor > 0){
        printf("N\n");
    }

    return 0;
}
