#include <stdio.h>

int main(){
    int D;
    scanf("%d",&D);
    if(D > 1400){
        printf("3\n");
    }
    else if(D <= 1400 && D > 800){
        printf("2\n");
    }
    else if(D <= 800){
        printf("1\n");
    }
    return 0;
}
