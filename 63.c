#include <stdio.h>
#include<string.h>

void main()
{
	char a[100]="hai hello";
	
	 int i,count=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			count++;
		}
	}
	printf("no. of words are %d",count+1);

}
