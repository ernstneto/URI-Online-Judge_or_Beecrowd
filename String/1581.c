#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[11234][11234];
int cont = 0, flag = 0;

int cmp(const void *a, const void *b){
    return strcmp(a,b);
}
int cmp2(const void *a, const void *b){
    if(strcmp(a,b) == 0){
        ++cont;
    }
    if(strcmp(a,b) != 0){
        ++flag;
    }
    return 0;
}


int main(){
    int n , m, i, j;

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &m);
        for(j = 0; j < m; j++){
            scanf("%s", s[j]);
        }
        qsort(s, m, sizeof(s[0]), cmp);
        qsort(s, m, sizeof(s[0]), cmp2);
        if(flag != 0){
            printf("ingles\n");
        }
        if(flag == 0 || cont == m){
            printf("%s\n", s[0]);
        }
        cont = 0, flag = 0;
    }

    return 0;
}
