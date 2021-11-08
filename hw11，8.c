#include<stdio.h>
int main(void)
{
	float a,b,c;
	int mark;
	printf("请输入本金和年限：");
	scanf("%f,%f",&a,&b);
    mark=b;
	switch(mark)
	{
	    case 1: c=1.0225*a;
			printf("%f\n",c);
			break;
		case 2: c=1.0243*a;
			printf("%f\n",c);
            break;
        case 3: c=1.0270*a;
			printf("%f\n",c);
            break;
		case 5: c=1.0288*a;
			printf("%f\n",c);
			break;
		case 8: c=1.0300*a;
			printf("%f\n",c);
			break;
		default:printf("请输入正确年限\n");
	}
	return 0;
}
