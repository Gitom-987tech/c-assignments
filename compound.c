//program to find compound intrest
/*
Author:ANTONY GICHOHI 
Date:23/09/2024
Reg No:CT101/G/21609/24
*/
#include <stdio.h> //processor directives scanf(), printf()
int main()
{
	int time, one;
	int compound;
	float rate;
	double amount, total;
	
	printf("Enter time\n: ");
	printf("Enter compound\n: ");
	printf("Enter rate\n: ");
	printf("Enter amount \n: ");
	printf("Enter Total\n: ");
	
	scanf("%d", &time);
	scanf("%d", &compound);
	scanf("%f", &rate);
	scanf("%lf", &amount);
	scanf("%lf", &total);
	
	printf("\nYour entered\n");
	printf("integer: %d\n", time);
	printf("interger: %d\n", compound);
	printf("float: %.2f\n", rate);
	printf("double: %.3lf\n", amount);
	printf("double: %.2lf\n", total);
	return 0;
	
	
}