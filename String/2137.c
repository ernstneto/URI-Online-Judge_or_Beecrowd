#include <stdio.h>
#include <stdlib.h>
int livro[112345];

int cmp(const void *a, const void *b){
	int x = (*(int*)a), y = (*(int*)b);
	if(x < y){
		return -1;
	}
	if(x > y){
		return 1;
	}
	return 0;
}

int main(){
	int n, i, id[112345];

	while(scanf("%d", &n) != EOF){
		for(i = 0; i < n; ++i){
			scanf("%d", &livro[i]);
			//id[i] = i;
		}
		qsort(livro, n, sizeof(int), cmp);
		for(i = 0; i < n; ++i){
			printf("%04d\n", livro[i]);
		}
	}
	return 0;
}