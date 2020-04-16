#include<stdio.h>

main()
{
	int counter = 0;
	int i = 1, x = 0, y = 0, z = 0, score = 1;
	
	printf("\n[ INPUT SCORE ]\n\n");
	
		while(score != 0)
		{
			printf("SCORE NO %i : ", i);
			scanf("%i", &counter);
		  	
		  		if(counter >= 75 && counter <= 100)
		  		{
		  			x++; // passing score + 1
				  }
				
				else if(counter >= 1 && counter <= 74)
				{
					y++; // failing grades + 1
				}
				
				else if(counter == 0)
				{
					score = 0; // exit
				}
				else
				{
					z++; // invalid + 1
				}
			i++;
		}
	printf("\nTOTAL NUMBER OF PASSED : %i", x);
	printf("\nTOTAL NUMBER OF FAILED : %i", y);
	printf("\nTOTAL NUMBER OF INVALID : %i", z);
}
