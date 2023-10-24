#include <stdio.h>

int main(){
	double v, pi = 3.14159, r;
	scanf("%lf", &r);
	v = (4*pi*(r*r*r))/3;
	printf("VOLUME = %.3lf\n", v);
	return 0;
}