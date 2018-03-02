#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter the limit");
scanf("%d %d",&a,&b);
printf("enter the number to be checked");
scanf("%d",&c);
if((c<<a)||(c<b))
{
printf("yes");
}
else
{
printf("no");
}
getch();
return 0;
}
