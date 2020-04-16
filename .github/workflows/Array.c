#include <stdio.h>
 
int main()
{
//    // An array of 30 integer arrays with 10 elements each.
//    int arr[30][10];
//    int adder = 1;
//    int row;
//    int col;
//    printf("Hello arrays of arrays!\n");
//    
//    // Load each array with the index plus the adder.
//    for (row = 0; row < 30; row++) {
//        for (col = 0; col < 10; col++) {
//            arr[row][col] = col + adder;
//            adder += 5;
//        }
//    }
//    
//    // Display the rows of 10 element arrays.
//    for (row = 0; row < 30; row++) {
//        printf("Row %3d: (", row + 1);
//        for (col = 0; col < 10; col++) {
//            printf("%d, ", arr[row][col]);
//        }
//        printf(")\n");
//    }
// 
//    return 0;

char ch;
	//infinite loop
	while(1)
	{
		printf("Enter any character: ");
		//read a single character
		ch= fgetc(stdin);
		
		if(ch==0x0A)
		{
			printf("ENTER KEY is pressed.\n");
			
		}
		else
		{
			printf("%c is pressed.\n",ch);
		}
		//read dummy character to clear
		//input buffer, which inserts after character input
		ch=getchar();
	}
	return 0;
}
