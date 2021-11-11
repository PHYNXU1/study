#include<stdio.h>
main()
{
	int i,j;
	for(i=2;i<=20000;i++)
	{
		float s=0;
		for(j=1;j<i;j++)
			if(i%j==0)
				s=s+j;
			if(i==s)
				printf("%6f\n",s);
	}
}
