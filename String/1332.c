#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main(){
	int n, d, j;
	char p[1000];
	char p0, p1, p2;
	
	scanf("%d", &n);
	int i;
	for(i = 0; i < n; i++){
		scanf("%s", p);
		if(strlen(p) == 5){
			d = 3;
		}
		else{
			for(j = 0; j < 6; j++){
				p0 = p[0];
				p1 = p[1];
				p2 = p[2];	
			}
			if((p0 == 'o' && p1 == 'n') || (p0 == 'o' && p2 == 'e') || (p1 = 'n' && p2 == 'e')){
				d = 1;
			}
			else{
				d = 2;
			}
		}
		printf("%d\n", d);
	}
	
	return 0;
}