/*
A program to print the Pascal's triangle.
        1 
      1 1 
     1 2 1 
    1 3 3 1 
   1 4 6 4 1 
  1 5 10 10 5 1

*/

#include<stdio.h>

int factorial(int);
int ncr(int, int);

int main()
{
    int rows, i, j, c,space;

    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(i=0;i<=rows;i++)
    {
        for (space = i; space < rows; space++)
                {
                    printf(" ");
                }
        for(j=0;j<=i;j++)
        {
           c = ncr(i,j);
            printf("%d ",c);
        }
        printf("\n");
    }
    return 0;
}

int ncr(int a, int b)
{
    return factorial(a)/(factorial(b)*factorial(a-b));
}

int factorial(int fact)
{
   int m,f=1;
    for (m = 1; m <= fact; m++)
            {
                f = f * m;
            }
        return f;
}