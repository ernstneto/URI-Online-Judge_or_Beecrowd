#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i, j, c;
	char palavra[31];
	
	while(scanf("%s", palavra) != EOF){
		c = strlen(palavra);
		for(i = 1; c >= 2*i; i++){
			if(strncmp(&palavra[c - i], &palavra[c - 2 * i], i) == 0){
				palavra[c -i] = '\0';
				break;
			}
		}
		printf("%s\n", palavra);
		
	}
	
	return 0;
}