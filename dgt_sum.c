/* A program to print the sum of digits of a 5 digit number */

#include<stdio.h>
#include<conio.h>

int sum_digits(int);

void main()
{
	int n,sum,i;
	clrscr();
	{
		printf("A program to print the sum of digits of a 5 digit number.");
		printf("\nEnter no of iterations : ");
		scanf("%d",&i);

		while(i>0)
		{
			printf("\nEnter a 5 digit number : ");
			scanf("%d",&n);
			sum=sum_digits(n);
			printf("Sum of the digits : %d\n",sum);
			i--;
		}
		getch();
	}
}

int sum_digits(int num)
{
	int result=0,mod;

	while(num > 0) //do till num greater than  0
	{
		mod = num % 10;  //split last digit from number
		result=result+mod;  //adding the splitted digit
		num = num / 10;    //divide num by 10. num /= 10 also a valid one
	}
	return result;  //return the final value
}