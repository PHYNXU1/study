#include<stdio.h>
int main(void)
{
	float a,b,c;
	int mark;
	printf("�����뱾������ޣ�");
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
		default:printf("��������ȷ����\n");
	}
	return 0;
}
