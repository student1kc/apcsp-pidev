#include <stdio.h>

int main()
{
	int a = 0;

	if (a == 0)
	{
		printf("a is 0\n");
	}
	else if (a !=0)
	{
		printf("a is not 0\n");
	}
	else if (a > 0)
	{
		printf("a is greater than 0\n");
	}
	else if (a >= 0)
	{
		printf("a is greater than or equal to 0\n");
	}

	int b =5; 

	if (a == 0 && b ==0)
	{
		printf("Both a and b equal to 0\n"); 
	}
	else if (a == 0 || b == 0)
	{
		printf("a or b equal to 0\n"); 
	}
	if (!a == 0)	
	{
		printf("a is not equal to 0\n");
	}
	else if (!b == 0)
	{
		printf("b is not equal to 0\n");
	}
}

