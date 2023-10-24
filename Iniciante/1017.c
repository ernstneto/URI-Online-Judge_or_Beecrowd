#include <stdio.h>

int main(){
	int c = 12, h, v;
	double l;

	scanf("%d%d", &h, &v);
	l =(double) (v * h)/12;
	printf("%.3lf\n", l );


	return 0;
}
