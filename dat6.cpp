/*conversion binary to octal*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>



int main() {
int hexa[100];
int binary=0 ;
int remainder=0;
int i=1;
int decimal=0;
int x=0;
int y=0;

printf("Enter a binary number\n");
scanf("%d",&binary);

while(binary != 0 ) {
	remainder=binary%10;
	decimal =decimal+(remainder * i);
	i=i*2;
	binary=binary/10;
}	
	
	printf("decimal number is %d\n",decimal);
	printf("__________________________________________\n\n");
	
	while(decimal != 0) {
		hexa[x] = decimal%8;
		decimal = decimal/8;
		x++;
	}
	
	printf("octal number is ");
	for(y=x-1;y>=0;y--) {
		
		printf("%d",hexa[y]);
        
	}
	
	
	
	
	
	
	return 0;
}
