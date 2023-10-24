#include <stdio.h>

int main(){
	int n, i, N[i], a = 0, b = 0, j, k, l = 0, m = 0;
	int par[15], impar[15], d;
	
	for(i = 0; i < 15; i++){
		scanf("%d", &d);
		if(d % 2 == 0){
			a++;
			par[l] = d;
			l++;
			if(a == 5){
				for(j = 0; j < a; j++){
					printf("par[%d] = %d\n", j, par[j]);	
					}
				j = 0;
				a = 0;
				l = 0;
			}
			else if(a <= 5 && i == 15){
				printf("par[%d] = %d\n", j, par[j]);
			}		
		}
		else if(d % 2 != 0){
			b++;
			impar[m] = d;
			m++;
			if(b == 5){
				for(k = 0; k < b; k++){
					printf("impar[%d] = %d\n", k, impar[k]);
				}
				b = 0;
				k = 0;
				m = 0;
			}
			else if(b <= 5 && i == 15){
				printf("impar[%d] = %d\n", k, impar[m]);
			}
		}
	}
	if(b <= 5 && i == 15){
		for(j = 0; j < b; j++)
				printf("impar[%d] = %d\n", j, impar[j]);
		}
	if(a <= 5 && i == 15){
		for(i = 0; i < a; i++)
				printf("par[%d] = %d\n", i, par[i]);
		}
	
	return 0;
}