#include<stdio.h>
int main(void)
{
	int a,b,c,x;
	for(x=100;x<=999;x++)
	{
		a=x/100;
		b=x/10%10;
		c=x%10;
		if(x==a*a*a+b*b*b+c*c*c)
		printf("%d\n",x);
	}	
}
