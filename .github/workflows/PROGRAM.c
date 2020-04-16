#include<stdio.h>

main()
{
	int num1, num2, add, minus, times, divide, modus;
	char sign;
	
	while (sign != '0')
	{
	system("cls");	
	printf("\n	MAIN MENU\n");
	printf("-------------------------");
	printf("\n[1] ADDITION (+)	|");
	printf("\n[2] SUBTRACTION (-)	|");
	printf("\n[3] MULTIPLICATION (*)	|");
	printf("\n[4] DIVISION (/)	|");
	printf("\n[5] MODULUS (%%)		|");
	printf("\n-------------------------");
	
	printf("\n\nSELECT OPERATOR : ");
	scanf("%c", &sign);
	printf("\n-------------------------");
	
		if (sign == '1' || sign == '+')
		
			printf("\n\tADDITION        |\n");
			printf("-------------------------");
			printf("\nENTER FIRST NUMBER : ");
			scanf("%i", &num1);
			printf("ENTER SECOND NUMBER : ");
			scanf("%i", &num2);
			printf("-------------------------");
			
			add = num1 + num2;
			printf("\nTHE RESULT IS %i", add);
		
	
		else if (sign == '2' || sign == '-')
		{
			printf("\n      SUBTRACTION       |\n");
			printf("-------------------------");
			printf("\nENTER FIRST NUMBER : ");
			scanf("%i", &num1);
			printf("ENTER SECOND NUMBER : ");
			scanf("%i", &num2);
			printf("-------------------------");
			
			minus = num1 - num2;
			printf("\nTHE RESULT IS %i", minus);
		}
	
		else if(sign == '3' || sign == '*')
		{
			printf("\n      MULTIPLICATION    |\n");
			printf("-------------------------");
			printf("\nENTER FIRST NUMBER : ");
			scanf("%i", &num1);
			printf("ENTER SECOND NUMBER : ");
			scanf("%i", &num2);
			printf("-------------------------");
			
			times = num1 * num2;
			printf("\nTHE RESULT IS %i", times);
		}
	
		else if(sign == '4' || sign == '/')
		{
			printf("\n\tDIVISION        |\n");
			printf("-------------------------");
			printf("\nENTER FIRST NUMBER : ");
			scanf("%i", &num1);
			printf("ENTER SECOND NUMBER : ");
			scanf("%i", &num2);
			printf("-------------------------");
			
			divide = num1 / num2;
			printf("\nTHE RESULT IS %i", divide);
		}
	
		else if(sign == '5' || sign == '%')
		{
			printf("\n\tMODULUS         |\n");
			printf("-------------------------");
			printf("\nENTER FIRST NUMBER : ");
			scanf("%i", &num1);
			printf("ENTER SECOND NUMBER : ");
			scanf("%i", &num2);
			printf("-------------------------");
			
			modus = num1 % num2;
			printf("\nTHE RESULT IS %i", modus);
		}
		
		else 
		{
			printf("\nINVALID OPERATOR!");
			sign = '0';
			
		}
	}
}
