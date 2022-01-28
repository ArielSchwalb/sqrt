/*This program calculates the square root of any number that the user inputs.*/

#include <stdio.h>
#include <math.h>
int main()
{
	
	/* Declare variables. Prompt the user to input a number. */ 
	/* Store the number in the first variable.               */
	/* ----------------------------------------------------- */
	
	float num, root;
	printf("Enter a number: ");
	scanf("%f", &num);


	/* Computes the square root and stores in root. */
 	/* -------------------------------------------- */
 	
 	root = sqrt(num);
 	
 	/* Prints the square root of the number to two decimal places. */
 	/* ----------------------------------------------------------- */
 	
 	printf("The square root of %.2f is %.2f.\n", num, root);
 	
 	return 0;
 	
}