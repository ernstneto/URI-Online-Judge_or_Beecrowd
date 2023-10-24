#include <stdio.h>

int main(){
	
	int t;
	int t1 = 0;
	int t2 = 0;
	scanf("%d", &t);

	if(t > 60){
		// t = m * 60 + r
		t1 = t / 60;
		t = t - t1 * 60;
		if(t1 > 60){
			t2 = t1 / 60;
			t1 = t1 - t2 * 60;
		}
	}
	
	printf("%d:%d:%d\n", t2, t1, t);

	return 0;
}