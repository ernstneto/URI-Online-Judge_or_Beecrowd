#include <stdio.h>

int main(){
	int i;
	char n1[100], n2[100];
	scanf("%[^.]%*c", n1);
	scanf("%[^\n]", n2);
	if(n2[0] == '0'){
		for(i = 1; i < 3; i++){
			if(n2[i] != '0'){
				printf("%c", n2[i]);
			}
			else{
				break;
			}
			
		}
		printf(".%s\n", n1);
	}
	else{
	
	printf("%s", n2);
	printf(".%s\n", n1);
	}
	
	return 0;
}