/*
Name:Boro John Gakaria
Reg CT100/G/26190/25
Description:program to withdraw money
*/
#include<stdio.h>


int main ()
{
int Remaining_balance;
int withdraw_amount;
int Balance=1000;

while(Balance>0)
{
printf("Enter the withdraw_amount");
scanf("%d",&withdraw_amount);

Remaining_balance=Balance-=withdraw_amount;

printf("Remaining_balance :%2d\n", Remaining_balance);
}
printf("insufficient balance\n");


return 0;
	}