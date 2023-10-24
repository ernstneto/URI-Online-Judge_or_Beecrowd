#include <stdio.h>

int main(){
    int N,T,V,distancia = 0;
    scanf("%d",&N);
    for(int i = 0; i < N; i++){
        scanf("%d%d",&T,&V);
        distancia+=T*V;
    }
    printf("%d\n",distancia);
    return 0;
}
