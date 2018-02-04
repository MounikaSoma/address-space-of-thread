#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int a,b,c;

void *Thread1Proc()
{
	printf("This is thread 1");
	int l,j,k;
	a=11;
	b=12;
	c=13;
	printf("t1:address of local l:%p\n",&l);
	printf("t1:address of local j:%p\n",&j);
	printf("t1:address of local k:%p\n",&k);
	printf("t1:address of global a:%p\n",&a);
	printf("t1:address of global b:%p\n",&b);
	printf("t1:address of global c:%p\n",&c);
	while(1)
	{
		printf("t1:value of local l:%d\n",l);
		printf("t1:value of local j:%d\n",j);
		printf("t1:value of local k:%d\n",k);
		printf("t1:value of global a:%d\n",a);
		printf("t1:value of global b:%d\n",b);
		printf("t1:value of global c:%d\n",c);
	}
}
void *Thread2Proc()
{
	printf("This is thread 2");
	int l,j,k;
	a=21;
	b=22;
	c=23;
	printf("t2:address of local l:%p\n",&l);
	printf("t2:address of local j:%p\n",&j);
	printf("t2:address of local k:%p\n",&k);
	printf("t2:address of global a:%p\n",&a);
	printf("t2:address of global b:%p\n",&b);
	printf("t2:address of global c:%p\n",&c);
	while(1)
	{
		printf("t2:value of local l:%d\n",l);
		printf("t2:value of local j:%d\n",j);
		printf("t2:value of local k:%d\n",k);
		printf("t2:value of global a:%d\n",a);
		printf("t2:value of global b:%d\n",b);
		printf("t2:value of global c:%d\n",c);
	}
}
void *Thread3Proc()
{
	printf("This is thread 3");
	int l,j,k;
	a=31;
	b=32;
	c=33;
	printf("t3:address of local l:%p\n",&l);
	printf("t3:address of local j:%p\n",&j);
	printf("t3:address of local k:%p\n",&k);
	printf("t3:address of global a:%p\n",&a);
	printf("t3:address of global b:%p\n",&b);
	printf("t3:address of global c:%p\n",&c);
	while(1)
	{
		printf("t3:value of local l:%d\n",l);
		printf("t3:value of local j:%d\n",j);
		printf("t3:value of local k:%d\n",k);
		printf("t3:value of global a:%d\n",a);
		printf("t3:value of global b:%d\n",b);
		printf("t3:value of global c:%d\n",c);
	}
}
int main()
{
    a=1;
    b=2;
    c=3;
    pthread_t t1,t2,t3;
    pthread_create(&t1, NULL, Thread1Proc, NULL);
    pthread_create(&t2, NULL, Thread2Proc, NULL);
    pthread_create(&t3, NULL, Thread3Proc, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);
    exit(0);
    
}
