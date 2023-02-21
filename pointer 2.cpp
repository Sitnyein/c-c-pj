/*function return pointer 
pointer lesson 9
code is work not in complier in devc++ if works in codeblocks
so pointer replace another variable int e and return value i use*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int fun(int *c , int *d) ;


int main() {
	int a=20;
	int b=30;
	int e=0;
	
	int *p;
    p = &e;
	
	e=fun(&a,&b);
	printf("pointer address of b is %d\n",&b);
	printf("pointer function return is %d\n",*p);

	getch();
	return 0;
}

int fun(int *c , int *d) {
	if(*c>*d) {
		
		return *c;
	
		
	}else{
		printf("pointer address of d is %d\n",d);
		return *d;
	
	}

}
*/

//pointer lesson 10 don't run because it is explain size of pointer /int void char float size is 4 bytes


/*  Arithmetic memory address  pointer lesson 11
code is right and no run in dev c++ if only run in code block */

//
//#include<stdio.h>
//#include<stdlib.h>
//#include<conio.h>
//
//
//int main() {
//	
//	
//	printf("hello world i am codeblock\n");
//    int arr[5] = {2,8,4,5,6};
//    int *ptr1 = &arr[0]; // *ptr = arr  (same)
//    int *ptr2= ptr1+3;
//
//
//    printf("arrar[3] address is =   %d \n",&arr[3]);
//    printf("arrar[3] value  is =   %d \n",arr[3]);
//
//    printf("first address of ptr1 is = %d\n",ptr1);
//
//    printf("value of *ptr2 = %d\n",*ptr2); //5
//
//
//    printf(" address of ptr2 is = %d\n",ptr2);
//
//  int *ptr3;
//  ptr3= ptr2-ptr1;
//  printf(" address of ptr3 is = %d",ptr3);
//  getch();
//	return 0; 
//}



/*typecasting pointer pointer lesson 12*/

//#include<stdio.h>
//#include<stdlib.h>
//#include<conio.h>
// 
// int main() {
//     printf("typecasting in codeblock\n");
//  int arr[6]={0,1,2,3,4,5};
//  int *ptr1=arr;
//  int *ptr2=arr+5;
//
//  printf("ptr2- ptr1 = %d\n",(ptr2- ptr1));
//
//// printf("number of between two pointer are exchanged as double %d bytes",(double*)ptr2-(double*)ptr1 );
//
// printf("number of between two pointer are exchanged as double %d bytes",(ptr2-ptr1 )*sizeof(int)/sizeof(double) );
//
// getch();
//  return 0;
// }


/*littleEndian and bigEndian //multibyte data types
pointer lesson 13*/

//#include<stdio.h>
//
//int main() {
//	int a =0;
//	char *x ;
//	x=(char*)&a;
//	x[0]= 1; //binary 00000001
//	x[1]=2;
//	x[2]=2;
//	
//	printf("The value is %d",a);
//	return 0;
//}


/*array Treated as pointer
pointer lesson 14
*/

//
//#include<stdio.h>
//#include<stdlib.h>
//#include<conio.h>
//
//
//void fun(int ar[]) {
//	int sz=sizeof(ar)/sizeof(ar[0]);
//	printf("size of ar is %d\n",sz);
//}
//
//
//
//
//
//int main() {
//	int arr[] = {1,2,3,4};
//	int as=sizeof(arr)/sizeof(arr[0]);
//	printf("size of arr no passing function is %d\n",as);
//	fun(arr);
//	return 0;
//	
//}





// C Program to demonstrate that C treats array parameters
// as pointers
#include <stdio.h>

void findSum1(int arr[])
{
	int sum = 0;
	int sz=0;
	sz = sizeof(arr)/sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
		sum = sum + arr[i];
	printf("The sum of the array is: %d\n", sum);
}
//
//void findSum2(int* arr)
//{
//	int sum = 0;
//	for (int i = 0; i < 5; i++)
//		sum = sum + arr[i];
//	printf("\nThe sum of the array is: %d \n", sum);
//}

// Driver code
int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };

	findSum1(arr);
	//findSum2(arr);
	return 0;
}



























































































































































//
