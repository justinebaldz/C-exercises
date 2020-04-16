#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<dos.h>

struct login
	{
		char username[20], password[20];
		int load;
	};	
char *orders[60];
orders[0] = "CHESTNUT CREAM JASMINE GREEN TEA";
orders[1] = "";
orders[2] = "";
orders[3] = "";
orders[4] = "";
orders[5] = "";
orders[6] = "";
orders[7] = "";
orders[8] = "";
orders[9] = "";
orders[10] = "";
orders[11] = "";
orders[12] = "";
orders[13] = "";
orders[14] = "";
orders[15] = "";
orders[16] = "";
orders[17] = "";
orders[18] = "";
orders[19] = "";
orders[20] = "";
orders[21] = "";



int j, i;
int loginCounter = 0;
int ord;
int qty;
int iExit = 0 ;
int b;

char ans;
char type, n, a, c;
char category;
char loading[10] = "LOADING", loader[30] = "=======================";

float TotalPrice, cash, price, change;
float rate[58];


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
		
		gotoxy(30,2);printf("========================");
		gotoxy(30,3);printf("|  MACAO IMPERIAL TEA  |");
		gotoxy(30,4);printf("========================");

		gotoxy(15,5);
		printf("------------------------------------------------------");

	for(i=0;i<5;i++)
		{
		gotoxy(15,6+i);
		printf("|                                                    |\n");
		}
		gotoxy(15,11);
		printf("-----------------------------------------------------");

	}

void ORDER(void) //Design
	{
		system("cls");
		gotoxy(33,2);printf("====================");
		gotoxy(33,3);printf("|                  |");
		gotoxy(33,4);printf("====================");

		gotoxy(15,5);
		printf("-------------------------------------------------------");

		for(i=0;i<14;i++)
		{
			gotoxy(15,6+i);
			printf("|                                                     |\n");
		}
		gotoxy(16,7);
		printf("-----------------------------------------------------");
		gotoxy(15,19);
		printf("-------------------------------------------------------");
		
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
		gotoxy(32,2);printf("========================");
		gotoxy(32,3);printf("|  MACAO IMPERIAL TEA  |");
		gotoxy(32,4);printf("========================");

		gotoxy(15,5);
		printf("-------------------------------------------------------");

	for(i=0;i<5;i++)
		{
		gotoxy(15,6+i);
		printf("|                                                     |\n");
		}
		gotoxy(15,11);
		printf("-------------------------------------------------------");	

		gotoxy(30,10);
		printf("");
		gotoxy(31,6);
		printf("DO YOU REALLY WANT TO EXIT?");
		gotoxy(40,8);
		printf("[1] YES");
		gotoxy(40,9);
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
				// for(b = 0; b < 62; b++)
				// 	{
				// 		TotalPrice += rate[b];
				// 	}
			

		fprintf(fp,"%s","---------------------------------------------------------------------\n");
		fprintf(fp,"\t\t\t\t\t%s: \t%.2f\n","TOTAL PRICE", TotalPrice);
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
		
		printf("\t\t\t\t\tCASH : ");
		scanf("%f", &cash);
		
			change = cash - TotalPrice;
						
		fprintf(fp,"\t\t\t\t\t%s: \t\t%.2f\n","CASH", cash);
		fprintf(fp,"\t\t\t\t\t%s: \t%.2f\n","CHANGE", change);
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
		
		ord = 0;
		MENU();
	}

void ORDER_FORM(void)
	{
		switch(category)
			{
				case '0':
						gotoxy(20,20);
						printf("ENTER YOUR CHOICE : ");
						scanf("%c", &n);

						switch(n)
							{
								case '1':
										gotoxy(20,21);
										printf("ENTER QUANTITY : ");
										scanf("%i", &qty);	
										rate[1] = 100.00 * qty;
										fprintf(fp,"%s","CHESTNUT CREAM JASMINE GREEN TEA");
										fprintf(fp,"\t\t%.2f x %i = %.2f\n", 100.00, qty, rate[1]);
										TotalPrice += rate[1];
										ORDER_MORE();	
									break;

								case '2':
										gotoxy(20,21);
										printf("ENTER QUANTITY : ");
										scanf("%i",&qty);	
										rate[2] = 105.00 * qty;
										fprintf(fp,"%s","CHESTNUT CREAM OSMANTHUS OOLONG TEA");
										fprintf(fp,"\t\t%.2f x %i = %.2f\n", 105.00, qty, rate[2]);
										TotalPrice += rate[2];
										ORDER_MORE();
									break;	

								case '3':
										gotoxy(20,21);
										printf("ENTER QUANTITY : ");
										scanf("%i",&qty);	
										rate[3] = 120.00 * qty;
										fprintf(fp,"%s","CHESTNUT CREAM TEA");
										fprintf(fp," \t\t\t\t%.2f x %i = %.2f\n", 120.00, qty, rate[3]);
										TotalPrice += rate[3];
										ORDER_MORE();
									break;

								case '4':
										gotoxy(20,21);
										printf("ENTER QUANTITY : ");
										scanf("%i",&qty);
										rate[4] = 130.00 * qty;
										fprintf(fp,"%s","CHESTNUT CREAM COCOA");
										fprintf(fp," \t\t\t\t%.2f x %i = %.2f\n", 130.00, qty, rate[4]);
										TotalPrice += rate[4];
										ORDER_MORE();
									break;

								case '5':
										gotoxy(20,21);
										printf("ENTER QUANTITY : ");
										scanf("%i",&qty);
										rate[5] = 145.00 * qty;
										fprintf(fp,"%s","CHESTNUT CREAM UJI MATCHA");
										fprintf(fp," \t\t\t%.2f x %i = %.2f\n", 145.00, qty, rate[5]);
										TotalPrice += rate[5];
										ORDER_MORE();	
									break;

								case 'B': case 'b':
										MENU();
									break;	

								default:
										system("cls");
										gotoxy(30,2);printf("========================");
										gotoxy(30,3);printf("|  MACAO IMPERIAL TEA  |");
										gotoxy(30,4);printf("========================");

										gotoxy(15,5);
										printf("-------------------------------------------------------");

								for(i = 0; i < 5; i++)
									{
										gotoxy(15,6+i);
										printf("|                                                     |\n");
									}
										gotoxy(15,11);
										printf("-------------------------------------------------------");	
		
										gotoxy(37,8);
										printf("INVALID");
										getch();
										MENU();
									break; 
							}
					break;
				
				case '1':
						gotoxy(20,20);
						printf("ENTER YOUR CHOICE : ");
						scanf("%c",&n);
							
						switch(n)
							{
							    case '1':
							            gotoxy(20,21);
							            printf("ENTER QUANTITY : ");
							            scanf("%i",&qty);
							            rate[6] = 90.00 * qty;
							            fprintf(fp,"%s","CREAM CHEESE SEA SALT JASMINE GREEN TEA");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 90.00, qty, rate[6]);
										TotalPrice += rate[6];
							            ORDER_MORE();
									break;

								case '2':
								        gotoxy(20,21);
								        printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[7] = 100.00 * qty;
								        fprintf(fp,"%s","CREAM CHEESE OSMANTHUS OOLONG TEA");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 100.00, qty, rate[7]);
							            TotalPrice += rate[7];
							            ORDER_MORE();    
							        break;

								case '3':
								        gotoxy(20,21);
								        printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[8] = 105.00 * qty;
								        fprintf(fp,"%s","CREAM CHEESE RED ROSE TEA");
							            fprintf(fp,"\t\t\t%.2f x %i = %.2f\n", 105.00, qty, rate[8]);
							            TotalPrice += rate[8];
							            ORDER_MORE();  
							        break;

							    case '4':
							    	    gotoxy(20,21);
							    	    printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[9] = 120.00 * qty;
								        fprintf(fp,"%s","CREAM CHEESE WHITE PEACH OOLONG TEA");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 120.00, qty, rate[9]);
							            TotalPrice += rate[9];
							            ORDER_MORE();
							        break;

							    case '5':
							            gotoxy(20,21);
							            printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[10] = 120.00 * qty;
								        fprintf(fp,"%s","CREAM CHEESE MILK TEA");
							            fprintf(fp,"\t\t\t\t%.2f x %i = %.2f\n", 120.00, qty, rate[10]);
							            TotalPrice += rate[10];
							            ORDER_MORE();
							        break;

							    case '6':
							    	    gotoxy(20,21);
							    	    printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[11] = 120.00 * qty;
								        fprintf(fp,"%s","CREAM CHEESE OREO MILK TEA");
							            fprintf(fp,"\t\t\t%.2f x %i = %.2f\n", 120.00, qty, rate[11]);
							            TotalPrice += rate[11];
							            ORDER_MORE();
							        break;

							    case '7':
							            gotoxy(20,21);
							            printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[12] = 120.00 * qty;
								        fprintf(fp,"%s","CREAM CHEESE COCOA");
							            fprintf(fp,"\t\t\t\t%.2f x %i = %.2f\n", 120.00, qty, rate[12]);
							            TotalPrice += rate[12];
							            ORDER_MORE();
							        break;

							    case '8':
							    	    gotoxy(20,21);
							            printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[13] = 130.00 * qty;
								        fprintf(fp,"%s","CREAM CHEESE UJI MATCHA");
							            fprintf(fp,"\t\t\t\t%.2f x %i = %.2f\n", 130.00, qty, rate[13]);
							            TotalPrice += rate[13];
							            ORDER_MORE();
							        break;

							    case 'B': case 'b':
										MENU();
									break;

								default:
										system("cls");
										gotoxy(30,2);printf("========================");
										gotoxy(30,3);printf("|  MACAO IMPERIAL TEA  |");
										gotoxy(30,4);printf("========================");

										gotoxy(15,5);
										printf("-------------------------------------------------------");

								for(i=0;i<5;i++)
									{
										gotoxy(15,6+i);
										printf("|                                                     |\n");
									}
										gotoxy(15,11);
										printf("-------------------------------------------------------");	
		
										gotoxy(37,8);
										printf("INVALID");
										getch();
										MENU();
									break;

							}
					break;

				case '2':
						gotoxy(20,20);
						printf("ENTER YOUR CHOICE : ");
						scanf("%c",&n);
							
						switch(n)
							{
								case '1':
							   	      	gotoxy(20,21);
							            printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[14] = 90.00 * qty;
								        fprintf(fp,"%s","BREWED LEMON ICED TEA");
							            fprintf(fp,"\t\t\t\t%.2f x %i = %.2f\n", 90.00, qty, rate[14]);
							            TotalPrice += rate[14];
							            ORDER_MORE();
							        break;
							    case '2':
							            gotoxy(20,21);
							            printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[15] = 90.00 * qty;
								        fprintf(fp,"%s","LEMON ICED JELLY TEA");
							            fprintf(fp,"\t\t\t\t%.2f x %i = %.2f\n", 90.00, qty, rate[15]);
							            TotalPrice += rate[15];
							            ORDER_MORE();
							        break;
							    case '3':
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[16] = 120.00 * qty;
								        fprintf(fp,"%s","KUMQUAT LEMON TEA");
							            fprintf(fp,"\t\t\t\t%.2f x %i = %.2f\n", 120.00, qty, rate[16]);
							            TotalPrice += rate[16];
							            ORDER_MORE();
							        break;
							    case '4':
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[17] = 120.00 * qty;
								        fprintf(fp,"%s","CRANBERRY TEA");
							            fprintf(fp,"\t\t\t\t\t%.2f x %i = %.2f\n", 120.00, qty, rate[17]);
							            TotalPrice += rate[17];
							            ORDER_MORE();
							        break;

							    case 'B': case 'b':
										MENU();
									break;

							    default:
										system("cls");
										gotoxy(30,2);printf("========================");
										gotoxy(30,3);printf("|  MACAO IMPERIAL TEA  |");
										gotoxy(30,4);printf("========================");

										gotoxy(15,5);
										printf("-------------------------------------------------------");

							     	for(i=0;i<5;i++)
										{
									     	gotoxy(15,6+i);
									      	printf("|                                                     |\n");
										}
										gotoxy(15,11);
										printf("-------------------------------------------------------");	
										gotoxy(37,8);
										printf("INVALID");
									    getch();
									    MENU();
									break;		
							}
					break;

				case '3':
						gotoxy(20,20);
						printf("ENTER YOUR CHOICE : ");
						scanf("%c",&n);
							
						switch(n)
							{
						        case '1':
						        	    gotoxy(20,21);
						        	    printf("ENTER QUANTITY : ");
							            scanf("%i",&qty);
								        rate[18] = 90.00 * qty;
								        fprintf(fp,"%s","ORIGINAL MILK TEA");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 90.00, qty, rate[18]);
							            TotalPrice += rate[18];
							            ORDER_MORE();
							        break;

							    case '2':
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[19] = 100.00 * qty;
								        fprintf(fp,"%s","BLACK PEARL MILK TEA");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 100.00, qty, rate[19]);
							            TotalPrice += rate[19];
							            ORDER_MORE();
							        break;

							   case '3' :
							            gotoxy(20,21);
							            printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[20] = 100.00 * qty;
								        fprintf(fp,"%s","GLASS JELLY MILK TEA");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 100.00, qty, rate[20]);
							            TotalPrice += rate[20];
							            ORDER_MORE();
							        break;

							    case '4':      	
							            gotoxy(20,21);
							            printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[21] = 100.00 * qty;
								        fprintf(fp,"%s","CHEESECAKE AND PEARL MILK TEA");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 100.00, qty, rate[21]);
							            TotalPrice += rate[21];
							            ORDER_MORE();
							        break;

							    case '5':
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[22] = 130.00 * qty;
								        fprintf(fp,"%s","RED BEAN AND PUDDING MILK TEA");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 130.00, qty, rate[22]);
							            TotalPrice += rate[22];
							            ORDER_MORE();    
							        break;

							    case 'B': case 'b':
										MENU();
									break;

					            default:
										system("cls");
										gotoxy(30,2);printf("========================");
										gotoxy(30,3);printf("|  MACAO IMPERIAL TEA  |");
									    gotoxy(30,4);printf("========================");
 
										gotoxy(15,5);
										printf("-------------------------------------------------------");

									for(i=0;i<5;i++)
							 	   		{ 
											gotoxy(15,6+i);
											printf("|                                                     |\n");
								   		}
										gotoxy(15,11);
									    printf("-------------------------------------------------------");	
		
									    gotoxy(37,8);
									    printf("INVALID");
									    getch();
									    MENU();		
									break;		
							}
					break;

				case '4':
						gotoxy(20,20);
						printf("ENTER YOUR CHOICE : ");
						scanf("%c",&n);
							
						switch(n)
							{
								case '1':
								    	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[23] = 135.00 * qty;
								        fprintf(fp,"%s","RED BEAN PUDDING MATCHA");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 135.00, qty, rate[23]);
							            TotalPrice += rate[23];
							            ORDER_MORE();
							        break;

							    case '2':
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[24] = 135.00 * qty;
								        fprintf(fp,"%s","RED BEAN MATCHA MILK SHAKE");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 135.00, qty, rate[24]);
							            TotalPrice += rate[24];
							            ORDER_MORE();
							        break;

							    case 'B': case 'b':
										MENU();
									break;

								default:
										system("cls");
										gotoxy(30,2);printf("========================");
										gotoxy(30,3);printf("|  MACAO IMPERIAL TEA  |");
										gotoxy(30,4);printf("========================");

										gotoxy(15,5);
										printf("-------------------------------------------------------");

									for(i=0;i<5;i++)
										{
											gotoxy(15,6+i);
											printf("|                                                     |\n");
										}
										gotoxy(15,11);
										printf("-------------------------------------------------------");	
		
										gotoxy(37,8);
										printf("INVALID");
										getch();
										MENU();		
									break;
							}
					break; 

				case '5':
						gotoxy(20,20);
						printf("ENTER YOUR CHOICE : ");
						scanf("%c",&n);
							
						switch(n)
							{
								case '1':
								    	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[25] = 120.00 * qty;
								        fprintf(fp,"%s","MANGO YAKULT");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 120.00, qty, rate[25]);
							            TotalPrice += rate[25];
							            ORDER_MORE();
							        break;

							    case '2':
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[26] = 120.00 * qty;
								        fprintf(fp,"%s","LEMON YAKULT");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 120.00, qty, rate[26]);
							            TotalPrice += rate[26];
							            ORDER_MORE();
							        break;

							    case '3':
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[27] = 75 * qty;
								        fprintf(fp,"%s","YAKULT GREEN TEA");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 75.00, qty, rate[27]);
							            TotalPrice += rate[27];
							            ORDER_MORE();
							        break;

							    case 'B': case 'b':
										MENU();
									break;

							    default:
										system("cls");
									    gotoxy(30,2);printf("========================");
									    gotoxy(30,3);printf("|  MACAO IMPERIAL TEA  |");
										gotoxy(30,4);printf("========================");

									    gotoxy(15,5);
									    printf("-------------------------------------------------------");

							    	for(i=0;i<5;i++)
								    	{
									     	gotoxy(15,6+i);
								        	printf("|                                                     |\n");
										}
									    gotoxy(15,11);
									    printf("-------------------------------------------------------");	
		
									    gotoxy(37,8);
									    printf("INVALID");
									    getch();
									    MENU();		
									break;				
							}
					break;

				case '6':
						gotoxy(20,20);
						printf("ENTER YOUR CHOICE : ");
						scanf("%c",&n);
							
						switch(n)
							{
								case '1':
								    	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[28] = 145.00 * qty;
								        fprintf(fp,"%s","BLUE CURACAO SODA");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 145.00, qty, rate[27]);
							            TotalPrice += rate[28];
							            ORDER_MORE();
							        break;

						        case '2':
						            	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[29] = 145.00 * qty;
								        fprintf(fp,"%s","CHERRY BLOSSOM SODA");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 145.00, qty, rate[29]);
							            TotalPrice += rate[29];
							            ORDER_MORE();
							        break;

							    case '3':
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[30] = 145.00 * qty;
								        fprintf(fp,"%s","GREEN APPLE SODA");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 145.00, qty, rate[30]);
							            TotalPrice += rate[30];
							            ORDER_MORE();
							        break;

							    case '4':     
							            gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[31] = 145.00 * qty;
								        fprintf(fp,"%s","MID-SUMMER SODA");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 145.00, qty, rate[31]);
							            TotalPrice += rate[31];
							            ORDER_MORE();
							        break;

							    case '5':
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[32] = 165.00 * qty;
								        fprintf(fp,"%s","OVER THE RAINBOW SODA");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 165.00, qty, rate[32]);
							            TotalPrice += rate[32];
							            ORDER_MORE();
							        break;
							             
							    case 'B': case 'b':
										MENU();
									break;

						        default:
										system("cls");
									    gotoxy(30,2);printf("========================");
									    gotoxy(30,3);printf("|  MACAO IMPERIAL TEA  |");
										gotoxy(30,4);printf("========================");

									    gotoxy(15,5);
									    printf("-------------------------------------------------------");

							    	for(i=0;i<5;i++)
								    	{
									     	gotoxy(15,6+i);
								        	printf("|                                                     |\n");
										}
									    gotoxy(15,11);
									    printf("-------------------------------------------------------");	
		
									    gotoxy(37,8);
									    printf("INVALID");
									    getch();
									    MENU();	
									break;		
							}
					break;

				case '7':
						gotoxy(20,20);
						printf("ENTER YOUR CHOICE : ");
						scanf("%c",&n);
							
						switch(n)
							{
								case '1':
								    	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[33] = 130.00 * qty;
								        fprintf(fp,"%s","AMERICAO");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 130.00, qty, rate[33]);
							            TotalPrice += rate[33];
							            ORDER_MORE();
							        break;

							    case '2':
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[334] = 180.00 * qty;
								        fprintf(fp,"%s","CHARCOAL GRILLED AMERICANO");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 180.00, qty, rate[34]);
							            TotalPrice += rate[34];
							            ORDER_MORE();						           
							        break;

							    case '3':
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[35] = 140.00 * qty;
								        fprintf(fp,"%s","CAPPUCCINO");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 140.00, qty, rate[35]);
							            TotalPrice += rate[35];
							            ORDER_MORE();  
							         break;

							    case '4':
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[36] = 140.00 * qty;
								        fprintf(fp,"%s","LATTE");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 140.00, qty, rate[36]);
							            TotalPrice += rate[36];
							            ORDER_MORE();
							        break;         
							         
							    case '5':
									    gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[37] = 155.00 * qty;
								        fprintf(fp,"%s","MOCHA");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 155.00, qty, rate[37]);
							            TotalPrice += rate[37];
							            ORDER_MORE();
							        break;  

							    case '6':
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[38] = 165.00 * qty;
								        fprintf(fp,"%s","WHITE MOCHA");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 165.00, qty, rate[38]);
							            TotalPrice += rate[38];
							            ORDER_MORE();
							        break; 

							    case '7':
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[39] = 165.00 * qty;
								        fprintf(fp,"%s","CARAMEL MOCCHIATO");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 165.00, qty, rate[39]);
							            TotalPrice += rate[39];
							            ORDER_MORE();
							        break; 

							    case '8' :
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[40] = 155.00 * qty;
								        fprintf(fp,"%s","MATCHA LATTE");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 155.00, qty, rate[40]);
							            TotalPrice += rate[40];
							            ORDER_MORE();
							        break; 

							    case 'B': case 'b':
										MENU();
									break;

							    default:
										system("cls");
									    gotoxy(30,2);printf("========================");
									    gotoxy(30,3);printf("|  MACAO IMPERIAL TEA  |");
										gotoxy(30,4);printf("========================");
								     	
								     	gotoxy(15,5);
									    printf("-------------------------------------------------------");

							    	for(i=0;i<5;i++)
								    	{
									     	gotoxy(15,6+i);
								        	printf("|                                                     |\n");
										}
									    gotoxy(15,11);
									    printf("-------------------------------------------------------");	
		
									    gotoxy(37,8);
									    printf("INVALID");
									    getch();
									    MENU();
									break;		
							}
					break;

				case '8':
						gotoxy(20,20);
						printf("ENTER YOUR CHOICE : ");
						scanf("%c",&n);
							
						switch(n)
							{
								case '1':
								    	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[41] = 150.00 * qty;
								        fprintf(fp,"%s","CAPPUCCINO MPRESSO");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 150.00, qty, rate[41]);
							            TotalPrice += rate[41];
							            ORDER_MORE();
							        break;

							    case '2':
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[42] = 165.00 * qty;
								        fprintf(fp,"%s","MOCHA MPRESSO");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 165.00, qty, rate[42]);
							            TotalPrice += rate[42];
							            ORDER_MORE();
							        break;

							    case '3':
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[43] = 175.00 * qty;
								        fprintf(fp,"%s","WHITE MOCHA MPRESSO");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 175.00, qty, rate[43]);
							            TotalPrice += rate[43];
							            ORDER_MORE();
							        break;

							    case '4': 
							            gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[44] = 175.00 * qty;
								        fprintf(fp,"%s","CARAMEL MPRESSO");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 175.00, qty, rate[44]);
							            TotalPrice += rate[44];
							            ORDER_MORE();
							        break;

							    case '5' :
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[45] = 165.00 * qty;
								        fprintf(fp,"%s","WHITE MOCHA MPRESSO");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 165.00, qty, rate[45]);
							            TotalPrice += rate[45];
							            ORDER_MORE();
							        break;
							    
							    case 'B': case 'b':
										MENU();
									break;

								default:
										system("cls");
									    gotoxy(30,2);printf("========================");
									    gotoxy(30,3);printf("|  MACAO IMPERIAL TEA  |");
										gotoxy(30,4);printf("========================");

									    gotoxy(15,5);
									    printf("-------------------------------------------------------");

							    	for(i=0;i<5;i++)
						 				{
									    	gotoxy(15,6+i);
								        	printf("|                                                     |\n");
										}
									    gotoxy(15,11);
									    printf("-------------------------------------------------------");	
		
									    gotoxy(37,8);
									    printf("INVALID");
									    getch();
						   				MENU();
									break;
							}
					break;

				case '9':
						gotoxy(20,20);
						printf("ENTER YOUR CHOICE : ");
						scanf("%c",&n);
							
						switch(n)
							{
								case '1':
								    	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[46] = 130.00 * qty;
								        fprintf(fp,"%s","KITTEN MILK TEA");
							            fprintf(fp,"\t\t\t\t\t%.2f x %i = %.2f\n", 130.00, qty, rate[46]);
							            TotalPrice += rate[46];
							            ORDER_MORE();
							        break;

							    case '2':
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[47] = 160.00 * qty;
								        fprintf(fp,"%s","OSMANTHUS OOLONG TEA");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 160.00, qty, rate[47]);
							            TotalPrice += rate[47];
							            ORDER_MORE();
							        break;

							    case '3':
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[48] = 195.00 * qty;
								        fprintf(fp,"%s","GINGER MILK TEA");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 195.00, qty, rate[48]);
							            TotalPrice += rate[48];
							            ORDER_MORE();
							        break;

							    case '4': 
							            gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[49] = 160.00 * qty;
								        fprintf(fp,"%s","EJIAO RED DATES FRESH MILK");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 160.00, qty, rate[49]);
							            TotalPrice += rate[49];
							            ORDER_MORE();
							        break;
							    
							    case '5':
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[50] = 160.00 * qty;
								        fprintf(fp,"%s","BLACK SASAME FRESH MILK");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 160.00, qty, rate[50]);
							            TotalPrice += rate[50];
							            ORDER_MORE();
							        break;
							    
							    case '6': 
							            gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[51] = 160.00 * qty;
								        fprintf(fp,"%s","TARO SWEET POTATO FRESH MILK");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 160.00, qty, rate[51]);
							            TotalPrice += rate[51];
							            ORDER_MORE();
							        break;
							    
							    case 'B': case 'b':
										MENU();
									break;

							    default:
										system("cls");
									    gotoxy(30,2);printf("========================");
									    gotoxy(30,3);printf("|  MACAO IMPERIAL TEA  |");
										gotoxy(30,4);printf("========================");

									    gotoxy(15,5);
									    printf("-------------------------------------------------------");

							    	for( i = 0; i < 5; i++)
								    	{
									     	gotoxy(15,6+i);
								        	printf("|                                                     |\n");
										}
									    gotoxy(15,11);
									    printf("-------------------------------------------------------");	
		
									    gotoxy(37,8);
									    printf("INVALID");
									    getch();
									    MENU();
									break;		
							}
					break;

				case 'A':
						gotoxy(20,20);
						printf("ENTER YOUR CHOICE : ");
						scanf("%c",&n);
							
						switch(n)
							{
								case '1':
								    	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[52] = 20.00 * qty;
								        fprintf(fp,"%s","BLACK PEARL");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 20.00, qty, rate[52]);
							            TotalPrice += rate[52];
							            ORDER_MORE();
							        break;

							    case '2' :
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[53] = 20.00 * qty;
								        fprintf(fp,"%s","GRASS JELLY");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 20.00, qty, rate[53]);
							            TotalPrice += rate[53];
							            ORDER_MORE();
							        break;

							    case '3':
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[54] = 15.00 * qty;
								        fprintf(fp,"%s","PUDDING");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 15.00, qty, rate[54]);
							            TotalPrice += rate[54];
							            ORDER_MORE();
							        break;

							    case '4': 
							            gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[55] = 30.00 * qty;
								        fprintf(fp,"%s","WHITE PEARL");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 30.00, qty, rate[55]);
							            TotalPrice += rate[55];
							            ORDER_MORE();
							        break;

							    case '5':
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[56] = 40.00 * qty;
								        fprintf(fp,"%s","CREAM CHEESE");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 40.00, qty, rate[56]);
							            TotalPrice += rate[56];
							            ORDER_MORE();
							        break;
							    
							    case '6': 
							            gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[57] = 15.00 * qty;
								        fprintf(fp,"%s","RED BEAN");
							            fprintf(fp,"\t\t%.2f x %i= %.2f\n", 15.00, qty, rate[57]);
							            TotalPrice += rate[57];
							            ORDER_MORE();
							        break;
							    
							    case '7':
							        	gotoxy(20,21);
							        	printf("ENTER QUANTITY : ");
								        scanf("%i",&qty);
								        rate[58] = 40.00 * qty;
								        fprintf(fp,"%s","CHESTNUT CREAM");
							            fprintf(fp,"\t\t%.2f x %i = %.2f\n", 40.00, qty, rate[58]);
							            TotalPrice += rate[58];
							            ORDER_MORE();
							        break;

							    case 'B': case 'b':
										MENU();
									break;	

								default:
										system("cls");
										gotoxy(30,2);printf("========================");
										gotoxy(30,3);printf("|  MACAO IMPERIAL TEA  |");
										gotoxy(30,4);printf("========================");

										gotoxy(15,5);
										printf("-------------------------------------------------------");

								for(i=0;i<5;i++)
									{
										gotoxy(15,6+i);
										printf("|                                                     |\n");
									}
										gotoxy(15,11);
										printf("-------------------------------------------------------");	
		
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
	
	do
	{
		gotoxy(34,2);printf("===============");
		gotoxy(34,3);printf("|  MAIN MENU  |");
		gotoxy(34,4);printf("===============");

		gotoxy(15,5);
		printf("-------------------------------------------------------");

	for(i = 0; i < 15; i++)
		{
			gotoxy(15,6+i);
			printf("|                                                     |\n");
		}
		gotoxy(15,20);
		printf("-------------------------------------------------------");
		

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
			

		type = getche();

			switch(type)
				{
					case '0':
							ORDER();
							gotoxy(36,3);
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
							printf("-----------------------------------------------------");
							gotoxy(20,16);
							printf("[B] - BACK"); Sleep(100);
							category = '0';
							ORDER_FORM();
						break;
				
					case '1':
							ORDER();
							gotoxy(37,3);
							printf("CREAM CHEESE"); Sleep(100);
							gotoxy(20,8);
							printf("[1] - SEA SALT JASMINE GREEN TEA	90"); Sleep(100);
							gotoxy(20,9);
							printf("[2] - OSMANTHUS OOLONG TEA         	100"); Sleep(100);
							gotoxy(20,10);
							printf("[3] - RED ROSE TEA			105"); Sleep(100);
							gotoxy(20,11);
							printf("[4] - WHITE PEACH OOLONG TEA	120"); Sleep(100);
							gotoxy(20,12);
							printf("[5] - MILK TEA			120"); Sleep(100);
							gotoxy(20,13);
							printf("[6] - OREO MILK TEA			120"); Sleep(100);
							gotoxy(20,14);
							printf("[7] - COCOA				120"); Sleep(100);
							gotoxy(20,15);
							printf("[8] - UJI MATCHA			145");
							gotoxy(16,16);
							printf("-----------------------------------------------------");
							gotoxy(20,18);
							printf("[B] - BACK"); Sleep(100);
							category = '1';
							ORDER_FORM();
						break;
						
					case '2':
							ORDER();
							gotoxy(41,3);
							printf("TEA");
							gotoxy(20,8);
							printf("[1] - BREWED LEMON ICED RED TEA	90"); Sleep(100);
							gotoxy(20,9);
							printf("[2] - LEMON ICED JELLY TEA         	90"); Sleep(100);
							gotoxy(20,10);
							printf("[3] - KUMQUAT LEMON TEA		120"); Sleep(100);
							gotoxy(20,11);
							printf("[4] - CRANBERRY TEA			120");
							gotoxy(16,13);
							printf("-----------------------------------------------------");
							gotoxy(20,15);
							printf("[B] - BACK");
							category = '2';
							ORDER_FORM();
						break;			
				
					case '3':
							ORDER();
							gotoxy(39,3);
							printf("MILK TEA");
							gotoxy(20,8);
							printf("[1] - ORIGINAL MILK TEA		90"); Sleep(100);
							gotoxy(20,9);
							printf("[2] - BLACK PEARL MILK TEA         	100"); Sleep(100);
							gotoxy(20,10);
							printf("[3] - GRASS JELLY MILK TEA		100"); Sleep(100);
							gotoxy(20,11);
							printf("[4] - CHEESECAKE AND PEARL MILK TEA	100"); Sleep(100);
							gotoxy(20,12);
							printf("[5] - RED BEAN AND PUDDING MILK TEA	130");
							gotoxy(16,14);
							printf("-----------------------------------------------------");
							gotoxy(20,16);
							printf("[B] - BACK");
							category = '3';
							ORDER_FORM();
						break;
						
					case '4':
							ORDER();
							gotoxy(39,3);
							printf("RED BEAN");
							gotoxy(20,8);
							printf("[1] - PUDDING MATCHA		135"); Sleep(100);
							gotoxy(20,9);
							printf("[2] - MATCHA MILK SHAKE         	135"); Sleep(100);
							gotoxy(16,11);
							printf("-----------------------------------------------------");
							gotoxy(20,13);
							printf("[B] - BACK");
							category = '4';
							ORDER_FORM();
						break;
						
					case '5':
							ORDER();
							gotoxy(40,3);
							printf("YAKULT");
							gotoxy(20,8);
							printf("[1] - MANGO YAKULT			120"); Sleep(100);
							gotoxy(20,9);
							printf("[2] - LEMON YAKULT         		120"); Sleep(100);
							gotoxy(20,10);
							printf("[3] - YAKULT GREEN TEA         	75");
							gotoxy(16,11);
							printf("-----------------------------------------------------");
							gotoxy(20,13);
							printf("[B] - BACK");
							category = '5';
							ORDER_FORM();
						break;
					
					case '6':
							ORDER();
							gotoxy(41,3);
							printf("SODA");
							gotoxy(20,8);
							printf("[1] - BLUE CURACAO SODA		145"); Sleep(100);
							gotoxy(20,9);
							printf("[2] - CHERRY BLOSSOM SODA   	145"); Sleep(100);
							gotoxy(20,10);
							printf("[3] - GREEN APPLE SODA		145"); Sleep(100);
							gotoxy(20,11);
							printf("[4] - MID-SUMMER SODA		145"); Sleep(100);
							gotoxy(20,12);
							printf("[5] - OVER THE RAINBOW SODA		165");
							gotoxy(16,14);
							printf("-----------------------------------------------------");
							gotoxy(20,16);
							printf("[B] - BACK");
							category = '6';
							ORDER_FORM();	
						break;
						
					case '7':
							ORDER();
							gotoxy(40,3);
							printf("COFFEE");
							gotoxy(20,8);
							printf("[1] - AMERICANO			130"); Sleep(100);
							gotoxy(20,9);
							printf("[2] - CHARCOAL GRILLED AMERICANO	180"); Sleep(100);
							gotoxy(20,10);
							printf("[3] - CAPPUCCINO			140"); Sleep(100);
							gotoxy(20,11);
							printf("[4] - LATTE				140"); Sleep(100);
							gotoxy(20,12);
							printf("[5] - MOCHA				155"); Sleep(100);
							gotoxy(20,13);
							printf("[6] - WHITE MOCHA			165"); Sleep(100);
							gotoxy(20,14);
							printf("[7] - CARAMEL MOCCHIATO		165"); Sleep(100);
							gotoxy(20,15);
							printf("[8] - MATCHA LATTE			155");
							gotoxy(16,17);
							printf("-----------------------------------------------------");
							gotoxy(20,18);
							printf("[B] - BACK");
							category = '7';
							ORDER_FORM();
						break;
						
					case '8':
							ORDER();
							gotoxy(39,3);
							printf("MPRESSO");
							gotoxy(20,8);
							printf("[1] - CAPPUCCINO MPRESSO		150"); Sleep(100);
							gotoxy(20,9);
							printf("[2] - MOCHA MPRESSO         	165"); Sleep(100);
							gotoxy(20,10);
							printf("[3] - WHITE MOCHA MPRESSO		175"); Sleep(100);
							gotoxy(20,11);
							printf("[4] - CARAMEL MPRESSO		175"); Sleep(100);
							gotoxy(20,12);
							printf("[5] - MATCHA MPRESSO		165");
							gotoxy(16,14);
							printf("-----------------------------------------------------");
							gotoxy(20,16);
							printf("[B] - BACK");
							category = '8';
							ORDER_FORM();
						break;
						
					case '9':
							ORDER();
							gotoxy(36,3);
							printf("SPECIAL DRINKS");
							gotoxy(20,8);
							printf("[1] - KITTEN MILK TEA		130"); Sleep(100);
							gotoxy(20,9);
							printf("[2] - OSMANTHUS OOLONG TEA         	160"); Sleep(100);
							gotoxy(20,10);
							printf("[3] - GINGER MILK TEA		195"); Sleep(100);
							gotoxy(20,11);
							printf("[4] - EJIAO  RED DATES FRESH MILK	160"); Sleep(100);
							gotoxy(20,12);
							printf("[5] - BLACK SASAME FRESH MILK 	160"); Sleep(100);
							gotoxy(20,13);
							printf("[6] - TARO SWEET POTATO FRESH MILK 	160");
							gotoxy(16,15);
							printf("-----------------------------------------------------");
							gotoxy(20,17);
							printf("[B] - BACK");
							category = '9';
							ORDER_FORM();	
						break;
					
					case 'A': case 'a':
							ORDER();
							gotoxy(39,3);
							printf("ADD-ONS");
							gotoxy(20,8);
							printf("[1] - BLACK PEARL			20"); Sleep(100);
							gotoxy(20,9);
							printf("[2] - GRASS JELLY			20"); Sleep(100);
							gotoxy(20,10);
							printf("[3] - PUDDING			15"); Sleep(100);
							gotoxy(20,11);
							printf("[4] - WHITE PEARL			30"); Sleep(100);
							gotoxy(20,12);
							printf("[5] - CREAM CHEESE			40"); Sleep(100);
							gotoxy(20,13);
							printf("[6] - RED BEAN			15"); Sleep(100);
							gotoxy(20,14);
							printf("[7] - CHESTNUT CREAM		40");
							gotoxy(16,16);
							printf("-----------------------------------------------------");
							gotoxy(20,17);
							printf("[B] - BACK");
							category = 'A';
							ORDER_FORM();
						break;
						
					case 'E': case 'e': case 'B': case 'b':
							EXIT();
						break;
						
					default:
							system("cls");
							gotoxy(34,2);printf("========================");
							gotoxy(34,3);printf("|  MACAO IMPERIAL TEA  |");
							gotoxy(34,4);printf("========================");

							gotoxy(15,5);
							printf("-------------------------------------------------------");

						for(i=0;i<5;i++)
							{
							gotoxy(15,6+i);
							printf("|                                                     |\n");
							}
							gotoxy(15,11);
							printf("-------------------------------------------------------");	
		
							gotoxy(40,8);
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
		fprintf(fp,"%s","*********************************************************************\n");
		
		fprintf(fp,"%s","\t\t*    Biglang Awa St Cor 11th Ave Catleya   *\n");
		fprintf(fp,"%s","\t\t*	       Caloocan City               *\n");
		fprintf(fp,"%s","\t\t*         Metro Manila, Philippines        *\n");
		fprintf(fp,"%s","\t\t*              Tel: +632=3106581           *\n");
		fprintf(fp,"%s","*********************************************************************\n\n");
		
	system("Title MACAO IMPERIAL TEA ORDERING SYSTEM");
do
	{	
		struct login e;	
		system("cls");	
		LOGIN();
		gotoxy(32,7);
		printf("USERNAME : ");
		gotoxy(32,8);
		printf("PASSWORD :");
		gotoxy(43,7);
		gets(e.username);
		gotoxy(43,8);
		gets(e.password);
//	for(i = 0; i < 5; i++)
//		{
//			e.password[i] = getch();
//			printf("*");
//		}
//		
//		e.password[i]='\0';
		
		if(strcmp(e.username,"")==0 && (strcmp(e.password,"")==0))
			{
				system("cls");
				LOGIN();
				gotoxy(38,8);
				for(e.load = 0; e.load < strlen(loading); e.load++)
					{
						printf("%c", loading[e.load]);
					//	Sleep(100);
					}	
				
				gotoxy(30,9);
				for(e.load = 0; e.load < strlen(loader); e.load++)
					{
						printf("%c", loader[e.load]);
				//		Sleep(100);
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
