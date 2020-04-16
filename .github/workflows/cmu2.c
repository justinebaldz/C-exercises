#include<stdio.h>

main()
{
	float weight, height, bmi, res, m, c;
	
	printf("\n\n");
	printf("HEIGHT : ");
	scanf("%f", &height);
	printf("WEIGHT : ");
	scanf("%f", &weight);
	 	
		c = height / 100;   //convert height from CM to M
		m = c * c; 			// height(m) squared(^2)
		bmi = weight / m;
		
		printf("\nBMI : %.2f", bmi);
		
	if (bmi >= 18.5 && bmi < 24.9)
	{
		printf("\nNORMAL");
	}
	
	else if (bmi >= 25 && bmi <= 29.9)
	{
		printf("\nOVERWEIGHT");
	}
	
	else if(bmi < 18.5)
	{
		printf("\nUNDERWEIGHT");
	}
	
	else if( bmi >= 30 && bmi <= 39.9)
	{
		printf("\nOBESE");
	}
	
	else 
	{
		printf("\nINVALID!");
	}
}
