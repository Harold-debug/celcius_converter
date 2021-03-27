#include<stdio.h>
int main()
{
	float cel,fah;
	printf("PLease enter the temperature in Fahrenheit: ");
	scanf("%f",&fah);
	cel=5*(fah-32)/9;
	printf("\n  %.2f Fahrenheit= %.2f Celcius",fah,cel);
	return 0;
}
