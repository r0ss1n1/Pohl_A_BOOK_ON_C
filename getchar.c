#include <stdio.h>

int main(void){
	char c;

	c = getchar();

	while(c != EOF){
		putchar(c);
		c = getchar(c);
	}
	return 0;
}