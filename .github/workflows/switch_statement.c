#include<stdio.h>

main()
{
	int num1, num2, add, sub, mul, div, mod, sign, ans;
	
	do
	{
	
	printf("\nMAIN MENU\n");
	
	printf("\n[1] - ADDITION");	
	printf("\n[2] - SUBTRACTION");	
	printf("\n[3] - MULTIPLICATION");	
	printf("\n[4] - DIVISION");	
	printf("\n[5] - MODULUS");
	printf("\n[6] - EXIT");
	
	printf("\n\nSIGN : ");
	scanf("%i", &sign);
	
	if (sign >= 7)
	{
		printf("\nINVALID OPERATOR!");
	}
	while(sign < 7)
	{
			switch(sign)
			{
				case 1:
					printf("\nNUM 1 : ");
					scanf("%i", &num1);
					printf("NUM 2 : ");
					scanf("%i", &num2);
					
						add = num1 + num2;
					
					printf("\nTHE RESULT IS : %i", add);
					
					printf("\n\nSIGN : ");
					scanf("%i", &sign);	
				break;
				
				case 2:
					printf("\nNUM 1 : ");
					scanf("%i", &num1);
					printf("NUM 2 : ");
					scanf("%i", &num2);
					
						sub = num1 - num2;
					
					printf("\nTHE RESULT IS : %i", sub);
					
					printf("\n\nSIGN : ");
					scanf("%i", &sign);	
				break;
				
				case 3:
					printf("\nNUM 1 : ");
					scanf("%i", &num1);
					printf("NUM 2 : ");
					scanf("%i", &num2);
					
						mul = num1 * num2;
					
					printf("\nTHE RESULT IS : %i", mul);
		
					printf("\n\nSIGN : ");
					scanf("%i", &sign);	
				break;
				
				case 4:
					printf("\nNUM 1 : ");
					scanf("%i", &num1);
					printf("NUM 2 : ");
					scanf("%i", &num2);
					
						div = num1 / num2;
					
					printf("\nTHE RESULT IS : %i", div);
				
					printf("\n\nSIGN : ");
					scanf("%i", &sign);	
				break;
				
				case 5:
					printf("\nNUM 1 : ");
					scanf("%i", &num1);
					printf("NUM 2 : ");
					scanf("%i", &num2);
					
						mod = num1 % num2;
					
					printf("\nTHE RESULT IS : %i", mod);
				
					printf("\n\nSIGN : ");
					scanf("%i", &sign);	
				break;
				
				case 6:
					printf("\nARE YOU SURE YOU WANT TO EXIT?\n");
					printf("\n[1] - YES");
					printf("\n[2] - NO");
					
					printf("\nANS : ");
					scanf("%i", &ans);
					
						if(ans == 1)
						{
							sign = 7;
						}
						else
						{
							printf("\nSIGN : ");
							scanf("%i", &sign);
						}
				break;
				
				default :
					printf("\nINVALID OPERATOR!");
					
					printf("\n\nSIGN : ");
					scanf("%i", &sign);	
				break;			
			}
		system("cls");
	}
}while(sign != 7);
}
