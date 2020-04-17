/* A program to find total number of alphabets in camel case (upper case)
	in a given string S. */
	
#include<stdio.h>
#include<conio.h>

int camel_case(char*);

void main()
{
	char str[20];
	int n,i=0,j;
	clrscr();
	{
	
		printf("This is a program to find the no of upper case alphabets");
		printf("\nEnter no of iterations : ");
		scanf("%d",&j);

		while(i<j)
		{
			printf("\nEnter a String : ");
			scanf("%s",str);
			n=camel_case(str);
			printf("\nThe no of upper case alphabets is : %d\n ",n);
			i++;
		}
		getch();
	}
}

int camel_case(char str[])
{
	int i,j=20,count=0;

	for(i=0;i<j;i++)
	{
		if(str[i]>=65&&str[i]<=90)
		{
			count=count+1;
		}
	}
	return count;
	count=0;
}