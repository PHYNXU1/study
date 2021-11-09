#include<stdio.h>
int main(void)
{
	int i,n;
	long p=1,sum=0;
	printf("Please enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p=p*i;
	    sum=sum+p;
	}
	printf("sum=%d\n",sum);
	return 0;
}
