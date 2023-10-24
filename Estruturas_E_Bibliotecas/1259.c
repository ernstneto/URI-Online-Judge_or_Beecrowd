#include <stdio.h>
#include <stdlib.h>

int cmp1(const void* a, const void* b){
    int x = *((int*)a), y = *((int*)b);

    if(x < y){
        return -1;
    }
    if(x > y){
        return 1;
    }
    return 0;
}
int cmp2(const void* a, const void* b){
    int x = *((int*)a), y = *((int*)b);

    if(x < y){
        return 1;
    }
    if(x > y){
        return -1;
    }
    return 0;
}

int main(){
    int N, i, a[100000],par[100000], impar[100000];
    int cont1 = 0, cont2 = 0, j = 0, k = 0;
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0){
            cont1++;
            par[j] = a[i];
            j++;

        }
        else{
            cont2++;
            impar[k] = a[i];
            k++;
        }
    }
    qsort(par, cont1, sizeof(int), cmp1);
    qsort(impar, cont2, sizeof(int), cmp2);

    for(i = 0; i < cont1; i++){
        printf("%d\n", par[i]);
    }
    for(i = 0; i < cont2; i++){
        printf("%d\n", impar[i]);
    }

    return 0;
}
