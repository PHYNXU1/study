#include<stdio.h>
main()
{
	int num[10],i,max,min;
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	max=min=num[0];
	for(i=0;i<10;i++) 
	{
		if(num[i]>max)
		max=num[i];
		else if(num[i]<min)
		min=num[i];
	}
	printf("%d,%d",max,min);
	return 0;
	
} 
