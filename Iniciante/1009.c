#include <stdio.h>

int main(){
	char nome[100];
	double s, v;
	
	scanf("%s", nome);
	scanf("%lf", &s);
	scanf("%lf", &v);
	
	double soma = 0;
	
	soma = s + (v*0.15);
	printf("TOTAL = R$ %.2lf\n", soma);
	
	
	return 0;
}