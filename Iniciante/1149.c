#include <stdio.h>

int main(){
	int A, N;
	int i, soma = 0;
	scanf("%d%d", &A, &N);
	
	while(N <= 0){
		scanf("%d", &N);
	}
	if(A > 0 && N > 0){
		for(i = 0; i <= (N-1); i++){
			soma += A + i;
		}
	}
	printf("%d\n", soma);
	
	
	return 0;
}