/*
Name:Boro john Gakaria
Reg:CT100/G/26190/25
Description:3D array to compute the chain

*/#include<stdio.h>

int main(int argc, char *argv[])
{
	int i;
	int j;
	int k;
	int chain[3][5][10]={
		{10,45,85,25,36},
		{78,96,25,36,84},
		{74,25,96,41,85}
	};
	{
	{80,200,65,950,36};
	{74,25,96,35,85};
	{74,58,25,96,85};
	};
	for(i=0;i<3;i++)
	for (j=0;j<5;j++)
	for (k=0;k<10;k++)
	printf("%d",chain[i][j][k]);
	
	
}