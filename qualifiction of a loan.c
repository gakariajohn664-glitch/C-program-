/*
Name:John Gakaria
Reg:CT100/G/26190/25
Description:input age and the income
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
int age;
int income;

printf("What is your age?");
scanf("%d",&age);

printf("Enter the income");
scanf("%lf",&income);

//check the qualification
if(age>=21 & income>=21000)
{
printf("congratulation you qualify for a loan");
}
else
{
printf("unfortunately we are unable to offer your loan at this time");
}
return 0;
	
}