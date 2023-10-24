#include <stdio.h>

int main(){
	int A, B, C, D;
	int flag = 0;
	scanf("%d%d%d%d", &A, &B, &C, &D);
	if(B > C){
		flag++;
	}
	if(D > A){
		flag++;
	}
	if(C + D > A + B){
		flag++;
	}
	if(C > 0 && D > 0){
		flag++;
	}
	if(A % 2 == 0){
		flag++;
	}
	if(flag == 5){
		printf("Valores aceitos\n");
	}
	if(flag < 5){
		printf("Valores nao aceitos\n");
	}
	
	return 0;
	
}