#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tb[666][666];
int mov[4][2] = {{-1,0},{+1,0},{0,-1},{0,+1}};

void marca(int x, int y){
    tb[x][y] = 2;
    for(int i = 0; i < 4; i++){
        int xviz = x + mov[i][0];
        int yviz = y + mov[i][1];
        if(xviz < 0 || xviz > 4 || yviz < 0 || yviz > 4){
            continue;
            //return;
        }
        if(tb[xviz][yviz] != 0){
            //return;
            continue;
        }
        marca(xviz,yviz);
    }
}


int main(){
    int n;
    scanf("%d",&n);
    for(int e = 0; e < n; e++){
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                scanf("%d",&tb[i][j]);
            }
        }
        marca(0,0);
        if(tb[4][4] == 2){
            printf("COPS\n");
        }
        else{
            printf("ROBBERS\n");
        }
    }
    return 0;
}
