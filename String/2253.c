#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 200

int main(){		
	
	char senha[MAX];
	int flag, c, i, ma, mi, num;
	
	while(fgets(senha, MAX, stdin) != NULL){
		for(i=0; senha[i] >= ' '; i++);
		senha[i] = '\0';
		//printf("%s\n", senha);
		c = strlen(senha);
		if(c >= 6 && c <= 32){
			for(i = 0, flag = 0, ma = 0, mi = 0, num; i < c; i++){
				if(senha[i] >= 'a' && senha[i] <= 'z')
					mi=1;
				else 
					if(senha[i] >= 'A' && senha[i] <= 'Z')
						ma=1;
					else
						if(senha[i] >= '0' && senha[i] <= '9')
							num=1;
					else{
						flag=1;
						break;
					} 
			}
			if(flag || mi == 0 || ma == 0 || num == 0){
			
				printf("Senha invalida.\n");
			}
			else{
				printf("Senha valida.\n");
			}
		}else
			printf("Senha invalida.\n");
	}
	
	return 0;
}