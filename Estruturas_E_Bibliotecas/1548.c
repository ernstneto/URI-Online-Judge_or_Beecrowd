#include <stdio.h>
#include <stdlib.h>

int v[112345];

int cmp(const void *a, const void *b){
    int x = (*(int*)a), y = (*(int*)b);
    if(x > y){
        return -1;
    }
    if(x < y){
        return 1;
    }
    return 0;
}

int main(){
    int n, m , i, cont, j, a[112345];
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &m);
        cont = 0;
        for(j = 0; j < m; j++){
            scanf("%d", &v[j]);
        }
        for(j = 0; j < m; j++){
            a[j] = v[j];
        }
        qsort(v, m, sizeof(int), cmp);
        for(j = 0; j < m; j++){
            if(a[j] == v[j]){
                cont++;
            }
        }
        printf("%d\n", cont);
    }

    return 0;
}
