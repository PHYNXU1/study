#include<stdio.h>
int main(void)
{
	int m,n,r;
	scanf("%d,%d",&m,&n);
	if(m<n)
	{
		r=m,m=n,n=r;
	}
	r=m%n;
	while(r!=0)
	{
		m=n;
		n=r;
		r=m%n;
	}
	printf("%d\n",n);
	return 0;
}


