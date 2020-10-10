#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(void){
	int fahr;

	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
		printf("%3d %6.1f\n", fahr,(float) 5 * (fahr - 32) / 9);
	}
	return 0;
}