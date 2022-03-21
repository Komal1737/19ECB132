#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	int n,c=0;
	printf("Enter the Sentence:");gets(str);
	for(n=0;str[n]!='\0';n++)
	{
		if(str[n]!=' ')
		{
			c++
		}
		printf("The number of characters in the given sentence is %d",c);
		getch();
	}
