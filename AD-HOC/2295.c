#include <stdio.h>

int main(){
    double A,G,RA,RG;
    scanf("%lf%lf%lf%lf",&A,&G,&RA,&RG);
    if((RA/A) > (RG/G)){
        printf("A\n");
    } else if(RA/A < (RG/G)){
        printf("G\n");
    } else if((RA/A) == (RG/G)){
        printf("G\n");
    }
    return 0;
}
