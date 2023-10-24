#include <stdio.h>

int main(){
	int i, j, k, l, c = 10, a = 1;
	double M[12][12], S = 0.0;
	char O[2];
	
	scanf("%s", O);
	for(i = 0; i <= 11; i++){
		for(j = 0; j <= 11; j++){
			scanf("%lf", &M[i][j]);
		}
	}
	
	for(k = 11; k >= 7; k--){
		for(l = a; l <= c; l++){
			S += M[k][l];
		}
		a++;
		c--;
	}
	if(O[0] == 'S'){
		printf("%.1lf\n", S);
	}
	else if(O[0] == 'M'){
		printf("%.1lf\n", S/66.0);
	}
	return 0;
}