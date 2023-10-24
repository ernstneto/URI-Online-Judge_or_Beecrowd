#include <stdio.h>

int main(){
    double D1,V1,D2,V2;
    int N1,N2;
    scanf("%d%lf%lf",&N1,&D1,&V1);
    scanf("%d%lf%lf",&N2,&D2,&V2);
    double T1 = D1/V1;
    double T2 = D2/V2;
    if(T1 < T2){
        printf("%d\n",N1);
    } else if(T1 > T2){
        printf("%d\n",N2);
    }
    return 0;
}
