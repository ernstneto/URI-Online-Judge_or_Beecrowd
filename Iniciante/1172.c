#include <stdio.h>

int main(){
	int n = 10;
	int X[n];
	int i;

	for(i = 0; i < n; i++){
		scanf("%d", &X[i]);
		if(X[i] <= 0){
			X[i] = 1;
			printf("X[%d] = %d\n", i, X[i]);
		}
		else{
			printf("X[%d] = %d\n", i, X[i]);
		}
	}


	return 0;
}