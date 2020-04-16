#include<stdio.h>

main()
{
	int pl, mt, fg, res, ave;
	
		printf("\n\n");
		printf("PRELIM : ");
		scanf("%i", &pl);
		printf("MIDTERM : ");
		scanf("%i", &mt);
		printf("FINAL : ");
		scanf("%i", &fg);
		
		ave = (pl + mt + fg) / 3;
		
		printf("\nAVERAGE : %i", ave);
		printf("\nEQUIVALENT : ");
		
			if ( ave >= 98 && ave <= 100)
				{
					printf("1.00");
				}
					
			else if ( ave >= 95 && ave <= 97)
				{
					printf("1.25");
				}
			
			else if ( ave >= 92 && ave <= 94)
				{
					printf("1.50");
				}
			
			else if ( ave >= 89 && ave <= 91)
				{
					printf("1.75");
				}
			
			else if ( ave >= 86 && ave <= 88)
				{
					printf("2.00");
				}
			
			else if ( ave >= 83 && ave <= 85)
				{
					printf("2.25");
				}
			
			else if ( ave >= 80 && ave <= 82)
				{
					printf("2.50");
				}
			
			else if ( ave >= 77 && ave <= 79)
				{
					printf("2.75");
				}
			
			else if ( ave >= 75 && ave <= 76)
				{
					printf("3.00");
				}
			
			else
				{
					printf("FAILED!");
				}
		
}
