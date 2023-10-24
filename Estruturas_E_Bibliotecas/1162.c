#include <stdio.h>
#include <stdlib.h>

int v[50], cont = 0, a = 0;
/*
int cmp(const void *a, const void *b){
	int x = (*(int*)a), y = (*(int*)b);
	if(x < y){
		return 1;
	}
	if(x > y){
		cont++;
		return -1;
	}
	return 0;
}
*/
int main(){
	int n, l, i, j, k, id[50], b = 0, aux;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &l);
		for(j = 0; j < l; j++){
			scanf("%d", &v[j]);
			id[j] = j;
		}
		/*for(j = 0; j < l; j++){
			printf("%d\n", v[j]);
		}*/
		//qsort(id, l, sizeof(int), cmp);
		//printf("\n");
		for(j = 0; j < l; j++){
			//printf("%d\n", v[id[j]]);
			for(k = j +1; k < l; k++){
				if(v[j] > v[k]){
					aux = v[j];
					v[j] = v[k];
					v[k] = aux;
					cont++;
				}
			}
		}
		/*for(j = 0; j < l; j++){
			printf("%d\n", v[j]);
			printf("%d\n", v[id[j]]);
		}
		*/
		printf("Optimal train swapping takes %d swaps.\n", cont);
		cont = 0;
	}

	return 0;
}
