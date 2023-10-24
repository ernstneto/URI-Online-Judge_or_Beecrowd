#include <stdio.h>

int main(){
	int i=0;
	int a;
	int positivo = 0;
	int x = 1, impar = 0;
	int par = 0, negativo = 0;
	while(x <= 5){
		scanf("%d",&a);
		if(a % 2 == 0){
			par += 1;
			if(a > 0){
				positivo += 1;
			}
			else if(a < 0){
				negativo += 1;
			}
		}
		else{
			impar += 1;
			if(a > 0){
				positivo += 1;
			}
			else if(a < 0){
				negativo += 1;
			}
		}
		x++;
	}
	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", impar);
	printf("%d valor(es) positivo(s)\n", positivo);
	printf("%d valor(es) negativo(s)\n", negativo);
	return 0;
	}
		