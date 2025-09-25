/*
Name:Boro john Gakaaria
Reg:CT100/G/26190/25
#include<stdio.h>
# pi 3.142857
*/

#include <stdio.h>

int main(){

int radius;
int height;
int volume;
int surface_area;

float pi = 3.142;

printf("Enter the radius of cylider:");
scanf("%d", &radius);

printf("Enter the height of cylider:");
scanf("%d", &height);

// compute the volume
volume = pi*radius*radius*height;
printf("VOLUME=%d",volume);

//compute the surface area
surface_area=2*pi*radius+(2*pi*radius*height);

printf("SURFACE AREA=%d",surface_area);
return 0;


	
	
}