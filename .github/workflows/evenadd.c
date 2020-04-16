#include<stdio.h>

main()
{
	int a = 1, b = 0;
	while( a <= 10)
	{
		if ( a % 2 == 0)
		{
			printf("%i\n", a);
			b = b + a;	
		}
		
		a++;
	}
	printf("\n\nTOTAL : %i", b);
}
