#include<math.h>
#include<stdio.h>
int main()
{
	int i,n,flag,count=0;
	for(n=1;n<=100;n++)
	{
		flag=1;
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				flag=0;
			break;
			}
		}
	if(flag==1)
	{
		printf("%4d",n);
		count++;
		if(count%10==0)
		printf("\n");
		
	}	
		
	}
	printf("\n100之内共有%d个素数",count);
} 
