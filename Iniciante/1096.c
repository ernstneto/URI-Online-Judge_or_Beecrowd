#include <stdio.h>

int main(){
	int i, j = 7;

	for(i = 1; i <= 9; i = i + 2){
		printf("I=%d J=%d\n", i, j);
		j -= 1;
		printf("I=%d J=%d\n", i, j);
		j -= 1;
		printf("I=%d J=%d\n", i, j);
		j = 7;
	}


	return 0;
}