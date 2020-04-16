#include<stdio.h>

main()
{
	int num, a = 0, b = 1, c = 0, i = 3;
	

printf("NUM : ");
scanf("%i", &num);

if( num == 0)
{
	printf("invalid!");
}

else if( num == 1)
{
	printf("0");
}

else if( num == 2 )
{
	printf("0, 1");
}

else
{
	printf("0, 1");
	c = a + b;
	while(num >= i)
	{
	
		printf(", %i", c);
		a = b;
		b = c;
		c = a + b;
		i++;
	}
}
}
