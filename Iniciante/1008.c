#include <stdio.h>

int main(){
	int n, h;
	double v;
	scanf("%d%d", &n, &h);
	scanf("%lf", &v);
	printf("NUMBER = %d\n", n);
	double s;
	s = (h * v);
	printf("SALARY = U$ %.2lf\n", s);
	


	return 0;
}