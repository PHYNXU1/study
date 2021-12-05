#include<stdio.h>
int main(void)
{
    char ch;
    printf("please input a lowercase:\n");
    ch=getchar();
    ch=ch-32;
    printf("%c %d %d",ch,ch,sizeof(ch));
    return 0;
}
