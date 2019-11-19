#include <stdio.h>
#include <time.h>
void init_daemon(void);

int main()
{
	FILE *fp;
	time_t t;
	init_daemon();
	while(1)
	{
		sleep(10);
		if((fp = fopen("1-6.log", "a")) >= 0)
		{
			t = time(0);
			fprintf(fp, "fork is running, time = %s", asctime(localtime(&t)));
			fclose(fp);
		}
	}
}
