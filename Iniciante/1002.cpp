#include <iostream>
 
using namespace std;
 
int main() {
	double area, Raio;
	scanf("%lf",&Raio);
	area = 3.14159 * Raio*Raio;
	printf("A=%.4lf\n", area);

    return 0;
}