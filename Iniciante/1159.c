#include <stdio.h>

int main(){
	int X, a, b, c, d, e;
	int soma;
	while(scanf("%d", &X)){
		if(X == 0){
			break;
		}
		else if(X % 2 == 0){
			a = X;
			b = a + 2;
			c = b + 2;
			d = c + 2;
			e = d + 2;
		}
		else{
			a = X + 1;
			b = a + 2;
			c = b + 2;
			d = c + 2;
			e = d + 2;
		}
		soma = a + b + c + d + e;
		printf("%d\n", soma);
	}
	
	
	
	
	return 0;
}