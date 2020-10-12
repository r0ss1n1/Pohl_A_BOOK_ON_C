/* Compute the size of some fundamental data types.
Pohl et alia, a Book on C, p. 123. Charles Thomas Wallace
Truscott. Github.com/r0ss1n1 */

#include <stdio.h>

int main(void) {
	printf(" The size of some fundamental data types is computed.\n\n");
	printf("	char:%3u byte \n", sizeof(char));
	printf("	short:%3u bytes \n", sizeof(short));
	printf("	int:%3u bytes \n", sizeof(int));
	printf("	long:%3u bytes \n", sizeof(long));
	printf("	unsigned:%3u bytes \n", sizeof(unsigned));
	printf("	float:%3u bytes \n", sizeof(float));
	printf("	double:%3u bytes \n", sizeof(float));
	printf("	long double:%3u bytes \n", sizeof(long double));

	return 0;

}