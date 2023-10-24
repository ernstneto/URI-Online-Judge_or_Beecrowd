#include <stdio.h>

int main(){
    int n,c,m, j = 0;
    scanf("%d%d%d",&n,&c,&m);
    int a[c],b[m],cont1 = 0,cont2 = 0;
    for(int i = 0; i < c; i++){
        scanf("%d",&a[i]);
        cont1++;
    }
    for(int i = 0; i < m; i++){
        scanf("%d",&b[i]);
    }
    for(int i = 0; i < c; i++){
        for(int j = 0; j < m; j++){
            if(b[j] == a[i]){
                cont2++;
                a[i] = -1;
            }
        }
    }
    printf("%d\n",cont1 - cont2);
    return 0;
}
