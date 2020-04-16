#include<stdio.h>

main()

{
	int  NoOfTimes = 0, num = 1; // Declaration ng variable
	
		while (num != 0) // LOOP ~ hangga't hindi value ni num ay '0' hindi mage-end yung program
		{
			printf("NUM : "); 
			scanf("%i", &num); //manghihingi kay user ng number, tapos ia-ssign niya sa variable na 'num',
			
				if (num == 100) // kapag yung num is equal to 100,
					{
						NoOfTimes++; // magi-increment yung NoOfTimes everytime na magi-input ka ng '100'
					}
		
		}
			
		printf("\nNO. OF TIMES '100' INPUTTED: %i", NoOfTimes); /* kapag nag-end yung program dun lang 'to lalabas ,
																	tapos ip-print niya yung value ni NoOfTimes*/
			
}

