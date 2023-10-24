#include <stdio.h>

int main(){
	int i=0;
	double a;
	int p = 0;
	double media = 0; 
	int x = 1;
	while(x <= 6){
		scanf("%lf",&a);
		if(a > 0){
			p+=1;
			media+=a;
			i+=1;
		}
		x++;
	}
	printf("%d valores positivos\n", p);
	printf("%.1lf\n", media/i);
	return 0;
	}
	
	
	