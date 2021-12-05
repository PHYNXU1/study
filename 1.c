#include<stdio.h>
main()
{
    int sum=0,count=0,i,x;
    do{
        printf("Input a number:");
        scanf("%d",&x);
        if(x>0)
        {
            sum=sum+x;
            count++;
        }
        if(x<0)
        {
            sum=sum;
        }
    }while(x!=0);
    printf("sum = %d, count = %d\n",sum,count);
    return 0;
}
