#include<stdio.h>
int main(void)
{
	int a[]={1,2,3,4,5};
	int *p=a;
	printf("%d,",*p);
	printf("%d,",*(++p));
	printf("%d,",(*p)++);
	printf("%d,",*p--);
	printf("%d,",--(*p));
	printf("%d\n",*p);
	return 0;
} 
