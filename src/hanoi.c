#include <stdio.h>
#include "hanoi.h"

static int hanoiRecursive(int numberOfDisks, Rod originRod, Rod destinationRod);

/******************************************************************************/

static int hanoiRecursive(int numberOfDisks, Rod originRod, Rod destinationRod) {
	static int nbCalls = 0;
	if (numberOfDisks == 1) {
		printf("%d -> %d\n", originRod, destinationRod);
		nbCalls++;
	} else {
		hanoiRecursive(numberOfDisks-1, originRod, SUM-(originRod+destinationRod));
		hanoiRecursive(1, originRod, destinationRod);
		hanoiRecursive(numberOfDisks-1, SUM-(originRod+destinationRod), destinationRod);
	}
	
	return nbCalls;
}

void classicHanoi(int numberOfDisks) {
	printf("solved in %d operations\n", hanoiRecursive(numberOfDisks, LEFT, RIGHT));
}
