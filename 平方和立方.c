#include<stdio.h>
int main(void)
{
	int i,n;
	long p=1,m=1;
	printf("������һ������");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p=i*i;
		m=i*i*i;
	}
	printf("ƽ����%ld,������%ld\n",p,m);
	return 0;
}
