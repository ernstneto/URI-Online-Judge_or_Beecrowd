#include <stdio.h>
#include <string.h>
#include <stdlib.h>
unsigned a,b;
/*void showBits(int x){
    for(int i = 31; i >= 0; i--){
        if((x>>i)& 1){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    printf("\n");
}
*/
int main(){
    while(scanf("%u%u",&a,&b)!= EOF){
        //showBits(a);
        //showBits(b);
        //printf("%d\n",b | a);
        printf("%u\n",a ^ b);
    }
    return 0;
}
