/*sorting bubble sort lesson 1
low to high 
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void bubble_sort(int arr[],int arrsize) {
	int i;
	int j; // for index number 
	int temp; //temp is for swap data
	
	for(int i=0;i<arrsize;i++) { //outer loop
	 
		for(j=0;j<arrsize-i-1;j++) { //for swap data
           if(arr[j]>arr[j+1]) {
           	temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
		   }			
		}
		
		
	}
	
	printf("sorted data\n");
	for(i=0;i<arrsize;i++) {
		printf("%d \t",arr[i]);
	}
	
	
}






int main() {
	printf("Hello world this is bubble sort \n");
	int arr[]={22,31,1,4,2,5,7,33,66,3,};
	int arrsize = sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr, arrsize);
	
	
	return 0;
}
