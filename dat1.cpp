//#include<stdio.h>
//#include<stdlib.h>
//# define MGMG 10 //symbolic constant
//int main() {
//	printf("Hello world\n");
//	int arr[MGMG]={1,2,3,4,5,6};
//	for(int i=0;i<MGMG;i++) {
//		printf("number is %d\n",arr[i]);
//	}
//	printf("%d",arr[5]);
//	return 0;
//}


//
#include<stdio.h>
#include<stdlib.h>
#define SIZE  6

int main() {
	int arr[SIZE];
	for(int i=0;i<SIZE;i++) {
		arr[i]=(2*2+i);
		
	}
	for(int j=0;j<SIZE;j++) {
		printf("the array index is %4d   array value is %4d\n", j, arr[j] );
	}
	return 0;
}
