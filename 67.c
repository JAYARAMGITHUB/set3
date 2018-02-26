#include<stdio.h>
int main()
{
int a,b;
printf("enter a number");
scanf("%d",&a);
if((a%10)!=0)
{
b=a+(10-a%10);
printf("the nearest value is %d",b);
}
return(0);
}
