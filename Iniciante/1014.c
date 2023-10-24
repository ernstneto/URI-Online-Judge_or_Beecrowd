#include <stdio.h>

int main(){
	int X;
	double l;

	scanf("%d%lf", &X, &l);
	printf("%.3lf km/l\n", X/l);

	return 0;
}