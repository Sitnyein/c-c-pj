/*jump search
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int jumpsearch(int nums[],int arrsize,int key)  {
	int start=0;
	int jumpsize= sqrt(arrsize);
	
	
	while(nums[jumpsize] <= key && jumpsize<arrsize) {
		start= jumpsize;//for linear search 
		jumpsize += sqrt(arrsize);
		
		if(jumpsize > arrsize -1) {
			jumpsize = arrsize;
			
		}
//		else if(nums[jumpsize] == key) {
//			return jumpsize;
//		}
		
		
	}
	
	for(int i=start; i<jumpsize;i++) {
		if(nums[i] == key ) {
			return i;
		}
	}
	
	
	return -1;
	
}

int main() {
		int nums[] = {10,11,12,13,14,15,16,17,18,19,20};
	int key=0;
	
	printf("Enter a number to find\t");
	scanf("%d",&key);
	
	int arrsize=sizeof(nums)/sizeof(nums[0]);
	
		int foundindex = jumpsearch(nums, arrsize, key);
	
		if(foundindex != -1) {
			printf("we found data index %d is %d",foundindex,nums[foundindex]);
		} else{
			printf("we found not data index %d",foundindex);
		}

	return 0;
}
