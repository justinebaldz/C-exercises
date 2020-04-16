#include<stdio.h>

main()
{
	char fn;
	float rpd, wd, oth, ota, deduct, salary, netpay;
	
	printf("NAME : ");
	scanf("%s", &fn);
	printf("RATE/DAY : ");
	scanf("%f", &rpd);
	printf("WORKING DAYS : ");
	scanf("%f", &wd);
	printf("OT HOURS : ");
	scanf("%f", &oth);
	
		ota = (rpd / 8) * oth;
	
	printf("\nOT AMOUNT : %.2f", ota);
	printf("\nDEDUCTION : ");
	scanf("%f", &deduct);
	
		salary = rpd * wd;
	printf("\nSALARY : %.2f", salary);
		netpay = salary - deduct;
	printf("\nNET PAY : %.2f", netpay);
	
}
