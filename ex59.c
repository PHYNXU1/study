#include<stdio.h>
int main(void)
{
	int score;
	printf("Please enter score:");
	scanf("%d",&score);
	if(score>=90&&score<=100)
		printf("%d--A/n",score);
	else if(score>=80&&score<=90)
		printf("%d--B/n",score);
	else if(score>=70&&score<=80)
		printf("%d--C/n",score);
	else if(score>=60&&score<70)
		printf("%d--D/n",score);
	else
		printf("%d--E/n",score);
	return 0;
}