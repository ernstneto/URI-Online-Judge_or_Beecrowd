#include <stdio.h>

int main(){
	int N;
	int X, Y;
	scanf("%d", &N);
	int i = 0;
	int S = 0;
	int q = 1;
	while(q <= N){
		S = 0;
		scanf("%d %d", &X, &Y);
		if(X % 2 > 0){
			for(i = 0; i < Y; i++){
				S += X;
				X = X + 2;
			}
		}
		else if(X % 2 == 0){
			X +=1;
			for(i = 0; i < Y; i++){
				S += X;
				X = X + 2;
			}
		}
		printf("%d\n", S);
		q++;
	}
	
	
	
	return 0;
}