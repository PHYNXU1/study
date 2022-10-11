#include <stdio.h>
int main(void)
{
    int a[1001];
    int n,i,j,t;
    scanf("%d",&n);
    for(i=0;i<n;++i)
        scanf("%d",a+i);

    for(i=0;i<n-1;++i)
    {
        for(j=0;j<n-i-1;++j)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
        for(j=0;j<n;++j)
            printf("%-5d ",a[j]);
        printf("\n\n");
    }

    return 0;
}
