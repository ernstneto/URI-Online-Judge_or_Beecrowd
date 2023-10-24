#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int v[n],a[n];
    for(int i = 0; i < n; ++i){
        scanf("%d",&v[i]);
        a[i] = 0;
    }
    for(int i = 0; i < n; i++){
        if(v[i] == 1){
            a[i]++;
        }
        if(v[i-1] == 1 && i >= 1){
            a[i]++;
        }
        if(v[i+1] == 1 && i <= n-1){
            a[i]++;
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
