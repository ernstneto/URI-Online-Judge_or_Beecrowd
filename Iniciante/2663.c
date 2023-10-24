#include <stdio.h>
#include <stdlib.h>

int v[1123456];

int cmp(const void *a, const void *b){
	int x = (*(int*)a), y = (*(int*)b);
	if(x > y){
		return 1;
	}
	if(x < y){
		
		return -1;
	}
	return 0;
}

int main(){
	int n, k, i, j, b = 0;
	int maior = 0, cont = 0;
	scanf("%d%d", &n, &k);
	for(i = 0; i < n; i++){
		scanf("%d", &v[i]);
	}
	/*for(i = 0; i < n; i++){
		printf("%d\n", v[i]);
	}
	printf("\n");*/
	qsort(v, n, sizeof(int), cmp);
	/*for(i = 0; i < n; i++){
		printf("%d\n", v[i]);
	}
	printf("\n");*/
	v[n] = maior;
	for(i = n-1; i >= 0; i--){
		if(v[i] == maior){
			cont++;
			b++;
		}
		if(v[i] != maior && b < k){
			maior = v[i];
			cont++;
			b++;
		}
	}
	printf("%d\n", cont);
	cont = 0, b = 0;
	return 0;
}