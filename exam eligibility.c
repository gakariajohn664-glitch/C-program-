/*
Name:Boro john Gakaria
reg:CT100/G/26190/25
Description: Program to test exam eligibility
*/
#include<stdio.h>


int main(int argc, char *argv[])
{
	int attendance;
	int marks;
	printf("Enter the attendance\n");
	scanf("%d",&attendance);
	printf("Enter the marks\n");
	scanf("%d,&marks");
	if("marks>=40,&&attendance>=75%")
	{
	printf("Eligible to do exam");
	}
 else
	{
	printf("Not eligible");
	}
	
}