#include <stdio.h>

float areaOfCircle(float i)
{
	float x;
	x = i * i* 3.14;
	printf("%f\n", x);
	return x;
}

int main ()
{
	float i;
	for (i = 3.5; i < 12.5; i++)
	{
		areaOfCircle(i);
	}
}
