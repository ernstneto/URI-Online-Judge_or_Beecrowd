#include <stdio.h>

int main(){
    int L,quant = 1;
    scanf("%d",&L);
    while(L >= 2){
        if(L < 2){
            break;
        }
        else{
            L=L/2;
            quant = quant*4;
        }
    }
    printf("%d\n",quant);
    return 0;
}
