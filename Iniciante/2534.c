#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b){
    int x = (*(int*)a);
    int y = (*(int*)b);
    if(x > y){
        return -1;
    }
    if(x < y){
        return 1;
    }
    if(x == y){
        return 0;
    }
}

int main(){
    int n, q, i, a[30000], b, id[30000];
    while(scanf("%d%d", &n, &q) != EOF){
        for(i = 0; i < n; i++){
            scanf("%d", &a[i]);
            id[i] = i;
        }
        qsort(a, n, sizeof(int), cmp);
        for(i = 0; i < q; i++){
            scanf("%d", &b);
            printf("%d\n", a[id[b-1]]);
        }

    }

    return 0;
}
