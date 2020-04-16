#include<stdio.h>

main()
{
	int num1, num2, add, minus, times, divide, modus;
	char sign;
		
	printf("\nMAIN MENU\n");
	printf("\n[1] ADDITION (+)");
	printf("\n[2] SUBTRACTION (-)");
	printf("\n[3] MULTIPLICATION (*)");
	printf("\n[4] DIVISION (/)");
	printf("\n[5] MODULUS (%%)");
	
	printf("\n\nSELECT OPERATOR : ");
	scanf("%c", &sign);

	printf("\nENTER FIRST NUMBER : ");
	scanf("%i", &num1);
	printf("ENTER SECOND NUMBER : ");
	scanf("%i", &num2);
			
		if (sign == '1' || sign == '+')
			{
				add = num1 + num2;
				printf("\nYou chooses addition \nThe sum of %i and %i is %i", num1, num2, add);
			}

		else if (sign == '2' || sign == '-')
			{
				minus = num1 - num2;
				printf("\nYou chooses subtraction \nThe difference of %i and %i is %i", num1, num2, minus);
			}
	
		else if(sign == '3' || sign == '*')
			{
				times = num1 * num2;
				printf("\nYou chooses multiplication \nThe product of %i and %i is %i", num1, num2, times);
			}
	
		else if(sign == '4' || sign == '/')
			{
				divide = num1 / num2;
				printf("\nYou chooses division \nThe quotient of %i and %i is %i", num1, num2, divide);
		    }
	
		else if(sign == '5' || sign == '%')
			{
				modus = num1 % num2;
				printf("\nYou chooses modulus \nThe remainder of %i and %i is %i", num1, num2, modus);
			}
		
		else 
			{
				printf("\nINVALID OPERATOR!");
			}
}
