#include <stdio.h>

int main(void)
{
	float value;

	scanf("%f", &value);
	printf("%0.30f", value);

	double value2;

	scanf("%lf", &value2);
	printf("%0.30f", value2);

	return 0;
}
