/*linear search sketch*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//
int linearsearch(int nums[],int arrsize,int key) {
int i=0;
for(i=0;i<arrsize;i++) {
	if(nums[i] == key) {
		return i;
	}
}
		

	return -1;
}

int main() {
	int nums[] = {2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42};
	int key=0;
	
	printf("Enter a number to find\t");
	scanf("%d",&key);
	
	int arrsize=sizeof(nums)/sizeof(nums[0]);

	
	int foundindex = linearsearch(nums, arrsize, key);
	
		if(foundindex != -1) {
			printf("we found data index %d is %d",foundindex,nums[foundindex]);
		} else{
			printf("we found not data index %d",foundindex);
		}

	return 0;
}
