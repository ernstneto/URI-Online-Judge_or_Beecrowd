#include <stdio.h>

int main(){
    int CV,CE,CS,FV,FE,FS;
    scanf("%d%d%d%d%d%d",&CV,&CE,&CS,&FV,&FE,&FS);
    int CP = (CV*3) + CE;
    int FP = (FV*3) + FE;
    if(CP > FP){
        printf("C\n");
    } else if(CP < FP){
        printf("F\n");
    } else if(CP == FP){
        if(CS > FS){
            printf("C\n");
        } else if(CS < FS){
            printf("F\n");
        } else if(CS == FS){
            printf("=\n");
        }
    }
    return 0;
}
