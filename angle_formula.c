#include <math.h>
#include <stdio.h>

#define M_PI 3.14159265359
/* Visual Studio 2019 does not have M_PI constant in math.h */
int main(void){
	double two_pi = 2.0 * M_PI;
	double h = 0.1;
	double x;

	for (x = 0.0; x < two_pi; x += h) printf("%5.lf: %.15e\n", x, sin(x) * sin(x) + cos(x) * cos(x));

	return 0;

}