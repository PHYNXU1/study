#include<stdio.h>
#define N 40
int ReadScore(int score[],long num[]);
void DataSort(int score[],long num[],int n);
void PrintfScore(int score[],long num[],int n);
int main(void)
{
	int score[N],n,pos;
	long num[N],x;
	n = ReadScore(score,num);
	printf("Total student are %d\n",n);
	DataSort(score,num,n);
	printf("Sorted scores:\n");
	PrintScore(score,num,n);
	return 0;
}
int ReadScore(int score[],long num[])
{
	int i=-1;
	do{
		i++;
		printf("Input student's ID and score");
		scanf("%ld%d",&num[i],&score[i]);
	}while(num[i]>0&&score[i]>=0);
	return i;
}
void DataSort(int score[],long num[],int n)
{
	int i,j,k,temp1;
	long temp2;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(score[j]>score[k])
			{
				k=j;
			}
		}
		if(k!=i)
		{
			temp1=score[k];score[k]=score[i];score[i]=temp1;
			temp2=num[k];num[k]=num[i];num[i]=temp2;
		}
	}
}
void PrintfScore(int score[],long num[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%10ld%4d\n",num[i],score[i]);
	}
}
