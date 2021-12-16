#include<stdio.h>
main()
{
    int a,b,c;
    for(a=1;a<=20;a++)
      for(b=a;b<=20;b++)
        for(c=a;c<=20;c++)
        if(a*a+b*b==c*c)
        printf( "a=%d\tb=%d\tc=%d\n",a,b,c);
        return 0;
}
