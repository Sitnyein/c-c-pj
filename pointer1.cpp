/*pointer introduction
    if pointer value assign or show (*) should write;don't write if gonna happen error
*/
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<conio.h> 
//
//int main() {
//	int a=23;
//	int *b=&a;
//	int **c=&b;
//	
//	printf(" address  of a is %d\n",&a);
//	printf(" address of b  is %d\n",b);
//	printf("address of c is %d\n",*c);
//	printf("valude of c is %d",**c);
//	
//	
//	**c=30;
//  	printf("valude of c is %d\n",**c);
//  	printf("valude of b is %d\n",*b);
//  	printf("valude of a is %d\n",a);
//  	printf("address of c is %d\n",*c);
//  	printf("address of c is %d",c);	
//
//    return 0;	
//}


/*pointer introduction*/
//#include<stdio.h>
//#include<stdlib.h>
//#include<conio.h> 
//
//int main() {
//	printf("hello world");
//	int a =10;
//	int *pb;
//		
//	printf(" address  of a is %d\n",&a);
//	printf(" value of a  is %d\n",a);
//	
//	pb=&a;
//	
//	printf(" address  of pb is %d\n",pb);
//	printf(" value of pb  is %d\n",*pb);
//	
//	a=20;
//	printf(" address  of pb is %d\n",pb);
//	printf(" value of a  is %d\n",*pb);
//	
//	*pb=30; // if pointer value assign or show (*) should write;don't write if gonna happen error
//	printf(" address  of a is %d\n",&a);
//	printf(" value of a  is %d\n",a);
//	
//	return 0;
//}




/*pointer array lesson 3

*/
//#include<stdio.h>
//#include<stdlib.h>
//#include<conio.h> 
//int main() {
//	int arr[5] = {1,2,3,4,5,};
//	int *pone;
//	pone=arr;
//	int *ptwo;
//	
//	printf("address of arr is %d\n",pone);
//	//address of arr is equal to &arr[0]
//	ptwo = &arr[0];
//	
//	printf("address of arr is %d\n",ptwo);
//	
//	
//	
//	return 0;
//}


/*pointer char array lesson 5*/
//#include<stdio.h>
//#include<stdlib.h>
//#include<conio.h>
//
//
//int main() {
//	
//	char *str = "mg mg";
//	printf("my name is %s\n",str);
//	printf("char pointer size on my processor %d\n",sizeof(str));
//	char *name[3] = {"win","mg","su"}; //char *name[] is called  char pointer array
//	
//	
//	for(int i=0;i<3;i++) {
//		printf("her name is %s\n",name[i]);
//	}
//	
//	getch();
//	return 0;
//}




/*pointer Arithmetic pointer lesson 6*/


//#include<stdio.h>
//#include<stdlib.h>
//#include<conio.h>
//
//int main() {
//	
//	int *p1;
//	int *p2;
//	int *p3=0;
//	int a = 20;
//	int b = 30;
//	int c =0;
//	int d=0;
//	
//	p1 = &a;
//	p2 = &b;
//	
//	printf("address of p1 is %d\n",p1);
//	printf("address of p2 is %d\n",p2);
//	
//	c=*p1+*p2;
//	printf("value of c is %d\n",c);
//	
//	d=p1-p2;
//	p3=&d;
//	printf("p3 = p1 - p2 = %d\n",d);
//	
//	p1++;
//	printf("p1 ++ = %d\n",p1);
//	
//	p2--;
//	printf("p2 -- = %d\n",p2);
//	
//	getch();
//	return 0;
//}


/*pass by reference pointer lesson 7*/
//#include<stdio.h>
//#include<stdlib.h>
//#include<conio.h>
//
//void fun(int *ptr) {
//	*ptr=30000000;
//}
//
//int main() {
//	
//
//	int y=20;
//	
//	fun(&y);
//	printf("y exchange value is %d\n",y);
//	
//	
//	printf("pass by reference\n");
//	getch();
//	return 0;
//}

/*swap using pointer
pointer lesson 8*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void fun(int *pa,int *pb) {
	
	int temp =0;
	temp =  *pb;
	 *pb =  *pa;
	 *pa = temp;
}


int main() {
	int a= 10;
	int b= 300;
	
	printf("a original value is %d\n",a);
	printf("b oringinal value is %d\n",b);
	
	
	fun(&a,&b);
	printf("a exchange value is %d\n",a);
	printf("b exchange value is %d\n",b);
	getch();
	return 0;
}














































































































