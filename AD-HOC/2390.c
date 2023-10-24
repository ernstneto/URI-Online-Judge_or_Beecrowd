#include <stdio.h>

int main(){
	int n,t[1000], soma = 0, dif = 0;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d",&t[i]);
	}
	for(int i = 1; i < n; i++){
		if(t[i] - t[i-1] > 10){
			dif+=10;
		}
		else{
			dif += t[i] - t[i-1];
		}
	}
	dif+=10;
	printf("%d\n",dif);
	return 0;
}