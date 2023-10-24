#include <stdio.h>

int main(){
	int E, N, dif;
	scanf("%d%d",&E,&N);
	dif = N-E;
	if(dif >= 3)
		printf("Muito bem! Apresenta antes do Natal!\n");
	else if(dif < 3 && dif >= 0){
		if(N != 23){
			printf("Parece o trabalho do meu filho!\n");
			printf("TCC Apresentado!\n");
		}
		else if(N == 23){
				printf("Parece o trabalho do meu filho!\n");
			printf("Fail! Entao eh nataaaaal!\n");
		}
	}
	else if(dif < 0){
		printf("Eu odeio a professora!\n");
	}
	return 0;
}