#include <stdio.h>

int main(){
	int i = 1, a = 100;

	for(i; i <= a; i++){
		if(i%2 == 0){
			printf("%d\n", i);
		}
	}

	return 0;
}