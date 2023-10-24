#include <stdio.h>

int main(){
    int n,a,b,cont = 1;
    char nome1[101],nome2[101];
    while(scanf("%d",&n) != EOF){
        if(n == 0){
            break;
        }
        else if(n > 0){
            scanf("%s %s",nome1,nome2);
            printf("Teste %d\n",cont);
            for(int i = 0; i < n; ++i){
                scanf("%d%d",&a,&b);
                if(((a + b) % 2) == 0){
                    printf("%s\n",nome1);
                }
                else if(((a + b) % 2) == 1){
                    printf("%s\n",nome2);
                }
            }
            printf("\n");
        }
        cont++;
    }
    return 0;
}
