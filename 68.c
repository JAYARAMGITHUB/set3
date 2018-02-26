#include<stdio.h>
int main()
{
int a;
printf("enter a number");
scanf("%d",&a);
if(a%7==0)
{
printf("it is a multiple of 7");
}
else            
{
printf("it is not a multiple of 7");
}
return(a);
}
