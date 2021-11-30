#include<stdio.h>
#include<math.h>
int main(void)
{
    int h,r;
    int water=20;
    int n;
    float pi=3.14159,v;
    printf("please input the height and the radius:\n");
    scanf("%d,%d",&h,&r);
    v=pi*r*r*h/1000;
    n=water/v+1;
    printf("%d",n);
    return 0;
}
