#include "uhead.h"
int main()
{
	int a[NUMBER];
	struct arg t;
	urand(a, NUMBER);
	show(a, NUMBER);
	t = operater(a, NUMBER);
	printf("sum = %d, ave = %f\n", t.sum, t.ave);
	 return 0;
}
