/*structure unit 5*/
//#include<stdio.h>
//#include<stdlib.h>
//
//struct collect{
//	int fvalue;
//	char cName;
//	double age;
//}str_name;
//
//int main() {
//	printf("Hello world\n");
//	
//	struct collect name;
//	name.fvalue = 38;
//	name.cName = 'a';
//	name.age =20.3;
//	
//	str_name.age =90;
//	str_name.fvalue=90;
//	
//	printf("strname.fvalue is %d\n",str_name.fvalue);
//	printf("strname.fage is %f\n",str_name.age);
//	
//	printf("name.fvalue is %d\n",name.fvalue);
//	printf("name.cName is %c\n",name.cName);
//	printf("name.fvalue is %f\n",name.age);
//	
//	return 0;
//}

/*struct pointer lesson 2*/
//#include<stdio.h>
//#include<stdlib.h>
//
//
//struct collect{
//   char *student_name;
//   int student_id;
//   int student_age;
//}std_data;
//
//int main() {
//	 
//	 char string[20];
//	 char *str=string;
//	 printf("Enter your name \t");
//	 gets(str);
//	 std_data.student_name = str;
//	 printf("struct collect student name is %s",std_data.student_name);
//	
//	
//	
//	
//	return 0;
//}



/*struct many data pointer lesson 3 */
#include<stdio.h>
#include<stdlib.h>

struct student{
	
   char name[20];
   int roll;
   int  mark;
   
}stu[5];





int main() {
	
	int i=0;
	
	
	for(i=0;i<5;i++) {
   printf("your roll is %d \n",i+1);	
   stu[i].roll = i+1;


	printf("Enter your name\t");
	scanf("%s",stu[i].name); 
		
	printf("Enter your mark\t");
	scanf("%d",&stu[i].mark);
	
	}
	
printf("\n ++++++++++++++++++++=\n");
	
	for(i=0;i<5;i++) {
	    printf("student roll is  %d \n",stu[i].roll);
		printf("stu  name is %s\n",stu[i].name);
	    printf("stu  mark  is %d\n",stu[i].mark);
	    printf("_______________________________\n");
	   
	}
	
	return 0;
}


























































































//





















