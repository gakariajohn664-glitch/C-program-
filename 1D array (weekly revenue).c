/*Name:Boro John Gakaria
Reg:CT100/G/26190/25
Description:Array to calculate the weekly revenue
*/
#include<stdio.h>


int main()
{
	int i;
	int sum;
	float revenue[7]={200,500,655,123,789,345,450};
	for(i=0;i<7;i++)
	{
		printf("%f\n",revenue[i]);
		sum=sum+revenue[i];
	}
	printf("sum=%d",sum);
}