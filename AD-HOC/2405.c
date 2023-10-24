#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int tb[1123][1123];
int n,m;

int marca(int x, int y){
    int pintados = 1;
    tb[x][y] = 2;
    for(int i = x-1; i <= x+1;i++){
        for(int j = y-1; j <= y+1; j++){
            if(i < 1 || i > n || j < 1 || j > m){
                continue;
            }
            if(tb[i][j]){
                continue;
            }
            pintados+= marca(i,j);
        }
    }
    return pintados;
}

int main(){
    int x,y,k,a,b;
    scanf("%d%d%d%d%d",&n,&m,&x,&y,&k);
    for(int i = 0; i < k; i++){
        scanf("%d%d",&a,&b);
        tb[a][b] = 1;
    }

    int pintados = marca(x,y);
    printf("%d\n",pintados);

    return 0;
}
