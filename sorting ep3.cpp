//selection sort

#include<stdio.h>
#include<stdlib.h> 



void swap(int arr[], int min ,int j) {
	
	
	int temp = arr[min];
	arr[min]= arr[j];
	arr[j]   = temp;
}

void selection_sort(int arr[],int arrsize) {
int min=0; // declare for variables



 for(int i=0;i<arrsize-1;i++) {
   min=i; 

 for(int j=i+1; j<arrsize; j++) {
  	if(arr[j] < arr[min]) {
  		min = j;
	  }
  	
 }
  swap(arr,min,i);
    
   	
 }


}




int main() {
	printf("selection sort\n");
	
	int arr[]={22,31,1,4,2,5,7,33,66,3,};
	int arrsize = sizeof(arr)/sizeof(arr[0]);
	selection_sort(arr, arrsize);
	
	printf("sorted data\n");
	for(int i=0;i<arrsize;i++) {
		printf("%d \t",arr[i]);
	}
	
	return 0;
}
