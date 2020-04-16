#include<stdio.h>

main()
{
	int n, i = 2, flag = 1;
	
		printf("\nNUM : ");
		scanf("%i", &n);
			
			if (n <= 1)
				{
					printf("\n %i is not a prime", n );
				}
			else
			{
				if (i <((n / 2) + 1))
				{
					while( i <((n / 2) + 1))
						{
							if (n % i == 0)
								{
									flag = 0;
								}
							else if (flag == 0)
								{
									printf("\n%i is prime number", n);	
								}
							
							
							i++;
						}
					}
					else
								{
									printf("\n%i is not a prime number", n);
								}
				
				
			}
			
			
}
