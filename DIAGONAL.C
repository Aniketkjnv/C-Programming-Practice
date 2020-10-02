/* 
 *
 *
 A program in C to find number of diagonals possible in N sided convex polygon 
 *
 *
*/

#include<stdio.h>

int diagonals(int);

int main()
{
	int i=0,j,side,diagonal;
	{
		printf("\n\n==============A PROGRAM TO FIND NUMBER OF DIAGONALS OF A POLYGON.==============\n");
		printf("                           ******************************\n\n");

		//Take input of testcases
		printf("\n\nENTER NUMBER OF TESTCASES :: ");
		scanf("%d",&j);
		printf("\n -------------------------------");

		while(j--) //for the no of testcases
		{
			printf("\n\n\n ENTER THE NUMBER OF SIDES IN YOUR POLYGON:: ");
			scanf("%d",&side);

			diagonal=diagonals(side); //fetching the value

			printf("\n THE NUMBER OF DIAGONALS IN YOUR POLYGON ARE:: %d \n",diagonal);
			printf("-----------------------------------------------------------");
		}
	}
}


//Function to calculate the number of diagonals
int diagonals(int n)
{
	return n*(n-3)/2; //formula for the no of diagonals
}





/*
 *
 *
 OUTPUT OF ABOVE PROGRAM::
 
 ==============A PROGRAM TO FIND NUMBER OF DIAGONALS OF A POLYGON.==============
                            ******************************
			    
  ENTER NUMBER OF TESTCASES :: 2
  -------------------------------
  
  
  ENTER THE NUMBER OF SIDES IN YOUR POLYGON:: 6
  THE NUMBER OF DIAGONALS IN YOUR POLYGON ARE:: 9
  -----------------------------------------------------------
  
  
  ENTER THE NUMBER OF SIDES IN YOUR POLYGON:: 8
  THE NUMBER OF DIAGONALS IN YOUR POLYGON ARE:: 20
  -----------------------------------------------------------
  
 *
 *
*/
