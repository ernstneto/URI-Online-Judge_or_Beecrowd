#include <stdio.h>

int main(){
    int b = 0;
    int a;
    for(int i = 0; i < 5; i++){
        scanf("%d", &a);
        if(a % 2 == 0)
            b++;
    }
    printf("%d valores pares\n",b);
    return 0;
}
