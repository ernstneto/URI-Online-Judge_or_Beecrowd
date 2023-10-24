#include <stdio.h>
#include <stdlib.h>

/*int cmp(void *a,void *b){
    //int x = (int*)a, y = (int*)b;
    return a - b;
}*/

int main(){
    int a[1100],b[1100],n,cont,soma1,soma2;
    scanf("%d",&n);
    cont = n;
    for(int i = 0; i < n; i++){
        soma1+=cont;
        cont--;
    }
    for(int i = 0; i < n-1; i++){
        scanf("%d",&b[i]);
        soma2+=b[i];
    }
    //qsort(b,n-1,sizeof(int),cmp);
    /*for(int i  = 0; i < n-1; i++){
        if(b[i] == cont){
            cont++;
            i = 0;
        }
    }*/
    printf("%d\n",soma1-soma2);
    /*for(int i = 0; i < n - 1; i++){
        if(a[i] != b[i]){
            printf("%d\n",a[i]);
            break;
        }
    }*/
    return 0;
}
