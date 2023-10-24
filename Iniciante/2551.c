#include <stdio.h>
 
int main() {
    int N, i, t, km;
	double v, maior;
	
	while((scanf("%d", &N)) != EOF){
		maior = 0;
		
		for(i=1; i <=N; i++){
			scanf("%d %d", &t, &km);
			v= km*1.0/t*1.0;
			
			if(v > maior){
				printf("%d\n", i);
				maior = v;
				}
			}
		}
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}