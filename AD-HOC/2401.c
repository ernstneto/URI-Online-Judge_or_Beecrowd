#include <stdio.h>

int main(){
    int n;
    double a,cont = 1;
    char pont;
    scanf("%d",&n);
    for(int i = 0; i < n; ++i){
        scanf("%lf %c",&a,&pont);
        if(pont == '*'){
            cont = cont * a;
        }
        else if(pont == '/'){
            cont = cont / a;
        }
    }
    printf("%.0lf\n",cont);
    return 0;
}
