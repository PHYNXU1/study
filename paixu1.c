#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a[100]={};
	int i, j, t;
	int n=sizeof(a)/sizeof(a[0]);
                srand(time(NULL));
	/*数组a的元素为随机的三位数*/
	for(i=0; i<n; i++)
		a[i]=rand()%1000;

	/*选择排序*/
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
			if(a[j]<a[i])
				t=a[i], a[i]=a[j], a[j]=t;
	}

	/*打印数组*/
	for(i=0; i<n; i++)
		printf("%d ", a[i]);

	return 0;
}
