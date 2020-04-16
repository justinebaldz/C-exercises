#include<stdio.h>

main()
{
	
	char meal, drinks;
	int amount, quantity;
	int x;
	
	do
	{
	system("cls");
		
	printf("\n\n");
	printf("-----------------------------------------------------------------\n");
	printf("\t MEAL \t\t PACKAGE \t\t\t PRICE");
	printf("\n-----------------------------------------------------------------");
	
	printf("\n\t A \t\t Chicken & Spaghetti \t\t 150");
	printf("\n\t B \t\t Hamburger & Fries \t\t 145");
	printf("\n\t C \t\t Cheese Burger \t\t\t 100");
	printf("\n\t D \t\t Pizza \t\t\t\t 80");
	printf("\n-----------------------------------------------------------------\n");

	printf("\t DRINKS \t PRICE");
	printf("\n-----------------------------------------------------------------");
	
	printf("\n\t S \t\t 30");
	printf("\n\t M \t\t 35");
	printf("\n\t L \t\t 40");
	printf("\n-----------------------------------------------------------------\n");

	printf("\tMeal : ");
	scanf("%s", &meal);
	
	if (meal == 'A' || meal == 'a' || meal == 'B' || meal == 'b' || meal == 'C' || meal == 'c' || meal == 'D' || meal == 'd' || meal == '1' || meal == '2' || meal == '3' || meal == '4')
	{
		goto sweal;
	}
	
	else 
	{
		printf("\t INVALID MEAL!");
		goto trans;
	}
	
	sweal:
	switch(meal)
	{
		case 'A': case 'a': case '1': 
			printf("\tDrinks : ");
			scanf("%s", &drinks);
			
				if (drinks == 'S' || drinks == 's' || drinks == 'M' || drinks == 'm' || drinks == 'L' || drinks == 'l' || drinks == '1' || drinks == '2' || drinks == '3')
			
				{
						goto swinks1;
				}
				else
				
				{
					printf("\t INVALID DRINKS!");
					goto trans;
				}
						swinks1:
						printf("\tQuantity : ");
						scanf("%i", &quantity);
						printf("\tOrder : Chicken & Spaghetti and ");
						
						
						switch(drinks)
						{
							case 'S': case 's': case '1':
							printf("Small Drinks");
							amount = (150 + 30) * quantity;
							printf("\n\tAmount : %i", amount);
							break;
							case 'M': case 'm': case '2':
							printf("Medium Drinks");
							amount = (150 + 35) * quantity;
							printf("\n\tAmount : %i", amount);
							break;
							case 'L': case 'l': case '3':
							printf("Small Drinks");
							amount = (150 + 40) * quantity;
							printf("\n\tAmount : %i", amount);
							break;	
						}
		
		break;
			
		case 'B': case 'b': case '2':
			printf("\tDrinks : ");
			scanf("%s", &drinks);
			
				if (drinks == 'S' || drinks == 's' || drinks == 'M' || drinks == 'm' || drinks == 'L' || drinks == 'l' || drinks == '1' || drinks == '2' || drinks == '3')
			
				{
						goto swinks2;
				}
				else
				
				{
					printf("\t INVALID DRINKS!");
					goto trans;
				}
			
				swinks2:
				printf("\tQuantity : ");
				scanf("%i", &quantity);
				printf("\tOrder : Hamburger & Fries and ");
			
				switch(drinks)
				{
					case 'S': case 's': case '1':
						printf("Small Drinks");
						amount = (145 + 30) * quantity;
						printf("\n\tAmount : %i", amount);
						break;
					case 'M': case 'm': case '2':
						printf("Medium Drinks");
						amount = (145 + 35) * quantity;
						printf("\n\tAmount : %i", amount);
						break;
					case 'L': case 'l': case '3':
						printf("Small Drinks");
						amount = (145 + 40) * quantity;
						printf("\n\tAmount : %i", amount);
						break;
				}
		break;
			
		case 'C': case 'c': case '3':
			printf("\tDrinks : ");
			scanf("%s", &drinks);
			
				if (drinks == 'S' || drinks == 's' || drinks == 'M' || drinks == 'm' || drinks == 'L' || drinks == 'l' || drinks == '1' || drinks == '2' || drinks == '3')
			
				{
						goto swinks3;
				}
				else
				
				{
					printf("\t INVALID DRINKS!");
					goto trans;
				}
			
				swinks3:
				printf("\tQuantity : ");
				scanf("%i", &quantity);
				printf("\tOrder : Cheese Burger and ");
			
				switch(drinks)
				{
					case 'S': case 's': case '1':
						printf("Small Drinks");
						amount = (100 + 30) * quantity;
						printf("\n\tAmount : %i", amount);
						break;
					case 'M': case 'm': case '2':
						printf("Medium Drinks");
						amount = (100 + 35) * quantity;
						printf("\n\tAmount : %i", amount);
						break;
					case 'L': case 'l': case '3':
						printf("Small Drinks");
						amount = (100 + 40) * quantity;
						printf("\n\tAmount : %i", amount);
						break;
				}
		break;
			
		case 'D': case 'd': case '4':
			printf("\tDrinks : ");
			scanf("%s", &drinks);
			printf("\tQuantity : ");
			scanf("%i", &quantity);
			printf("\tOrder : Pizza and ");
			
				if (drinks == 'S' || drinks == 's' || drinks == 'M' || drinks == 'm' || drinks == 'L' || drinks == 'l' || drinks == '1' || drinks == '2' || drinks == '3')
			
				{
						goto swinks4;
				}
				else
				
				{
					printf("\t INVALID DRINKS!");
					goto trans;
				}
			
				swinks4:
				switch(drinks)
				{
					case 'S': case 's': case '1':
						printf("Small Drinks");
						amount = (80 + 30) * quantity;
						printf("\n\tAmount : %i", amount);
						break;
					case 'M': case 'm': case '2':
						printf("Medium Drinks");
						amount = (80 + 35) * quantity;
						printf("\n\tAmount : %i", amount);
						break;
					case 'L': case 'l': case '3':
						printf("Small Drinks");
						amount = (80 + 40) * quantity;
						printf("\n\tAmount : %i", amount);
						break;
				}
		break;
		
	}
	
	trans:
	printf("\n\n\t INPUT ANOTHER TRANSACTION?");
	printf("\n\t [1] - YES");
	printf("\n\t [2] - NO\n");
	printf("\n\t ANS : ");
	scanf("%i", &x);
	
		if (x == 2)
		{
			meal = 5;
		}
	
	}while (meal != 5);
	
}

