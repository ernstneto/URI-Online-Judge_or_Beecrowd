#include <stdio.h>
#include <math.h>

int main(){
    double L,A,P,R;
    scanf("%lf%lf%lf%lf",&L,&A,&P,&R);
    double d = sqrt((L*L)+(A*A)+(P*P));
    R = R*2;
    if(d <= R){
        printf("S\n");
    }
    else{
        printf("N\n");
    }
    return 0;
}
