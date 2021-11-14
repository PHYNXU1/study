#include<stdio.h>
int main(void)
{
	int i,n;
	long p=1,m=1;
	printf("请输入一个整数");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p=i*i;
		m=i*i*i;
	}
	printf("平方；%ld,立方：%ld\n",p,m);
	return 0;
}
