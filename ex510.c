#include<stdio.h>
int main(void)
{
	int year,month;
    printf("��������ݺ��·�");
	scanf("%d,%d",&year,&month);
	if(month>12||month<=0)
		printf("Printf Error\n");
	else
	{
		switch(year,month)
		{
		case 12:
		case 10:
		case 8:
		case 7:
		case 5:
		case 3:
		case 1: 
			printf("������31��\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11: printf("������30��\n");
			break;
		case 2:
			{
			if(year%4==0&&year%100!=0||year%400==0)
				printf("������29��\n");
			else
				printf("������28��\n");
			}
			break;
		default:
			printf("Input Error\n");
		}
	}
}

