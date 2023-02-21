///* 
//decimal to binary 
//*/
//
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>



int main() {
	int bin[100];
	int x=0,y=0;
	int decimal =0;
	printf("Enter a decimal number ");
	scanf("%d",&decimal);
	
	 printf("The binary value of decimal %d is ",decimal);

	while(decimal != 0) {
		bin[x]=decimal%2;
		decimal = decimal/2;
		x++;
		}
  	
	for(y=x-1;y>=0;y--) {
		printf("%d",bin[y]);
	}
	

	
   return 0;
   
   }





/*The end of conversion
Hexa to binary to final*/
//#include<stdio.h>
//#include<stdlib.h>
//#include<conio.h>
//#include<math.h>
//#define Winhtut 20
//
//int main() {
//	char hexa[Winhtut];
//	char bin[100];
//	int i=0,y=0,x=0;
//	int length=0;
//	int decimal=0;
//	printf("Enter your Hexa\t\t");
//	gets(hexa);
//	
//	for(length=0;hexa[length] != '\0'; length ++) ;
//	
//	for(i=0;hexa[i] !='\0';++i,--length) {
//		if( hexa[i] >= '0' && hexa[i]<='9' )
//			decimal += (hexa[i] - '0')*pow(16,length - 1);
//		
//		if( hexa[i] >= 'A' && hexa[i]<='Z'  )
//		 decimal += (hexa[i] - 55 )*pow(16,length - 1);
//		
//		if( hexa[i] >= 'a' && hexa[i]<='z'  )
//		decimal += (hexa[i] - 87 )*pow(16,length - 1);	
//		
//	}
//	printf("the decimal number is %d\n",decimal);
//	
//		
//		 printf("The binary value of decimal %d is ",decimal);
//
//	while(decimal != 0) {
//		bin[x]=decimal%2;
//		decimal = decimal/2;
//		x++;
//		}
//  	
//	for(y=x-1;y>=0;y--) {
//		printf("%d",bin[y]);
//	}
//
//	
//	return 0;
//}
//


































































































//
