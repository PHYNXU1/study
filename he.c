#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int sum=0,x;
    while(1){
        scanf("%d",&x);
        if(x==0 || x<0){
            break;
        }
        sum += x;
    }
    printf("sum=%d\n",sum);
    return 0;
}
