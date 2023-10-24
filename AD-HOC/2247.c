#include <stdio.h>

int main(){
    int n,a,b;
    int dif = 0,cont = 0;
    while(scanf("%d",&n)!= EOF){
        dif = 0;
        if(n == 0)
            break;
        else{
            cont++;
            printf("Teste %d\n",cont);
            for(int i = 0; i < n; i++){
                scanf("%d%d",&a,&b);
                dif+= a - b;
                printf("%d\n",dif);
            }
        }
        printf("\n");
    }
    return 0;
}