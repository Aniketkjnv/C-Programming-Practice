/* A program in C to find number of diagonals possible in N sided convex polygon */

#include<stdio.h>
#include<conio.h>

int diagonals(int);

void main()
{
	int i=0,j,side,diagonal;
	clrscr();
	{
		printf("A program to find number of diagonals of a polygon.");
		printf("\nEnter no of iterations : ");
		scanf("%d",&j);

		while(i<j) //for the no of iterations
		{
			printf("\nEnter no of sides : ");
			scanf("%d",&side);
			diagonal=diagonals(side); //fetching the value
			printf("The number of diagonals is : %d \n",diagonal);
			i++;
		}
		getch();
	}
}

int diagonals(int n)
{
	return n*(n-3)/2; //formula for the no of diagonals
}