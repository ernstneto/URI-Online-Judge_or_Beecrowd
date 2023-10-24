#include <stdio.h>

int main(){
	int i;
	int a = 39;
	for(i = 0; i < a; i++){
		printf("-");
	}
	printf("\n");
	printf("|x = 35                               |\n");
	printf("|                                     |\n");
	printf("|               x = 35                |\n");
	printf("|                                     |\n");
	printf("|                               x = 35|\n");
	for(i = 0; i < a; i++){
		printf("-");
	}
	printf("\n");
	return 0;
}