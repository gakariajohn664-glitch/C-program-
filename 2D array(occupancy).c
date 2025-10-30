/*
Name:Boro john Gakaria
Reg:CT100/G/26190/25
Description:2D array to calculate room occupation
*/
#include<stdio.h>

int main(int argc, char *argv[])
{
	int i;
	int j;
	int occupancy[5][10]={
		{20,30,54,25,85,69,23,58,12,36},
		{30,58,45,25,36,95,25,85,66,12},
		{85,89,47,25,36,85,14,23,85,66},
		{25,65,85,96,85,12,75,3,85,21},
		{85,96,87,25,74,33,12,87,42,25}
	};
	for(i=0;i<5;i++)
	for (j=0;j<10;j++){
	printf("%d\n",occupancy[i][j]);}
	
}