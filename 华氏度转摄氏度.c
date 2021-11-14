#include<stdio.h>
int main(void)
{
	int f;
	float c;
	for(f=0;f<=300;f=f+10)
	{
		c=5.0/9*(f-32);
		printf("华氏度%d对应摄氏度%f\n",f,c);
	}
	return 0;
}