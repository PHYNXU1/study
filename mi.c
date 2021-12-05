#include<stdio.h>
int main(void)
{
    int n,i;
    float a;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("pow(2,%d)= %.0f\n",i,pow(2,i));
    }
    return 0;
}
