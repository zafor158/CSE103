#include <stdio.h>

void main(){

	float a, b, result;
	char choice;

	printf ("Which operation you like to perform?\n");
	scanf ("%c", &choice);

	printf ("Enter two numbers: ");
	scanf ("%f %f", &a, &b);

	switch (choice)
	{
		case '+':
			result = a+b;
			printf ("The result is: %f\n", result);
			break;

		case '-':
			result = a-b;
			printf ("The result is: %f\n", result);
			break;
		case '*':
			result = a*b;
			printf ("The result is: %f\n", result);
			break;
		case '/':
			result = a/b;
			printf ("The result is: %f\n", result);
			break;
		default:
			printf ("You have given some wrong choice\n");
	}
	printf ("The program now exits\n");
}
