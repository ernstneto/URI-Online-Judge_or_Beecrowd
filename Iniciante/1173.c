#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, n;
	
	scanf("%d", &n);
	for(i = 0; i < 10; i++){
		printf("N[%d] = %d\n", i, n);
		n = 2*(n);
	}
	
	
	return 0;
}