#include<stdio.h>
#define MONTHS 12
int main(void)
{
    int days[MONTHS]={31,28,31,30,31,30,31,31,30,31,30,31};
    int month;
    do{
        printf("Input month:");
        scanf("%d",&month);
    }while(month<1||month>12);
    printf("The number of days is %d\n", days[month-1]);
    return 0;
}
