#include <stdio.h>

int main(){
	int N, n =1;
	int x, i = 1;
	int s = 0;
	scanf("%d", &N);
	while(n <= N){
		scanf("%d", &x);
		for(i = 1; i <= x-1; i++){
			if(x % i == 0){
				s = s + i;
			}
		}
		if(s == x){
			printf("%d eh perfeito\n", x);
		}
		else{
			printf("%d nao eh perfeito\n", x);
		}
		s = 0;
		n++;
	}
	
	
	return 0;
}