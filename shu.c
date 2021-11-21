#include<stdio.h> 
main() 
{ 
int i,n,m,count=0,sum=0; 
printf("Input n:"); 
scanf("%d",&n); 
for(i=1;i<=n;i++) 
{ printf("Inputm:");
 scanf("%d",&m);
  if(m>0) 
  { sum=sum+m; 
  count++; }
   else 
   {
   	 break; 
	} 
   printf("sum=%d,count=%d\n",sum,count);
}
}
