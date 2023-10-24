#include <stdio.h>
#include <math.h>

int main(){
	int N;
	scanf("%d", &N);
	int i;
	for(i = 1; i <= N; i++){
		if(i == 1){
			printf("%d %d %d\n", i, i, i);
			printf("%d %d %d\n", i, i*2, i*2);
		}
		else if(i > 1){
			printf("%d %d %d\n", i, i*i, i*i*i);
			printf("%d %d %d\n", i, i*i + 1, i*i*i + 1);
		}
	}
	
	return 0;
}