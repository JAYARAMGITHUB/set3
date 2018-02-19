#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the integers");
scanf("%d%d",&a,&b);
c=a+b;
printf("%d",c);
if(c%2==0)
{
printf("it is even");
}
else
{
printf("it is odd");
}return(0);
}
