#include <stdio.h>

float areaOfCircle(float number)
{
	float x;
	x = number * number * 3.14;
	printf("%f\n", x);
	return x;
}

int main ()
{
	char input [4];
	float number;
	float number2;

	printf("Input your first number for the range\n");
	fgets(input, 4, stdin);
	sscanf(input, "%f", &number);
	
	printf("Input your second number for the range\n");
	fgets(input, 4, stdin);
	sscanf(input, "%f", &number2);
	
	for (int i= number; i <= number2; i++)
	{
		areaOfCircle(i);
	}
}
