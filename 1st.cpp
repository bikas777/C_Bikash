#include<stdio.h>
int main()
{
	int roll_number,age;
	char name[50],address[50],email[50];
	char gender;
	printf("enter your roll number :");
	scanf("%d",&roll_number);
	printf("enter your name :");
	scanf("%s",&name);
	printf("enter your age :");
	scanf("%d",&age);
	printf("enter your email :");
	scanf("%s",&email);
	printf("enter gender :");
	scanf(" %s",&gender);
	printf("enter your address :");
	scanf("%s",&address);
	
	//displaying data
	printf("**************************\n");
	printf("My CV \n");
	printf("Roll number = %d\n",roll_number);
	printf("name = %s\n",name);
	printf("age =%d\n",age);
	printf("email =%s\n",email);
	printf("gender =%s\n",gender);
	printf("address =%s\n",address);
	printf("**************************\n");
	return 0;	

}
