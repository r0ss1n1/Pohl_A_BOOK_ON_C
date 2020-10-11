#include <stdio.h>
#define CLASS_SIZE 5
/* Charles Thomas Wallace Truscott, p. 37 Pohl et alia 'A Book on C'
only works with integer values, not floating-point or double via scanf();
Noticed a format string problem here, I think this is a circa 1990s C book\
was used as a manual in RMITs C programming course. Wonder if I can package
a linear packet structure of MS08-067, MS09-050, MS17-010 to automatically
scan Chinese IP allocs and propogate with rootkits for all OS-identified 
protocol fingerprints at least until a new zero-day is found or bought.
Thanks to David Taylor Irvine AO and Nicholas Peter Warner AO & the Australian
Signal's Directorate, Australian Secret Intelligence Service, Australian Security
Organisation for nurturing me out of Satanic Ritual Abuse and Organised Sadistic
Abuse including 24hr surveillance after contacting Parliament in 2013, subsequently
being institutionalised and tortured within 24hrs. Nice to be under Nick Warner's
mentorship in 2012. Very thankful to have a bright future, much secured by the
Australian security services */

int main(void){
	int i, j, score[CLASS_SIZE], sum = 0, tmp;
	
	printf("Input %d scores:   ", CLASS_SIZE);
	for (i = 0; i < CLASS_SIZE; ++i) {
		scanf("%d", &score[i]);
		sum += score[i];
	}

	for (i = 0; i < CLASS_SIZE; ++i) {
		for (j = CLASS_SIZE - 1; j > i; --j) {
			tmp = score[j-1];
			score[j-1] = score[j];
			score[j] = tmp;
		}
	}
	printf("\nOrdered scores:\n\n");
	for (i = 0; i < CLASS_SIZE; ++i) printf("   score[%d] = %5d\n", i, score[i]);
	printf("\n%18%sd\n%18.lf%s\n\n", sum, " is the sum of all the scores", (double) sum / CLASS_SIZE, " is the class average");
	return 0;
}