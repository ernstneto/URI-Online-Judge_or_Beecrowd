#include <stdio.h>
 
int main() {
    int n,a,b,dif,tempo;

	scanf("%d %d %d", &n, &a, &b);

	tempo = a+b;
	dif = n - tempo ;

	if(dif >= 0)
		printf("Farei hoje!\n");
	else
		printf("Deixa para amanha!\n");
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}