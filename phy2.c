#include<stdio.h>
#include<math.h>
int main(void)
{
	float a,b,c,s,area;
	printf("inputa,b,c:");
	scanf("%f,%f,%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=(float)sqrt(s*(s-a)*(s-b)*(s-c));
	if(a+b>c&&a+c>b&&b+c>a)
	{
		printf("area=%f\n",area);
	}
	else
	{
		printf("不能构成三角形");
	}
	return 0;
}
