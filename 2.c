#include <stdio.h>
int main()
{
int i,j,k,n;
printf("There are following Armstrong number smaller than 1000:\n");
for(n=100;n<1000;n++)
{
i=n/100;
j=(n-i*100)/10;
k=n%10;
if(n==i*i*i+j*j*j+k*k*k)
printf("%d ",n);
}
return 0;
}
