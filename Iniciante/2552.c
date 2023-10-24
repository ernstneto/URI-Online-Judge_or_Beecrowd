#include <stdio.h>
 
int main() {
    int n,m;
    while(scanf("%d %d", &n, &m) != EOF){
        int matriz[n][m];
        int i,j,c,num;
        for(i = 0;i < n;i++)
            for(j = 0;j < m;j++){
                scanf("%d", &matriz[i][j]);
            }
        for(i = 0;i < n;i++){
            for(j = 0;j < m;j++){
                if(matriz[i][j] == 1)
                    printf("9");
                else{
                    num = 0;
                    if(i - 1 >= 0)
                        if(matriz[i-1][j] == 1)
                            num++;
                            if(i+1 < n)
                                if(matriz[i+1][j] == 1)
                                    num++;
                                if(j+1 < m)
                                    if(matriz[i][j+1] == 1)
                                        num ++;
                                if(j-1 >= 0)
                                    if(matriz[i][j-1] == 1)
                                        num++;
                                printf("%d",num);
                }
            }
            printf("\n");
        }
    }
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}