#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the integers");
scanf("%d%d",&a,&b);
if(a>b)
{
c=a-b;
printf("\n%d",c);
}
else
{
c=b-a;
printf("%d",c);
}
if(c%2==0)
{
printf("\neven");
}
else
{
printf("\nodd");
}
return(0);
}
