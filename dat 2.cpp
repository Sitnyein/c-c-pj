//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#define DATA 30
//#define RAND 7
//
//int main() {
//	time_t tm;
//	srand(time(&tm));
//	int data_arr[DATA];
//	int frequencyarr[RAND]={0};
//	
//	for(int i=0;i<DATA;i++) {
//		data_arr[i]= (rand()%5)+1 ;
//	}
//	
//	for(int j=0;j<DATA;j++) {
//		printf(" data %1d",data_arr[j]);
//		++frequencyarr[data_arr[j]];
//	}
//	
//	for(int z=0;z<RAND;z++) {
//		printf("frequency of %d is %d\n",z,frequencyarr[z]);
//	}
//	
//		for(int a=1;a<=RAND;a++) {
//		printf("frequency of %d is %d\n",a,frequencyarr[a]);
//	}
//	
//	return 0;
//}
//


/* passing to a function
finding average*/

//#include<stdio.h>
//#include<stdlib.h>
//#define AGE 10
//float average(float arr[]);
//int main() {
//	float age[AGE]={0.0};
//	for(int i=0;i<AGE;i++) {
//		printf("Enter your age %d 's age \t",i);
//		scanf("%f",&age[i]);
//	}
//	float result=average(age); //only array name in function call
//	printf("final average age is %f",result);
//	
//
//	return 0;
//}
//	float average(float arr[]) {
//		float sum=0;
//		for(int j=0;j<AGE;j++) {
//			sum+=arr[j];
//		}
//
//  float	total = (sum/AGE);
//	return total;
//	   
//	   
//	}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define ASS 100
/*to find largest of a array
introduction to the algorithm*/

int main() {
   int size=0;
   int sea[ASS] = {0};
   printf("Enter your choice size in 1 between 100 ");
   scanf(" %d",&size);
   
   for(int i=0;i<size;i++) {
   	  printf("Enter a number %d \t", i);
   	  scanf("%d",&sea[i]);
   	  
   }
   printf("***************************************\n");
   for(int a=0;a<size;a++) {
   	printf("index of array is %d = %3d \n",a,sea[a]);
   }
   printf("***************************************\n");
   
   for(int j=1;j<size;j++) {
   	 
      if(sea[0]<sea[j]) {
      	
        int c=sea[0];
      	sea[0]=sea[j];
        sea[j]=c;
	  }
   }
   
   printf("the largest number is %d\n\n",sea[0]);
   printf("***************************************\n");
    for(int b=0;b<size;b++) {
   	printf("index of array is %d = %3d \n",b,sea[b]);
   } 
    getch();
	return 0;
}


























































































