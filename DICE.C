/* Problem : You are given a cubic dice with 6 faces.
	All the individual faces have a number printed on them.
	The numbers are in range of 1 to 6, like any ordinary dice.
	A face of the cube will be provided.
	Guess the number on the opposite face of the cube */

/* A program to guess opposite face of the dice */

#include<stdio.h>
#include<conio.h>

int dice(int);

void main()
{
	int i=0,j,input,output;
	clrscr();
	{
		printf("This is a program to guess opposite face of the dice.");
		printf("\n\nEnter the no of iterations : ");
		scanf("%d",&j);

		while(i<j)
		{
			printf("\nEnter the face number : ");
			scanf("%d",&input);
			output=dice(input);//gets the value from the function
			printf("Opposite face of it : %d\n",output);
			i++;
		}
		getch();
	}
}

int dice(int n)
{
	switch(n)
	{
		case 1 : return 6; //6 is opposite of 1
		break;
		case 2 : return 5; //5 is opposite of 2
		break;
		case 3 : return 4; //4 is opposite of 3
		break;
		case 4 : return 3; //3 is opposite of 4
		break;
		case 5 : return 2; //2 is opposite of 5
		break;
		case 6 : return 1; //1 is opposite of 6
		break;
	}
	return 0;
}