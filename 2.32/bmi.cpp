#include <stdio.h>
int bmi = 0;
int main() 
{
	printf("BMI  ");
	scanf("%d",&bmi);
	if (bmi<18.5)printf("underweight less than 18.5\n");
	else if(bmi>18.5&&bmi<25)printf("normal between 18.5 and 24.9\n");
	else if(bmi>24.9&&bmi<30)printf("overweight between 25 and 29.9\n");
	else if(bmi>=30)printf("obese 30 or greater\n");

	return 0;
}