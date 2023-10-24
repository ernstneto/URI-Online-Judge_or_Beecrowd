#include <stdio.h>

int main(){
	int a, n, f, limite = 40000000,cont = 0;

	scanf("%d%d",&a,&n);
	for(int i = 0; i < n; i++){
		scanf("%d",&f);
		if((a*f) >= limite){
			cont++;
		}
	}
	printf("%d\n",cont);
	return 0;
}