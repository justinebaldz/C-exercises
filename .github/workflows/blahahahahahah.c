#include<stdio.h>

main()

{
	int rows, i, j, k = 1;
		
		printf("ROWS : ");
		scanf("%i", &rows);
		printf("\n");
		
		if(rows < 20)
			{
				for (i = 1; i <= rows; i++)
					{
						for ( j = 1; j <= i;  j++)
							{	
								printf("%i", j );
	
								if( j != i)
									{
										printf(" + ");
									}
							}
						printf(" = %i\n", k);
						k = k + j;	
					}	
			}	
}
