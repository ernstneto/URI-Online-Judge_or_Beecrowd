#include <stdio.h>

int main(){
    int n, k,a,v[1123],maior;
    scanf("%d%d",&n,&k);
    for(int i = 1; i <= k; i++){
        v[i] = 0;
    }
    for(int i = 0; i < n; i++){
        scanf("%d",&a);
        for(int j = 1;j <= k; j++){
            if(a == j){
                v[a] += 1;
            }
        }
    }
    maior = v[1];
    for(int i = 2; i <= k; ++i){
        if(v[i] < maior){
            maior = v[i];
        }
    }
    printf("%d\n",maior);
    return 0;
}
