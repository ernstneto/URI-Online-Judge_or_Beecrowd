#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int compara(const void * a, const void * b){
	char *x = ((char *) a), *y = ((char *) b);
	return strcmp(x, y);
}

int main(){
	int N, K, i = 0;
	char nome[100][29];

	scanf("%d", &N);
	scanf("%d", &K);
	
	for(i; i < N; ++i){
		scanf("%s", nome[i]);
	}


	qsort(nome, N, 29 * sizeof(char), compara);
	for(i =1; i <= N; ++i){
		if(i == K){
			printf("%s\n", nome[i-1]);
		}

	}

	return 0;
}