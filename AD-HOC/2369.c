#include <stdio.h>

int main(){
	int preco=7, valor, aux;
	scanf("%d", &valor);
	aux = valor - 100;
	if(aux > 0){
		valor -= aux;
	 	preco += aux * 5;
	}
	aux = valor - 30;
	if(aux > 0){
		valor -= aux;
		preco += aux * 2;
	}
	aux = valor - 10;
	if(aux > 0)
		preco += aux;
	printf("%d\n", preco);
	return 0;
}
