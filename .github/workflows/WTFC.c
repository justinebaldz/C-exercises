#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<dos.h>

struct login
	{
		char username[20], password[20];
		int load;
	};
	
char loading[10] = "LOADING", loader[30] = "-----------------------";
int j, i;
int loginCounter = 0;
int TotalPrice = 0, qty = 0, price = 0;
int iExit = 0 ;
char ans, type, n, a, b, c;
int rate[62];
int category;
int ord;

FILE *fp;
char ch;
time_t t;

void LOGIN(void);
void ORDER(void);
void EXIT(void);
void ORDER_FORM(void);
void ORDER_MORE(void);
void BILL(void);
void MENU(void);


void gotoxy(short x, short y) 
	{
		COORD pos = {x, y};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}	

void LOGIN(void) //Design
	{
		system("cls");
		
		gotoxy(30,2);printf("здддддддддддддддддддддд©");
		gotoxy(30,3);printf("Ё  MACAO IMPERIAL TEA  Ё");
		gotoxy(30,4);printf("юдддддддддддддддддддддды");

		gotoxy(15,5);
		printf("зддддддддддддддддддддддддддддддддддддддддддддддддддддд©");

	for(i=0;i<5;i++)
		{
		gotoxy(15,6+i);
		printf("Ё                                                     Ё\n");
		}
		gotoxy(15,11);
		printf("юддддддддддддддддддддддддддддддддддддддддддддддддддддды");

	}

void ORDER(void) //Design
	{
		system("cls");
	//	textcolor(WHITE);
		gotoxy(30,2);printf("здддддддддддддддддд©");
		gotoxy(30,3);printf("Ё                  Ё");
		gotoxy(30,4);printf("юдддддддддддддддддды");

		gotoxy(15,5);
		printf("зддддддддддддддддддддддддддддддддддддддддддддддддддддд©");

		for(i=0;i<14;i++)
		{
			gotoxy(15,6+i);
			printf("Ё                                                     Ё\n");
		}
		gotoxy(16,7);
		printf("ддддддддддддддддддддддддддддддддддддддддддддддддддддд");
		gotoxy(15,19);
		printf("юддддддддддддддддддддддддддддддддддддддддддддддддддддды");
		
		gotoxy(27,6);
		printf("TYPE");
		gotoxy(55,6);
		printf("PRICE");

	}	
		
void EXIT(void)
	{
	do
	{
		system("cls");
		gotoxy(30,2);printf("здддддддддддддддддддддд©");
		gotoxy(30,3);printf("Ё  MACAO IMPERIAL TEA  Ё");
		gotoxy(30,4);printf("юдддддддддддддддддддддды");

		gotoxy(15,5);
		printf("зддддддддддддддддддддддддддддддддддддддддддддддддддддд©");

	for(i=0;i<5;i++)
		{
		gotoxy(15,6+i);
		printf("Ё                                                     Ё\n");
		}
		gotoxy(15,11);
		printf("юддддддддддддддддддддддддддддддддддддддддддддддддддддды");	

		gotoxy(30,10);
		printf("");
		gotoxy(28,6);
		printf("DO YOU REALLY WANT TO EXIT?");
		gotoxy(36,8);
		printf("[1] YES");
		gotoxy(36,9);
		printf("[2] NO");
		
			ans = getch();
			
				if(ans == '1' || ans == 'y' || ans == 'Y')
					{
						if(ord > 0)
							{
								BILL();
							}
						else
							{
								ans = 2;	
							}			
					}
				else if(ans == '2' || ans == 'n' || ans == 'N')
					{
						ans = 2;
						MENU();	
					}
				else
					{
						gotoxy(32,10);
						printf("INVALID INPUT");
						EXIT();	
					}
		
	
		}while(ans == 1); 
	
	}

void ORDER_MORE(void)
	{
		
	gotoxy(20,22);
	printf("DO YOU WANT TO ORDER MORE? (Y/N) : ");
	fflush(stdin);
	
	a = getch();
	
		if(a == '1' || a == 'Y' || a == 'y')
			{
				TotalPrice += rate[b];
				fflush(stdin);
				ord++;
				MENU();
				
			}
		else
			{ 
				BILL();
			}
}
void BILL(void)
	{
				for(b = 0; b < 62; b++)
				TotalPrice += rate[b];
			
		fprintf(fp,"%s","---------------------------------------------------------------------\n");
		fprintf(fp,"\t\t\t\t\t%s: \t%i\n","TOTAL AMOUNT", TotalPrice);
		fprintf(fp,"%s","---------------------------------------------------------------------\n");
	
		
	 	system("cls");
		rewind(fp);
		
		
		while(1)
			{
  				ch=fgetc(fp);
					if(ch==EOF)
						break;
				printf("%c",ch);
			}
		fclose(fp);	
		system("PAUSE");
	}


	
void ORDER_FORM(void)
	{
		
	switch(category)
			{
				case 0:
						gotoxy(20,20);
						printf("ENTER YOUR CHOICE : ");
						scanf("%c",&n);

						switch(n)
							{
								case '1':
										gotoxy(20,21);
										printf("ENTER QUANTITY : ");
										scanf("%d",&qty);	
										rate[1] = 100 * qty;
										fprintf(fp,"CHESTNUT CREAM JASMINE GREEN TEA");
										fprintf(fp,"\t\t%d x %d = %d\n", 100, qty, rate[1]);
										b = 1;
										ORDER_MORE();
										
									break;
								case '2':
										gotoxy(20,21);
										printf("ENTER QUANTITY : ");
										scanf("%d",&qty);	
										rate[2] = 105 * qty;
										fprintf(fp,"%s","CHESTNUT CREAM OSMANTHUS OOLONG TEA");
										fprintf(fp," \t\t%d x %d = %d\n", 105, qty, rate[2]);
										b = 2;
										ORDER_MORE();
										
									break;	
								case '3':
										gotoxy(20,21);
										printf("ENTER QUANTITY : ");
										scanf("%d",&qty);	
										rate[3] = 120 * qty;
										fprintf(fp,"%s","CHESTNUT CREAM TEA");
										fprintf(fp," \t\t\t\t%d x %d = %d\n", 120, qty, rate[3]);
										b = 3;
										ORDER_MORE();
										
									break;
								case '4':
										gotoxy(20,21);
										printf("ENTER QUANTITY : ");
										scanf("%d",&qty);	
										rate[4] = 130 * qty;
										fprintf(fp,"%s","CHESTNUT CREAM COCOA");
										fprintf(fp," \t\t\t\t%d x %d = %d\n", 130, qty, rate[4]);
										b = 4;
										ORDER_MORE();
										
									break;
								case '5':
										gotoxy(20,21);
										printf("ENTER QUANTITY : ");
										scanf("%d",&qty);	
										rate[5] = 145 * qty;
										fprintf(fp,"%s","CHESTNUT CREAM UJI MATCHA");
										fprintf(fp," \t\t\t%d x %d = %d\n", 145, qty, rate[5]);
										b = 5;
										ORDER_MORE();
										
									break;
								
								case 'B': case 'b':
										MENU();
										
								default:
										system("cls");
										gotoxy(30,2);printf("здддддддддддддддддддддд©");
										gotoxy(30,3);printf("Ё  MACAO IMPERIAL TEA  Ё");
										gotoxy(30,4);printf("юдддддддддддддддддддддды");

										gotoxy(15,5);
										printf("зддддддддддддддддддддддддддддддддддддддддддддддддддддд©");

								for(i=0;i<5;i++)
									{
										gotoxy(15,6+i);
										printf("Ё                                                     Ё\n");
									}
										gotoxy(15,11);
										printf("юддддддддддддддддддддддддддддддддддддддддддддддддддддды");	
		
										gotoxy(37,8);
										printf("INVALID");
										getch();
										MENU();
											
									break;		
							}						
					break;
			}
}			

void MENU(void)
	{
		
		system("cls");
	//	textcolor(WHITE);
	do
	{
		gotoxy(30,2);printf("зддддддддддддд©");
		gotoxy(30,3);printf("Ё  MAIN MENU  Ё");
		gotoxy(30,4);printf("юддддддддддддды");

		gotoxy(15,5);
		printf("зддддддддддддддддддддддддддддддддддддддддддддддддддддд©");

		for(i=0;i<15;i++)
		{
			gotoxy(15,6+i);
			printf("Ё                                                     Ё\n");
		}
		gotoxy(15,20);
		printf("юддддддддддддддддддддддддддддддддддддддддддддддддддддды");
		

	gotoxy(31,7);
		 printf("[0] - CHESTNUT CREAM"); Sleep(100);
		gotoxy(31,8);
		printf("[1] - CREAM CHEESE"); Sleep(100);
		gotoxy(31,9);
		printf("[2] - TEA"); Sleep(100);
		gotoxy(31,10);
		printf("[3] - MILK TEA"); Sleep(100);
		gotoxy(31,11);
		printf("[4] - RED BEAN"); Sleep(100);
		gotoxy(31,12);
		printf("[5] - YAKULT"); Sleep(100);
		gotoxy(31,13);
		printf("[6] - SODA"); Sleep(100);
		gotoxy(31,14);
		printf("[7] - COFFEE"); Sleep(100);
		gotoxy(31,15);
		printf("[8] - MPRESSO"); Sleep(100);
		gotoxy(31,16);
		printf("[9] - SPECIAL DRINKS"); Sleep(100);
		gotoxy(31,17);
		printf("[A] - ADD-ONS"); Sleep(100);
		
		if(ord == 0)
			{		
				gotoxy(31,18);
				printf("[E] - EXIT");	
			}
	
		
		else if(ord > 0)
			{
				gotoxy(31,18);
				printf("[B] - BACK");			
			}
			

		type = getch();
			
			switch(type)
				{
					case '0':
							ORDER();
							gotoxy(33,3);
							printf("CHESTNUT CREAM");
							gotoxy(20,8);
							printf("[1] - JASMINE GREEN TEA		100"); Sleep(100);
							gotoxy(20,9);
							printf("[2] - OSMANTHUS OOLONG TEA         	105"); Sleep(100);
							gotoxy(20,10);
							printf("[3] - TEA				120"); Sleep(100);
							gotoxy(20,11);
							printf("[4] - COCOA				130"); Sleep(100);
							gotoxy(20,12);
							printf("[5] - UJI MATCHA			145");
							gotoxy(16,14);
							printf("ддддддддддддддддддддддддддддддддддддддддддддддддддддд");
							gotoxy(20,16);
							printf("[B] - BACK"); Sleep(100);
							
							ORDER_FORM();
							category = 0;
						
						break;
void ORDER_FORM(void)
	{
		
	switch(category)
	            {
				
					case 1:
						    ORDER();
							gotoxy(20,20);
							printf("ENTER YOUR CHOICE");
							scanf("%c",&n);
							
							    case '1':
							            gotoxy(20,21);
							            printf("ENTER QUANTITY : ");
							            scanf("%d",&qty);
							            rate[6] = 90 * qty;
							            fprintf(fp,"CREAM CHEESE SEA SALT JASMINE GREEN TEA");
							            fprintf(fp,"\t\t%d x %d - %d\n", 90, qty, rate[6]);
							            b= 6;
							            ORDER_MORE();
							        
									break;
								case '2':
								        gotoxy(20,21);
								        printf("ENTER QUANTITY : ");
								        scanf("%d",&qty);
								        rate[7] = 100 * qty;
								        fprintf(fp,"CREAM CHEESE OSMANTHUS OOLONG TEA");
							            fprintf(fp,"\t\t%d x %d - %d\n", 100, qty, rate[7]);
							            b= 7;
							            ORDER_MORE();
							            
							        break;
								case '3':
								        gotoxy(20,21);
								        printf("ENTER QUANTITY : ");
								        scanf("%d",&qty);
								        rate[8] = 105 * qty;
								        fprintf(fp,"CREAM CHEESE RED ROSE TEA");
							            fprintf(fp,"\t\t%d x %d - %d\n", 105, qty, rate[8]);
							            b= 8;
							            ORDER_MORE();
							            
							        break;
							    case '4':
							    	    gotoxy(20,21);
							    	    printf("ENTER QUANTITY : ");
								        scanf("%d",&qty);
								        rate[9] = 120 * qty;
								        fprintf(fp,"CREAM CHEESE WHITE PEACH OOLONG TEA");
							            fprintf(fp,"\t\t%d x %d - %d\n", 120, qty, rate[9]);
							            b= 9;
							            ORDER_MORE();
							            
							        break;
							    case '5':
							            gotoxy(20,21);
							            printf("ENTER QUANTITY : ");
								        scanf("%d",&qty);
								        rate[10] = 120 * qty;
								        fprintf(fp,"CREAM CHEESE MILK TEA");
							            fprintf(fp,"\t\t%d x %d - %d\n", 120, qty, rate[10]);
							            b= 10;
							            ORDER_MORE();
							            
							        break;
							    case '6':
							    	    gotoxy(20,21);
							    	    printf("ENTER QUANTITY : ");
								        scanf("%d",&qty);
								        rate[11] = 120 * qty;
								        fprintf(fp,"CREAM CHEESE OREO MILK TEA");
							            fprintf(fp,"\t\t%d x %d - %d\n", 120, qty, rate[11]);
							            b= 11;
							            ORDER_MORE();
							            
							        break;
							    case '7':
							            gotoxy(20,21);
							            printf("ENTER QUANTITY : ");
								        scanf("%d",&qty);
								        rate[12] = 120 * qty;
								        fprintf(fp,"CREAM CHEESE COCOA");
							            fprintf(fp,"\t\t%d x %d - %d\n", 120, qty, rate[12]);
							            b= 12;
							            ORDER_MORE();
							            
							        break;
							    case '8':
							    	    gotoxy(20,21);
							            printf("ENTER QUANTITY : ");
								        scanf("%d",&qty);
								        rate[13] = 130 * qty;
								        fprintf(fp,"CREAM CHEESE UJI MATCHA");
							            fprintf(fp,"\t\t%d x %d - %d\n", 130, qty, rate[13]);
							            b= 13;
							            ORDER_MORE();
							            
							        break;
							
						default:
										system("cls");
										gotoxy(30,2);printf("здддддддддддддддддддддд©");
										gotoxy(30,3);printf("Ё  MACAO IMPERIAL TEA  Ё");
										gotoxy(30,4);printf("юдддддддддддддддддддддды");

										gotoxy(15,5);
										printf("зддддддддддддддддддддддддддддддддддддддддддддддддддддд©");

								for(i=0;i<5;i++)
									{
										gotoxy(15,6+i);
										printf("Ё                                                     Ё\n");
									}
										gotoxy(15,11);
										printf("юддддддддддддддддддддддддддддддддддддддддддддддддддддды");	
		
										gotoxy(37,8);
										printf("INVALID");
										getch();
										MENU();
											
									break;		
						
					break;
					case 2:
							ORDER();
							gotoxy(20,20);
							printf("ENTER YOUR CHOICE : ");
							scanf("%c",&n);
							
							switch(n)
							    {
								
							        case '1':
							   	            gotoxy(20,21);
							                printf("ENTER QUANTITY : ");
								            scanf("%d",&qty);
								            rate[14] = 90 * qty;
								            fprintf(fp,"BREWED LEMON ICED TEA");
							                fprintf(fp,"\t\t%d x %d - %d\n", 90, qty, rate[14]);
							                b= 14 ;
							                ORDER_MORE();
							            
							             break;
							        case '2':
							                gotoxy(20,21);
							                printf("ENTER QUANTITY : ");
								            scanf("%d",&qty);
								            rate[15] = 90 * qty;
								            fprintf(fp,"LEMON ICED JELLY TEA");
							                fprintf(fp,"\t\t%d x %d - %d\n", 90, qty, rate[15]);
							                b= 15 ;
							                ORDER_MORE();
							            
							             break;
							        case '3' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[16] = 120 * qty;
								             fprintf(fp,"KUMQUAT LEMON TEA");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 120, qty, rate[16]);
							                 b= 16 ;
							                 ORDER_MORE();
							            
							             break;
							        case '4' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[17] = 120 * qty;
								             fprintf(fp,"CRANBERRY TEA");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 120, qty, rate[17]);
							                 b= 17 ;
							                 ORDER_MORE();
							            
							             break;
							        	
							        default:
										     system("cls");
										     gotoxy(30,2);printf("здддддддддддддддддддддд©");
										     gotoxy(30,3);printf("Ё  MACAO IMPERIAL TEA  Ё");
										     gotoxy(30,4);printf("юдддддддддддддддддддддды");

										     gotoxy(15,5);
										     printf("зддддддддддддддддддддддддддддддддддддддддддддддддддддд©");

							     	for(i=0;i<5;i++)
									{
									     	gotoxy(15,6+i);
									      	printf("Ё                                                     Ё\n");
									}
										     gotoxy(15,11);
										     printf("юддддддддддддддддддддддддддддддддддддддддддддддддддддды");	
		
										     gotoxy(37,8);
										     printf("INVALID");
									       	getch();
									     	MENU();
											
									break;		
							
					break;	
					
void ORDER_FORM(void)
	{
		
	switch(category)
	            {
				
					case 3:
							ORDER();
							gotoxy(20,20);
							printf("ENTER YOUR CHOICE");
							scanf("%c",&n);
							
							switch(n)
							{
							        case '1' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[18] = 90 * qty;
								             fprintf(fp,"ORIGINAL MILK TEA");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 90, qty, rate[18]);
							                 b= 18 ;
							                 ORDER_MORE();
							            
							             break;
							        case '2' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[19] = 100 * qty;
								             fprintf(fp,"BLACK PEARL MILK TEA");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 100, qty, rate[19]);
							                 b= 19 ;
							                 ORDER_MORE();
							            
							             break;
							        case '3' :
							                 gotoxy(20,21);
							                 printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[20] = 100 * qty;
								             fprintf(fp,"GLASS JELLY MILK TEA");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 100, qty, rate[20]);
							                 b= 20 ;
							                 ORDER_MORE();
							            
							             break;
							        case '4' :      	
							                 gotoxy(20,21);
							                 printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[21] = 100 * qty;
								             fprintf(fp,"CHEESECAKE AND PEARL MILK TEA");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 100, qty, rate[21]);
							                 b= 21 ;
							                 ORDER_MORE();
							            
							             break;
							        case '5' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[22] = 130 * qty;
								             fprintf(fp,"RED BEAN AND PUDDING MILK TEA");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 130, qty, rate[22]);
							                 b= 22 ;
							                 ORDER_MORE();
							            
							             break;
					            	default:
										     system("cls");
										     gotoxy(30,2);printf("здддддддддддддддддддддд©");
										     gotoxy(30,3);printf("Ё  MACAO IMPERIAL TEA  Ё");
									         gotoxy(30,4);printf("юдддддддддддддддддддддды");

										     gotoxy(15,5);
										     printf("зддддддддддддддддддддддддддддддддддддддддддддддддддддд©");

								     for(i=0;i<5;i++)
							 	         {
										     gotoxy(15,6+i);
										     printf("Ё                                                     Ё\n");
								       	 }
										     gotoxy(15,11);
									       	 printf("юддддддддддддддддддддддддддддддддддддддддддддддддддддды");	
		
									     	gotoxy(37,8);
									     	printf("INVALID");
									      	getch();
									    	MENU();
											
									break;		
							
					break;
void ORDER_FORM(void)
	{
		
	switch(category)
						
					case  4:
							ORDER();
							gotoxy(20,20);
							printf("ENTER YOUR CHOICE");
							scanf("%c",&n);
							
							switch(n)
							{
								    case '1' :
								    	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[23] = 135 * qty;
								             fprintf(fp,"PUDDING MATCHA");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 135, qty, rate[23]);
							                 b= 23 ;
							                 ORDER_MORE();
							            
							             break;
							        case '2' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[24] = 135 * qty;
								             fprintf(fp,"MATCH MILK SHAKE");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 135, qty, rate[24]);
							                 b= 24 ;
							                 ORDER_MORE();
							            
							             break;
							default:
										system("cls");
										gotoxy(30,2);printf("здддддддддддддддддддддд©");
										gotoxy(30,3);printf("Ё  MACAO IMPERIAL TEA  Ё");
										gotoxy(30,4);printf("юдддддддддддддддддддддды");

										gotoxy(15,5);
										printf("зддддддддддддддддддддддддддддддддддддддддддддддддддддд©");

								for(i=0;i<5;i++)
									{
										gotoxy(15,6+i);
										printf("Ё                                                     Ё\n");
									}
										gotoxy(15,11);
										printf("юддддддддддддддддддддддддддддддддддддддддддддддддддддды");	
		
										gotoxy(37,8);
										printf("INVALID");
										getch();
										MENU();
											
									break;		
							
					break;   	     
						
					case  5:
						    ORDER();
							gotoxy(20,20);
							printf("ENTER YOUR CHOICE");
							scanf("%c",&n);
							
							switch(n)
							{
								    case '1' :
								    	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[25] = 120 * qty;
								             fprintf(fp,"MANGO YAKULT");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 120, qty, rate[25]);
							                 b= 25 ;
							                 ORDER_MORE();
							            
							             break;
							        case '2' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[26] = 120 * qty;
								             fprintf(fp,"LEMON YAKULT");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 120, qty, rate[26]);
							                 b= 26 ;
							                 ORDER_MORE();
							            
							             break;
							        case '3' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[27] = 75 * qty;
								             fprintf(fp,"YAKULT GREEN TEA");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 75, qty, rate[27]);
							                 b= 27 ;
							                 ORDER_MORE();
							            
							             break;
							        default:
										     system("cls");
									     	gotoxy(30,2);printf("здддддддддддддддддддддд©");
									       	gotoxy(30,3);printf("Ё  MACAO IMPERIAL TEA  Ё");
										     gotoxy(30,4);printf("юдддддддддддддддддддддды");

									       	gotoxy(15,5);
									     	printf("зддддддддддддддддддддддддддддддддддддддддддддддддддддд©");

							    	for(i=0;i<5;i++)
								    	{
									     	gotoxy(15,6+i);
								        		printf("Ё                                                     Ё\n");
									}
									     	gotoxy(15,11);
									     	printf("юддддддддддддддддддддддддддддддддддддддддддддддддддддды");	
		
									     	gotoxy(37,8);
									     	printf("INVALID");
									     	getch();
									     	MENU();
											
									break;		
							
							
						break;
					
					case  6: 
					         ORDER();
							 gotoxy(20,20);
						     printf("ENTER YOUR CHOICE");
							 scanf("%c",&n);
							
							switch(n)
							{
								    case '1' :
								    	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[27] = 145 * qty;
								             fprintf(fp,"BLUE CURACAO SODA");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 145, qty, rate[27]);
							                 b= 27 ;
							                 ORDER_MORE();
							            
							             break;
						            case '2' :
						            	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[28] = 145 * qty;
								             fprintf(fp,"CHERRY BLOSSOM SODA");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 145, qty, rate[28]);
							                 b= 27 ;
							                 ORDER_MORE();
							            
							             break;
							        case '3' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[28] = 145 * qty;
								             fprintf(fp,"GREEN APPLE SODA");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 145, qty, rate[28]);
							                 b= 28 ;
							                 ORDER_MORE();
							            
							             break;
							        case '4' :     
							                 gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[29] = 145 * qty;
								             fprintf(fp,"MID-SUMMER SODA");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 145, qty, rate[29]);
							                 b= 29 ;
							                 ORDER_MORE();
							            
							             break;
							        case '5' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[30] = 165 * qty;
								             fprintf(fp,"OVER THE RAINBOW SODA");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 165, qty, rate[30]);
							                 b= 30 ;
							                 ORDER_MORE();
							            
							             break;
						            default:
										     system("cls");
									     	gotoxy(30,2);printf("здддддддддддддддддддддд©");
									       	gotoxy(30,3);printf("Ё  MACAO IMPERIAL TEA  Ё");
										     gotoxy(30,4);printf("юдддддддддддддддддддддды");

									       	gotoxy(15,5);
									     	printf("зддддддддддддддддддддддддддддддддддддддддддддддддддддд©");

							    	for(i=0;i<5;i++)
								    	{
									     	gotoxy(15,6+i);
								        		printf("Ё                                                     Ё\n");
									}
									     	gotoxy(15,11);
									     	printf("юддддддддддддддддддддддддддддддддддддддддддддддддддддды");	
		
									     	gotoxy(37,8);
									     	printf("INVALID");
									     	getch();
									     	MENU();
											
									break;		
						
						
						break;
						
					case  7:
							 ORDER();
							 gotoxy(20,20);
						     printf("ENTER YOUR CHOICE");
							 scanf("%c",&n);
							
							switch(n)
							{
								    case '1' :
								    	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[31] = 130 * qty;
								             fprintf(fp,"AMERICAO");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 130, qty, rate[31]);
							                 b= 31 ;
							                 ORDER_MORE();
							            
							             break;
							        case '2' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[32] = 180 * qty;
								             fprintf(fp,"CHARCOAL GRILLED AMERICANO");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 180, qty, rate[32]);
							                 b= 32 ;
							                 ORDER_MORE();
							            
							             break;
							        case '3' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[33] = 140 * qty;
								             fprintf(fp,"CAPPUCCINO");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 140, qty, rate[33]);
							                 b= 33 ;
							                 ORDER_MORE();
							                 
							            break;
							        case '4' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[34] = 140 * qty;
								             fprintf(fp,"LATTE");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 140, qty, rate[34]);
							                 b= 34 ;
							                 ORDER_MORE();
							                 
							            break; 
							        case '5':
									         gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[35] = 155 * qty;
								             fprintf(fp,"MOCHA");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 155, qty, rate[35]);
							                 b= 35 ;
							                 ORDER_MORE();
							                 
							            break;  
							        case '6' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[36] = 165 * qty;
								             fprintf(fp,"WHITE MOCHA");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 165, qty, rate[36]);
							                 b= 36 ;
							                 ORDER_MORE();
							                 
							            break; 
							        case '7' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[37] = 165 * qty;
								             fprintf(fp,"CARAMEL MOCCHIATO");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 165, qty, rate[37]);
							                 b= 37 ;
							                 ORDER_MORE();
							                 
							            break; 
							        case '8' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[38] = 155 * qty;
								             fprintf(fp,"MATCHA LATTE");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 155, qty, rate[38]);
							                 b= 38 ;
							                 ORDER_MORE();
							                 
							            break; 
							        default:
										     system("cls");
									     	gotoxy(30,2);printf("здддддддддддддддддддддд©");
									       	gotoxy(30,3);printf("Ё  MACAO IMPERIAL TEA  Ё");
										     gotoxy(30,4);printf("юдддддддддддддддддддддды");

									       	gotoxy(15,5);
									     	printf("зддддддддддддддддддддддддддддддддддддддддддддддддддддд©");

							    	for(i=0;i<5;i++)
								    	{
									     	gotoxy(15,6+i);
								        		printf("Ё                                                     Ё\n");
									}
									     	gotoxy(15,11);
									     	printf("юддддддддддддддддддддддддддддддддддддддддддддддддддддды");	
		
									     	gotoxy(37,8);
									     	printf("INVALID");
									     	getch();
									     	MENU();
											
									break;		
						
						break;
						
					case  8:
							ORDER();
							 gotoxy(20,20);
						     printf("ENTER YOUR CHOICE");
							 scanf("%c",&n);
							
							switch(n)
							{
								    case '1' :
								    	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[38] = 150 * qty;
								             fprintf(fp,"CAPPUCCINO MPRESSO");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 150, qty, rate[38]);
							                 b= 38 ;
							                 ORDER_MORE();
							            
							             break;
							        case '2' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[39] = 165 * qty;
								             fprintf(fp,"MOCHA MPRESSO");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 165, qty, rate[39]);
							                 b= 39 ;
							                 ORDER_MORE();
							            
							             break;
							        case '3' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[40] = 175 * qty;
								             fprintf(fp,"WHITE MOCHA MPRESSO");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 175, qty, rate[40]);
							                 b= 40 ;
							                 ORDER_MORE();
							                 
							             break;
							        case '4' : 
							                 gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[41] = 175 * qty;
								             fprintf(fp,"CARAMEL MPRESSO");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 175, qty, rate[41]);
							                 b= 41 ;
							                 ORDER_MORE();
							                 
							             break;
							        case '5' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[42] = 165 * qty;
								             fprintf(fp,"WHITE MOCHA MPRESSO");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 165, qty, rate[42]);
							                 b= 42 ;
							                 ORDER_MORE();
							                
							             break;
							        default:
										     system("cls");
									     	gotoxy(30,2);printf("здддддддддддддддддддддд©");
									       	gotoxy(30,3);printf("Ё  MACAO IMPERIAL TEA  Ё");
										     gotoxy(30,4);printf("юдддддддддддддддддддддды");

									       	gotoxy(15,5);
									     	printf("зддддддддддддддддддддддддддддддддддддддддддддддддддддд©");

							    	for(i=0;i<5;i++)
								    	{
									     	gotoxy(15,6+i);
								        		printf("Ё                                                     Ё\n");
									}
									     	gotoxy(15,11);
									     	printf("юддддддддддддддддддддддддддддддддддддддддддддддддддддды");	
		
									     	gotoxy(37,8);
									     	printf("INVALID");
									     	getch();
									     	MENU();
											
									break;		
						break;
						
					case  9:
							 ORDER();
							 gotoxy(20,20);
						     printf("ENTER YOUR CHOICE");
							 scanf("%c",&n);
							
							switch(n)
							{
								    case '1' :
								    	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[43] = 130 * qty;
								             fprintf(fp,"KITTEN MILK TEA");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 130, qty, rate[43]);
							                 b= 43 ;
							                 ORDER_MORE();
							            
							             break;
							        case '2' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[44] = 160 * qty;
								             fprintf(fp,"OSMANTHUS OOLONG TEA");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 160, qty, rate[44]);
							                 b= 44 ;
							                 ORDER_MORE();
							            
							             break;
							        case '3' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[45] = 195 * qty;
								             fprintf(fp,"GINGER MILK TEA");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 195, qty, rate[45]);
							                 b= 45 ;
							                 ORDER_MORE();
							                 
							             break;
							        case '4' : 
							                 gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[46] = 160 * qty;
								             fprintf(fp,"EJIAO RED DATES FRESH MILK");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 160, qty, rate[46]);
							                 b= 46 ;
							                 ORDER_MORE();
							                 
							             break;
							        case '5' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[47] = 160 * qty;
								             fprintf(fp,"BLACK SASAME FRESH MILK");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 160, qty, rate[47]);
							                 b= 47 ;
							                 ORDER_MORE();
							                
							             break;
							        case '6' : 
							                 gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[48] = 160 * qty;
								             fprintf(fp,"TARO SWEET POTATO FRESH MILK");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 160, qty, rate[48]);
							                 b= 48 ;
							                 ORDER_MORE();
							                
							             break;
							        default:
										     system("cls");
									     	gotoxy(30,2);printf("здддддддддддддддддддддд©");
									       	gotoxy(30,3);printf("Ё  MACAO IMPERIAL TEA  Ё");
										     gotoxy(30,4);printf("юдддддддддддддддддддддды");

									       	gotoxy(15,5);
									     	printf("зддддддддддддддддддддддддддддддддддддддддддддддддддддд©");

							    	for(i=0;i<5;i++)
								    	{
									     	gotoxy(15,6+i);
								        		printf("Ё                                                     Ё\n");
									}
									     	gotoxy(15,11);
									     	printf("юддддддддддддддддддддддддддддддддддддддддддддддддддддды");	
		
									     	gotoxy(37,8);
									     	printf("INVALID");
									     	getch();
									     	MENU();
											
									break;		
							
						break;
					
					case 'A': case 'a':
							 ORDER();
							 gotoxy(20,20);
						     printf("ENTER YOUR CHOICE");
							 scanf("%c",&n);
							
							switch(n)
							{
								    case '1' :
								    	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[49] = 130 * qty;
								             fprintf(fp,"BLACK PEARL");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 20, qty, rate[49]);
							                 b= 49 ;
							                 ORDER_MORE();
							            
							             break;
							        case '2' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[50] = 20 * qty;
								             fprintf(fp,"GRASS JELLY");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 20, qty, rate[50]);
							                 b= 50 ;
							                 ORDER_MORE();
							            
							             break;
							        case '3' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[51] = 15 * qty;
								             fprintf(fp,"PUDDING");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 15, qty, rate[51]);
							                 b= 51 ;
							                 ORDER_MORE();
							                 
							             break;
							        case '4' : 
							                 gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[52] = 30 * qty;
								             fprintf(fp,"WHITE PEARL");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 30, qty, rate[52]);
							                 b= 52 ;
							                 ORDER_MORE();
							                 
							             break;
							        case '5' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[53] = 40 * qty;
								             fprintf(fp,"CREAM CHEESE");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 40, qty, rate[53]);
							                 b= 53 ;
							                 ORDER_MORE();
							                
							             break;
							        case '6' : 
							                 gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[54] = 15 * qty;
								             fprintf(fp,"RED BEAN");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 15, qty, rate[54]);
							                 b= 54 ;
							                 ORDER_MORE();
							                
							             break;
							        case '7' :
							        	     gotoxy(20,21);
							        	     printf("ENTER QUANTITY : ");
								             scanf("%d",&qty);
								             rate[55] = 40 * qty;
								             fprintf(fp,"CHESTNUT CREAM");
							                 fprintf(fp,"\t\t%d x %d - %d\n", 40, qty, rate[55]);
							                 b= 55 ;
							                 ORDER_MORE();
							                
							             break;
							
							gotoxy(16,16);
							printf("ддддддддддддддддддддддддддддддддддддддддддддддддддддд");
							gotoxy(20,17);
							printf("[B] - BACK");
							
							ORDER_FORM();
							category = 'A';
							
						break;
						
					case 'E': case 'e': case 'B': case 'b':
							EXIT();
				
						break;
						
					default:
							system("cls");
							gotoxy(30,2);printf("здддддддддддддддддддддд©");
							gotoxy(30,3);printf("Ё  MACAO IMPERIAL TEA  Ё");
							gotoxy(30,4);printf("юдддддддддддддддддддддды");

							gotoxy(15,5);
							printf("зддддддддддддддддддддддддддддддддддддддддддддддддддддд©");

						for(i=0;i<5;i++)
							{
							gotoxy(15,6+i);
							printf("Ё                                                     Ё\n");
							}
							gotoxy(15,11);
							printf("юддддддддддддддддддддддддддддддддддддддддддддддддддддды");	
		
							gotoxy(34,8);
							printf("INVALID");
							getch();
							MENU();		
						break;					
				}
		}while(iExit == 1);

	} 		

void main()
	{
		fp = fopen("bill.txt","w+");
		fprintf(fp,"%s","\n");
		fprintf(fp,"%s","*********************************************************************\n");
		fprintf(fp,"%s","\t\t\t   MACAO IMPERIAL TEA\n");
		fprintf(fp,"%s","\t\t\t");
		ftime(&t);
		fprintf(fp,"%s",ctime(&t));
		fprintf(fp,"%s","*********************************************************************\n\n");
		
	system("Title MACAO IMPERIAL TEA ORDERING SYSTEM");
do
	{	
		struct login e;	
		system("cls");	
		LOGIN();
		gotoxy(33,7);
		printf("USERNAME : ");
		gotoxy(33,8);
		printf("PASSWORD :");
		gotoxy(44,7);
		gets(e.username);
		gotoxy(44,8);

	for(i = 0; i < 5; i++)
		{
			e.password[i] = getch();
			printf("*");
		}
		
		e.password[i]='\0';
		
		if(strcmp(e.username,"admin")==0 && (strcmp(e.password,"admin")==0))
			{
				system("cls");
				LOGIN();
				gotoxy(38,8);
				for(e.load = 0; e.load < strlen(loading); e.load++)
					{
						printf("%c", loading[e.load]);
						Sleep(100);
					}	
				
				gotoxy(30,9);
				for(e.load = 0; e.load < strlen(loader); e.load++)
					{
						printf("%c", loader[e.load]);
						Sleep(100);
					}
				MENU();
				iExit = 1;
				
			}
		
		else 
			{
	
				loginCounter++;
				
				if(loginCounter == 3)
					{
						system("cls");
						LOGIN();
						gotoxy(20,7);
						printf("Sorry you have entered the wrong username and");
						gotoxy(30,8);
						printf("password multiple times!");
						sleep(5);
						iExit = 1;
						ans = 2;	
					}
			}
	}while(iExit == 0);
}







