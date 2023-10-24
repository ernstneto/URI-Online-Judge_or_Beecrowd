#include <stdio.h>

int main(){
    int b = 0;
    double a;
    for(int i = 0; i < 6; i++){
        scanf("%lf", &a);
        if(a > 0.0)
            b++;
    }
    printf("%d valores positivos\n",b);
    return 0;
}
