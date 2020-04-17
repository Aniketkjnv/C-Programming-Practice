/* Problem : Given a string S and two integers L and R. 
	Print the characters in the range L to R of the string. */
	
#include<stdio.h>
#include<conio.h>

void mystring();

void main()
{
	int i=0,j;
	clrscr();
	{
	
		printf("A program to print the characters in the range L to R of the string.");
		printf("\nEnter no of iterations : ");
		scanf("%d",&j);

		while(i<j) //for the no of iterations
		{
			mystring(); //calling the required function
			i++;
		}
		getch();
	}
}

void mystring()
{
	int i,L,R;
	char str[20];

	printf("\nEnter a String : ");
	scanf("%s",str);
	printf("\nAssume Base index to be 0.");
	printf("\nEnter left and right value: ");
	scanf("%d%d",&L,&R);  //left and right limits
	printf("The required string is : ");
	for(i=L;i<=R;i++)//from L to R
	{
	       //printing the required characters one by one
		   printf("%c",str[i]);
	}
	printf("\n");

}