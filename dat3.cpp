//#include<stdio.h>
//#include<stdlib.h>
//#include<conio.h> 
//
////symbolic constant
//int main() {
// 
//char arr[40];
//char name[40];
//char nick[30];
//	
//	
////printf("Enter your name\n");
////scanf("%s",&arr);
////printf("Enter your name\n");
////scanf("%[^\n]",&name);
//	
//	
//printf("Enter your name\n");
//gets(nick);
//
//
////printf("your name is %s \n",arr);
////printf("your name is %s \n",name);	
//printf("your name is %s \n",nick);
//
//	
//	getche();
//	return 0;
//}


/*string compare true or false if true return value 0 */
//#include<stdio.h>  
//#include<stdlib.h>
//#include<string.h>
//
//int main() {
//	char user1[20]="mgmg";
//	char pass1[20]="sisi";
//	char user[20];
//	char pass[20];
//	
//	printf("Enter your name\n");
//	gets(user);
//	printf("Enter user password\n");
//    scanf("%[^\n]",&pass);
//    
//    
//    int result=strcmp(user1,user);
//	int result1=strcmp(pass1,pass);
//	
//	
//	if(result == 0 && result1==0) {
//		printf("log in success\n");
//	}else{
//		printf("log in fail and try again");
//	}
//	
//	return 0;
//}

/* char check alphabet ascii value
decimal A value start 65 Z value end 90
decimal a value start 97 z value end 122
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>



int main() {
	char name;
	printf("Enter a world alpha\n");
	scanf("%c",&name);
	
//	if( (name>='A' && name<='Z') ||   (name>='a' && name<='z')   )
//	 {
//	 	printf("this %c is alphabet\n",name);
//	 }else{
//	 	printf("This is not a alphabet\n");
//	 }
	 int small,big;
	 
	small =   (name=='a' || name=='e' || name =='i' || name=='o' || name=='u');
    big   =   (name=='A' || name=='E' || name =='I' || name=='O' || name=='U');
    
    
    if(small || big ) {
    	printf("This is a vowel");
	}else{
		printf("This is not a vowel");
	}
	 
	 
	return 0;
}





















































































































































