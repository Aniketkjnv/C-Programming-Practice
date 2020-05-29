/* Problem : for each integer n in the interval [a,b]:
				if 1<=n<=9 : print the english representation
				else if n>9 and even : print even
				else if n>9 and odd  : print odd
*/

#include<stdio.h>

void number_name(int);
void even_odd(int);

int main()
{
	int a,b,i; //a and b for interval
	{
		printf("Enter the range [a,b]: \n");
		scanf("%d%d",&a,&b);
		
		for(i=a;i<=b;i++)
		{
			if(i>=1&&i<10)
			{
				number_name(i);
				printf("\n");
			}
			else if(i>=10)
			{
				even_odd(i);
				printf("\n");
			}
			else
			{
				printf("wrong interval\n");
			}
		}
	}
}

void number_name(int num)
{
	switch(num)
	{
		case 1 : printf("one");
		break;
		case 2 : printf("two");
		break;
		case 3 : printf("three");
		break;
		case 4 : printf("four");
		break;
		case 5 : printf("five");
		break;
		case 6 : printf("six");
		break;
		case 7 : printf("seven");
		break;
		case 8 : printf("eight");
		break;
		case 9 : printf("nine");
		break;
	}
}

void even_odd(int num)
{
	if(num%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}