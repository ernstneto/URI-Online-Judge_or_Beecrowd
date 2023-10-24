#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n, m;
char pos[112][112];
int xviz, yviz;
void marca(int x, int y){
    pos[x][y] = 'T';
    //if(x < 0 || x >= )
    if(pos[x-1][y] == 'A'){
        //xviz = x-1;
        //yviz = y;
        //pos[xviz][yviz] = 'T';
        marca(x-1,y);
    }
    if(pos[x+1][y] == 'A'){
        //xviz = x+1;
        //yviz = y;
        //pos[xviz][yviz] = 'T';
        marca(x+1,y);
    }
    if(pos[x][y-1] == 'A'){
        //xviz = x;
        //yviz = y-1;
        //pos[xviz][yviz] = 'T';
        marca(x,y-1);
    }
    if(pos[x][y+1] == 'A'){
        //xviz = x;
        //yviz = y+1;
        //pos[xviz][yviz] = 'T';
        marca(x,y+1);
    }
}

int main(){
    while(scanf("%d%d",&n,&m)!= EOF){
        if(n == 0 && m == 0){
            break;
        }
        else{
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= m; j++){
                    scanf(" %c",&pos[i][j]);
                }
            }
            for(int i = 0; i <= n; i++){
                for(int j = 0; j <= m; j++){
                    if(pos[i][j] == 'T'){
                        marca(i,j);
                    }
                }
            }
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= m; j++){
                    printf("%c",pos[i][j]);
                }
                printf("\n");
            }
            printf("\n");
        }
    }


    return 0;
}
