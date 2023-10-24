#include <stdio.h>

int main(){
	int N;
	int c = 0;
	int s = 0;
	scanf("%d", &N);
	int i;
	for(i = 2; i <= N; i++){
		c = N * N;
		if(i % 2 ==0){
			s = i * i;
			if(c >= s){
				printf("%d^2 = %d\n", i, s);
				s = 0;
			}
			else{
				break;
			}
		}	
	}
		
	
	return 0;
}