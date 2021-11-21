#include<stdio.h>
#include<math.h>
int main(void)
{
	int n=1,count=1;
	float sign=1,sum=0;
	double term=1;
	while(fabs(term)>=1e-5)
	{
		term=1.0/n*sign;
		sum=sum+term;
		sign=sign*(-1);
		n=n+2;
		count++;
	}
	sum=sum*4;
	printf("sum=%f,count=%d\n",sum,count);
	return 0;
}
