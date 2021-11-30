#include<stdio.h>
int main(void)
{
    int a[20],sum=0,counter=0,i;
    printf("Input 20 Numbers:\n");
    for(i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>=0)
        {
            sum+=a[i];
            counter++;
        }
    }
    printf("sum = %d, counter = %d\n",sum,counter);
    return 0;
}
