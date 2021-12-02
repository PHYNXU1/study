#include<stdio.h>
#define N 40
int ReadScore(int score[],long num[]);
int LinSearch(long num[],long x,int n);
int main(void)
{
	int score[N],n,pos;
	long num[N],x;
	n = ReadScore(score,num);
	printf("Total student are %d\n",n);
	printf("Input the searching ID:");
	scanf("%d",&x);
	pos = LinSearch(num,x,n);
	if(pos!=1)
	printf("score = %d\n",score[pos]);
	else
	printf("Not found!\n");
	return 0;
}
int ReadScore(int score[],long num[])
{
	int i=-1;
	do{
		i++;
		printf("Input student's ID and score:");
		scanf("%ld%d",&num[i],&score[i]);
	}while(num[i]>0&&score[i]>=0);
	return i;
}
int LinSearch(long num[],long x,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(num[i]==x)  return i;
	}
	return -1;
}
