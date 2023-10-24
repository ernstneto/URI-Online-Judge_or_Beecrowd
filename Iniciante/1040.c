#include <stdio.h>

int main(){
	double N1, N2, N3, N4;
	scanf("%lf%lf%lf%lf", &N1, &N2, &N3, &N4);
	double media;
	media = ( (N1*2) + (N2*3) + (N3*4) + (N4*1) )/ 10;
	
	if(media >= 7.0){
		printf("Media: %.1lf\n", media);
		printf("Aluno aprovado.\n");
	}
	else if(media >= 5.0 && media < 7.0){
		printf("Media: %.1lf\n", media);
		printf("Aluno em exame.\n");
		double NF;
		scanf("%lf", &NF);
		printf("Nota do exame: %.1lf\n", NF);
		double mediaf;
		mediaf = (media + NF) / 2;
		if(mediaf >= 5.0){
			printf("Aluno aprovado.\n");
			printf("Media final: %.1lf\n", mediaf);
		}
		else{
			printf("Aluno reprovado.\n");
			printf("Media final: %.1lf\n", mediaf);
		}
	}
	else{
		printf("Media: %.1lf\n", media);
		printf("Aluno reprovado.\n");
	}
	
	return 0;
}