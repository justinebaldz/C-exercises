#include<stdio.h>

main()
{
	char type, code;
	float amount, discount, interest;
	
	do
	{
	printf("\n\n");
	printf("-----------------------------------------------------------------\n");
	printf("\t ROOM TYPE \t EQUIVALENT \t\t RATE");
	printf("\n-----------------------------------------------------------------");
	
	printf("\n\t A \t\t Standard\t\t 10,000");
	printf("\n\t B \t\t Deluxe \t\t 15,000");
	printf("\n\t C \t\t Suite \t\t\t 20,000");
	printf("\n-----------------------------------------------------------------\n");

	printf("\t CODE \t\t PAYMENT \t\t EQUIVALENT");
	printf("\n-----------------------------------------------------------------");
	
	printf("\n\t 1 \t\t Cash \t\t\t 3%% Discount");
	printf("\n\t 2 \t\t Credit Card \t\t 5%% Interest");
	printf("\n-----------------------------------------------------------------\n");

	printf("\tRoom type : ");
	scanf("%s", &type);
	
	switch(type)
	{
		case 'A': case 'a':
			printf("\tRoom is Standard\n");
			printf("\n\tMode of Payment : ");
			scanf("%s", &code);
		
			switch(code)
			{
				case '1':
					printf("\tCash\n");
						discount = 10000 * .03;
						amount = 10000 - discount;
					printf("\n\tAmount : %.2f", amount);
					break;
				case '2': 
					printf("\tCredit Card\n");
						interest = 10000 * .05;
						amount = 10000 + interest;
					printf("\n\tAmount : %.2f", amount);
					break;
			}
		break;
		
		case 'B': case 'b':
			printf("\tRoom is Deluxe\n");
			printf("\n\tMode of Payment : ");
			scanf("%s", &code);
		
			switch(code)
			{
				case '1':
					printf("\tCash\n");
						discount = 15000 * .03;
						amount = 15000 - discount;
					printf("\n\tAmount : %.2f", amount);
					break;
				case '2': 
					printf("\tCredit Card\n");
						interest = 15000 * .05;
						amount = 15000 + interest;
					printf("\n\tAmount : %.2f", amount);
					break;
			}
		break;
		
		case 'C': case 'c':
			printf("\tRoom is Suite\n");
			printf("\n\tMode of Payment : ");
			scanf("%s", &code);
		
			switch(code)
			{
				case '1':
					printf("\tCash\n");
						discount = 20000 * .03;
						amount = 20000 - discount;
					printf("\n\tAmount : %.2f", amount);
					break;
				case '2': 
					printf("\tCredit Card\n");
						interest = 20000 * .05;
						amount = 20000 + interest;
					printf("\n\tAmount : %.2f", amount);
					break;
			}
		break;
				
	break;
	}
	while ( type != '4');
}
