#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMBER 100
struct arg{
	float ave;
	int sum;
};

void show(int *, int );
void urand(int *, int);
struct arg operater(int *, int);
