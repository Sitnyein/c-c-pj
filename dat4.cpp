///*conversion binary to decimal*/
//#include<stdio.h>
//#include<stdlib.h>
//#include<conio.h>
//#define MGMG 30
//int bin_dec(char bindec[]);
//
//int main() {
//	
//	int decimal=0;
//	char chbin[MGMG];
//    printf("Enter 0-1 in char-bin\n");
//    gets(chbin);
//	decimal = bin_dec(chbin);
//	if(decimal == -1) {
//		printf("you enter number is invalid\n");
//	}
//	 printf("finall decimal is %d",decimal);
//	
//    getch();
//	return 0;
//}
//
//int bin_dec(char bindec[]) {
//	int i=0;
//	int number;
//	int decimal =0;
//	while(bindec[i] != '\0') {
//		number = bindec[i] -48;
//		if(number == 0 || number== 1 ) {
//		   decimal=(decimal*2)+number;
//		    i++;
//		}  else{ return -1; } 
//	          }
//
//	 return decimal;
//}









/* binary to decimal  paratice and rewrite*/
#include<iostream>
#include<stdlib.h> 
#include<string.h>
#include<conio.h>
int bintodec(char bindec[]) ;



int main() {
	
	   char chbin[20];
	   int decimal = 0;
	   printf("enter 0 or 1 for chbin to decimal\n");
	   gets(chbin);
	   
	 
	   
	  decimal =   bintodec(chbin);
	  printf("final decimal number is %d",decimal);
	
	
	
	 return 0;
	
	}

int bintodec(char bindec[]) {
	int i;
	int number =0;
	int decimal=0;
	while(bindec[i] != '\0') {
		
	 number = bindec[i]-48;
	
	decimal=(decimal*2)+number;
	i++;
	}
	return decimal;
}


































































































