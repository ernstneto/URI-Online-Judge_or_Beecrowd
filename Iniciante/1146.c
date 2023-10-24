#include <stdio.h>

int main(){
	int x;
	int a = 1;
	while(a){
		scanf("%d", &x);
		if(x == 0){
			break;
		}
		else{
			int i = 1;
			for(i; i <= x; i++){
				if(i == x){
					printf("%d\n", i);
				}
				else if(i < x){
					printf("%d ", i);
				}
			}
		}
	}
	
	return 0;
}