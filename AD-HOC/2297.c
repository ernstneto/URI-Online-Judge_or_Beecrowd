#include <stdio.h>

int main(){
    int R, i,cont = 1,A,B,sa,sb;
    while(scanf("%d",&R)){
        sa = sb = 0;
        if(R==0){
            break;
        }
        else{
            for(int i = 0; i < R; i++){
                scanf("%d%d",&A,&B);
                sa+=A;
                sb+=B;
            }
            printf("Teste %d\n",cont);
            if(sa > sb){
                printf("Aldo\n");
            }
            else{
                printf("Beto\n");
            }
        }
        cont++;
        printf("\n");
    }
    return 0;
}
