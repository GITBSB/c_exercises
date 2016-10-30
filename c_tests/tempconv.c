#include<stdio.h>

float conv(float m, float n);

main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	while (fahr <= upper)
	{
		printf("%3.0f%6.1f\n", fahr, conv(celsius, fahr));
		fahr = fahr + step;
	}
	return 0;
}

float conv(float celsius, float fahr)
{
	celsius = (5.0/9.0) * (fahr-32.0);
	return celsius;
}