#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n,m,total;
char tb[6666][6666];
int mov[4][2] = {{-1,0},{+1,0},{0,-1},{0,+1}};

void marca(int x, int y, int n, int m){
    tb[x][y] = 'o';
    for(int i = 0; i < 4; i++){
        int xviz = x + mov[i][0];
        int yviz = y + mov[i][1];
        if(xviz < 0 || xviz > n || yviz < 0 || yviz > m){
            continue;
        }
        if(tb[xviz][yviz] != '.'){
            continue;
        }
        marca(xviz,yviz,n,m);
    }
}

int main(){
    scanf("%d%d",&n,&m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf(" %c",&tb[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(tb[i][j] == '.'){
                marca(i,j,n,m);
                ++total;
            }
        }
    }
    printf("%d\n",total);
    return 0;
}
