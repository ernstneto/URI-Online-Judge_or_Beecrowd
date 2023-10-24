#include <stdio.h>

int main(){
	char a1[10], a2[10], a3[10], a4[10];
	scanf("%[^.]", a1);
	scanf(".%[^.]", a2);
	scanf(".%[^-]", a3);
	scanf("-%[^\n]", a4);
	
	printf("%s\n", a1);
	printf("%s\n", a2);
	printf("%s\n", a3);
	printf("%s\n", a4);
	return 0;
}