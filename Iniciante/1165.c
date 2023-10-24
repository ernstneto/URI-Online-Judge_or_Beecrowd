#include <stdio.h>

int main(){
	int N, n =1;
	int x, i = 1;
	int s = 0;
	scanf("%d", &N);
	while(n <= N){
		scanf("%d", &x);
		for(i = 2; i <= x-1; i++){
			if(x % i == 0){
				s += 1;
				break;
			}
		}
		if(s == 0){
			printf("%d eh primo\n", x);
		}
		else if (s == 1){
			printf("%d nao eh primo\n", x);
		}
		s = 0;
		n++;
	}
	
	
	return 0;
}