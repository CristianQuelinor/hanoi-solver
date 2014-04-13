#ifndef HANOI_H
#define HANOI_H

/* i < j ==> disk i is smaller than disk j */

typedef enum Rod Rod;
enum Rod {
	LEFT = 1, MIDDLE = 2, RIGHT = 3, SUM = 6
};

void classicHanoi(int numberOfDisks);

#endif
