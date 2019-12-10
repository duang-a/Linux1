#include "my.h"

void fun(void *arg)
{
	int TID = syscall(SYS_getpid);
	printf("worker--- %d : getpid return %d\n", TID, TID);
	printf("worker--- %d : pthread_self return %p\n", TID, (void*)pthread_self);
	printf("worker--- %d : will exit\n", TID);
	return NULL;
}

int main()
{
	pthread_t tid;
	int ret;
	ret = pthread_create(&tid, NULL, (void *(*)())fun, NULL);
	if(ret != 0)
	{
		perror("creat failed!\n");
		return -1;
	}
	pthread_join(tid,NULL);
	ret = pthread_create(&tid, NULL, (void *(*)())fun, NULL);
	if(ret != 0)
	{
		perror("creat failed!\n");
		return -1;
	}
	pthread_join(tid,NULL);
	printf("Master %d : ALL DONE!\n", getpid());
	return 0;
}

