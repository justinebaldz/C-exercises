#include<stdio.h>
main()
{
	int j,k,row,column;
	 
	printf("Input Number of Row: ");
	scanf("%i", &row);
	printf("input number of column: ");
	scanf("%i", &column);
	for(j=1;j<=row;j++)
	{
		for(k=1;k<=column;k++)
		{
			printf("%i\t", k*j);
		}
		printf("\n");
	}
}
