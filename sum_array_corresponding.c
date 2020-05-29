/* Write a program to add the corresponding elements of two arrays, 
	each of size N and print the sums. 
	N can be any integer between 1 and 100. 
	*/



#include <stdio.h>

int main(void) {
    int N, i;
    printf("No of iterations: ");
    scanf("%d", &N);
    // Declare the two arrays
    int numArrayA[N], numArrayB[N], sumArray[N];
    
    for(i=0;i<N;i++) sumArray[i]=0;
    
    // Get the numArrayA
    printf("Enter the Numbers for Array A:\n");
    for (i=0; i<N; i++) {
        scanf("%d", &numArrayA[i]);
    }
    
    // Get the numArrayB
    printf("Enter the numbers for Array B:\n");
    for (i=0; i<N; i++) {
        scanf("%d", &numArrayB[i]);
    }
    
    // Write your logic here:
    for(i=0; i<N; i++)
    {
        sumArray[i]=numArrayA[i]+numArrayB[i];
    }
    
    // Print the sumArray
    for (i=0; i<N; i++) {
        printf("%d ", sumArray[i]);
    }
    printf("\n");
    return 0;
}