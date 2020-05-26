/* A program to find total number of alphabets in camel case (upper case)
	in a given string S. */
	
#include<stdio.h>
#include<string.h>
int camel_case(char*);

int main()
{
	char str[20];
	int n,i=0,j;
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
	}
}

int camel_case(char str[])
{
	int i,j,count=0;
	j=strlen(str);

	for(i=0;i<j;i++)
	{
		if(str[i]>=65&&str[i]<=90)//comparing to the ASCII values
		{
			count=count+1; //counting the number of Camel Case letters
		}
		else
		{
			count=count;
		}
	}
	return count;
	count=0;//resetting the count variable
}