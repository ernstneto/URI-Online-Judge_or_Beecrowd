#include <stdio.h>

int main(){
    int A, B, C;
    scanf("%d%d%d",&A,&B,&C);
    if(A > B && A > C){
        if(B > C){
            printf("%d\n",B);
        }else if(B < C){
            printf("%d\n",C);
        }
    }else if(B > C && B > A){
        if(A > C){
            printf("%d\n",A);
        }else if(A < C){
            printf("%d\n",C);
        }
    }else if(C > A && C > B){
        if(A > B){
            printf("%d\n",A);
        }else if(A < B){
            printf("%d\n",B);
        }
    }
    return 0;
}
