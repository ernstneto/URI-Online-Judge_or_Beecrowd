#include <stdio.h>

int main(){
	int i, j, k, l, c = 4, a = 0, d;
	double M[12][12], S = 0.0;
	char O[2];
	
	scanf("%s", O);
	for(i = 0; i <= 11; i++){
		for(j = 0; j <= 11; j++){
			scanf("%lf", &M[i][j]);
		}
	}
	
	for(k = 1; k <= 10; k++){
		if(k <= 5){
			for(d = 0; d <= a; d++){
				S += M[k][d];
			}
			a++;
		}
		else if(k >= 6){
			for(d = 0; d <= c; d++){
				S += M[k][d];
			}
			c--;
		}
	}
	if(O[0] == 'S'){
		printf("%.1lf\n", S);
	}
	else if(O[0] == 'M'){
		printf("%.1lf\n", S/66.0);
	}
	return 0;
}