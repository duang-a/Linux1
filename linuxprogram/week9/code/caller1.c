#include "my.h"

int main()
{
	int ret;
	printf("caller1: pid = %d, ppid = %d\n", getpid(), getppid());
	ret = system("./test 123 445 hello world");
	printf("After calling!");
	sleep(10);
	return 0;
}
