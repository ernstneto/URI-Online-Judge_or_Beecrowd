#include <stdio.h>

int pegaMinutos(){
    int h, m;
    scanf("%d:%d",&h,&m);
    return h*60 + m;
}

int main(){
    int pa = pegaMinutos();
    int cb = pegaMinutos();
    int pb = pegaMinutos();
    int ca = pegaMinutos();

    int d = (ca + cb - pa - pb);
    while(d < 0){
        d += 24*60;
    }
    while(d > 24*60){
        d -= 24*60;
    }
    d /= 2;
    int f = (cb - pa - d)/60;
    while(f < -11){
        f += 24;
    }
    while(f > 12){
        f -= 24;
    }
    printf("%d %d\n",d, f);
    return 0;
}
