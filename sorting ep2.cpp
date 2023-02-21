

//insertionsort





#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void insertion_sort(int arr[],int arrsize) {
	int i; //for outer loop
	int j; // for index number 
	int temp; //to store data tempoaray
	
	for(i=1;i<arrsize;i++) { //outer loop
		j=i;
		
	while(j>0 && arr[j-1] >arr[j]) {
		temp= arr[j];
		arr[j]= arr[j-1];
		arr[j-1]= temp;
		j--;
	}	
		
		
	}
	
	printf("sorted data\n");
	for(i=0;i<arrsize;i++) {
		printf("%d \t",arr[i]);
	}
	
	
	
	
	
	}

int main() {
	printf("Hello world this is insertion sort\n");
	int arr[]={22,31,1,4,2,5,7,33,66,3,};
	int arrsize = sizeof(arr)/sizeof(arr[0]);
	insertion_sort(arr, arrsize);
	return 0;
}
