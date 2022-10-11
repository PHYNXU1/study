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
        for(j=i+1;j<n;++j)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
        for(j=0;j<n;++j)
            printf("%-5d",a[j]);
        printf("\n\n");
    }

    return 0;
}
