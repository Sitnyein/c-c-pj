/*binary serch CPP sketch 
sorted low to high or high to low*/
//#include<stdio.h>
//#include<stdlib.h>
//#include<conio.h>
//
//int binarysearch(int nums[],int arrsize,int key) {
//	
//	int low=0;
//	int high=arrsize-1;
//
//	
//	while(low <= high) {
//		
//		int mid = (low+high)/2;
//		
//		if(key == nums[mid]) {
//			return mid;
//		}
//		if( key<nums[mid] ) {
//			high =mid-1;
//		
//		}
//	    if( key >nums[mid]) {
//	    	low =mid+1;
//		}
//		
//	}
//	return -1;
//}
//
//
//int main() {
//	int nums[] = {910,811,712,613,514,415,316,217,118,99,70};
//	int key=0;
//	
//	printf("Enter a number to find\t");
//	scanf("%d",&key);
//	
//	int arrsize=sizeof(nums)/sizeof(nums[0]);
//
//	
//	int foundindex = binarysearch(nums, arrsize, key);
//	
//		printf("we found data index %d",foundindex);
//
//	return 0;
//}


//{2,4,6,8,10,12,14,16,18,20,22};

























//
//#include <stdio.h>  
//int binarySearch(int a[], int beg, int end, int val)    
//{    
//    int mid;    
//    if(end >= beg)     
//    {        mid = (beg + end)/2;    
///* if the item to be searched is present at middle */  
//        if(a[mid] == val)    
//        {                 
//            return mid+1;    
//        }    
//            /* if the item to be searched is smaller than middle, then it can only be in left subarray */  
//        else if(a[mid] < val)     
//        {  
//            return binarySearch(a, mid+1, end, val);    
//        }    
//            /* if the item to be searched is greater than middle, then it can only be in right subarray */  
//        else     
//        {  
//            return binarySearch(a, beg, mid-1, val);    
//        }          
//    }    
//    return -1;     
//}   
//int main() {  
//  int a[] = {11, 14, 25, 30, 40, 41, 52, 57, 70}; // given array  
//  int val = 25; // value to be searched  
//  int n = sizeof(a) / sizeof(a[0]); // size of array  
//  int res = binarySearch(a, 0, n-1, val); // Store result  
//  printf("The elements of the array are - ");  
//  for (int i = 0; i < n; i++)  
//  printf("%d ", a[i]);   
//  printf("\nElement to be searched is - %d", val);  
//  if (res == -1)  
//  printf("\nElement is not present in the array");  
//  else  
//  printf("\nElement is present at %d position of array", res);  
//  return 0;  
//}  








//#include <stdio.h>
//int iterativeBinarySearch(int array[], int start_index, int end_index, int element){
//	
//   while (start_index <= end_index){
//      int middle = start_index + (end_index- start_index )/2;
//      if (array[middle] == element)
//         return middle;
//      if (array[middle] < element)
//         start_index = middle + 1;
//      else
//         end_index = middle - 1;
//   }
//   
//   return -1;
//}
//int main(void){
//   int array[] = {1, 4, 7, 9, 16, 56, 70};
//   int n = 7;
//   int element = 16;
//   int found_index = iterativeBinarySearch(array, 0, n-1, element);
//   
//   if(found_index == -1 ) {
//      printf("Element not found in the array ");
//   }
//   else {
//      printf("Element found at index : %d",found_index);
//   }
//   return 0;
//}










///*binary search cpp recursive*/
#include<stdio.h>
#include<iostream>

using namespace std;

int recursearch (int arr[],int low,int high ,int key) {
  if(low>high) {
  	return -1;
  }
	
	
		
	int mid =(low+high)/2;
	
	if(key  == arr[mid]) {
		return mid;
	}
	else if(key<arr[mid]) {
		return recursearch(arr,low,mid-1,key); 
	} 
	else if(key>arr[mid]) {
		return recursearch(arr,mid+1,high,key);
	}
	
	

	
	return -1;
	
}

int main() {
	
	int barry[]={2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42};
	int key=0;
	cout<<"Enter a number for key "<<endl;
	cin>>key;
//	printf("Enter a key of number 0 and 10 betweeen\n");
//	scanf("%d",&key);
	//printf("key is %d\n",key);
	int barrsize = sizeof(barry)/sizeof(barry[0]);
	
//	printf("array size is %d",barrsize);
   int low =0;
   int high =barrsize-1;
int num = 0;
num =	recursearch(barry,low,high,key); 
	cout<<"we found key "<<key<< " of index is "<<num;
//	printf("we found key %d  of index is %d",key,num);
	
	return 0; }


























































































