#include <stdio.h>

int main(){
	int n;
	int a;
	scanf("%d", &n);
	int p = 1;
	for(n; n >= 1; n--){
		p*=n;
	}
	printf("%d\n", p);
	return 0;
}