#include<stdio.h>
int First(int x);
main()
{
    int a,b;
    printf("������һ��������");
    scanf("%d",&a);
    b=First(a);
    printf("��������%d��ͷ��\n",b);
    return 0;
}
int First(int x)
{
    int n;
    n=x/100;
    return n;
}
