#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int maior = 0;
	int medio = 0;
	int menor = 0;
	
	if(a > b && a > c){
		maior = a;
		if(b > c){
			medio = b;
			menor = c;
		}
		else if(b < c){
			medio = c;
			menor = b;
		}
	}
	else if(b > a && b > c){
		maior = b;
		if(a > c){
			medio = a;
			menor = c;
		}
		else if(a < c){
			medio = c;
			menor = a;
		}
	}
	else if(c > a && c > b){
		maior = c;
		if(b > a){
			medio = b;
			menor = a;
		}
		else if(b < a){
			medio = a;
			menor = b;
		}
	}
	printf("%d\n", menor);
	printf("%d\n", medio);
	printf("%d\n", maior);
	printf("\n");
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	
	return 0;
}