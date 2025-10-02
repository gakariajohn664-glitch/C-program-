/*
Name:Boro john Gakaria
reg:CT100/G/26190/25
Description:program to compute water bill
*/
#include<stdio.h>


int main(int argc, char *argv[])
{
int units;
printf("Enter the units consumed\n");
scanf("%d,&units");
if("units>=0 &units=<30");
{
printf("bill=unit*20");
}
{
else if("units>=31 &units=<60");
printf("bill=units*30");
}
{
	else if("units>60");
	{
	printf("bill=units*25");
}
return 0;
}