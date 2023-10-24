#include <stdio.h>

int main(){
    int a,b,c,x,y,z;
    scanf("%d%d%d",&a,&b,&c);
    scanf("%d%d%d",&x,&y,&z);
    int l = x/a;
    int comp = y/b;
    int h = z/c;
    int v = l*comp*h;
    printf("%d\n",v);
    return 0;
}
