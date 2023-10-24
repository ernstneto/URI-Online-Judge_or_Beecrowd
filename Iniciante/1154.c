#include <stdio.h>

int main(){
	int N;
	int x = 1;
	int i = 0;
	double media = 0;
	while(x){
		scanf("%d", &N);
		if(N > 0){
			media += N;
			i++;
		}
		else if(N < 0){
			break;
		}	
	}
	printf("%.2lf\n", media/i);
}