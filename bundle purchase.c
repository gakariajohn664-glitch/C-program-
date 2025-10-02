/*
Name:Boro John Gakaria
Reg:CT100/G/26190/25
Dwscription:Program to display the cos of bundle
*/
#include<stdio.h>


int main(int argc, char *argv[])
{
	int bundle;
	int cost;
	int choice;
	
	printf("Enter the bundle");
	printf("Enter the cost");
	printf("\n1.\t100MB\t50\n");
	printf("2.\t500MB\t200\n");
	printf("3.\t1GB\t350\n");
	printf("4.\t2GB\t600\n");
	printf("Enter your choice 1-4");
	scanf("%d, & choice");
	//switch
	switch(choice)
	{
		
	case 1:
	printf("you selected 100MBat 50kes\n");
	break;
	case 2:
	printf("You selected 500MB at kes.200\n");
   break;
	case 3:
	printf("You selected 1GB at kes.350\n");
	break;
	case 4:
	printf("You selected 2GB at kes.600\n");
	break;
	Default:
	printf("Invalid choice\n");
	}
	
	
	
}