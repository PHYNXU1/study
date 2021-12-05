#include<stdio.h>
int First(int x);
main()
{
    int a,b;
    printf("请输入一个整数：");
    scanf("%d",&a);
    b=First(a);
    printf("该整数以%d打头！\n",b);
    return 0;
}
int First(int x)
{
    int n;
    n=x/100;
    return n;
}
