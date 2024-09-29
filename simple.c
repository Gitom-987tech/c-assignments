//program of simple intrest
/*
Author: Antony Gichohi
Dte: 22/09/2024
Reg No;CT101/G/21609/24
*/

#include <stdio.h> //preprocessor directive scanf(), printf()
int main () {
	
	int time;
	float rate;
	double amount;
	double simpleintrest;
	
	
	
	printf("Enter time\n: ");
	printf("Enter rate\n: ");
	printf("Enter amount\n: ");
	printf("Enter simple intrest\n: ");
	//calculate simple intrest
	simpleintrest = (amount * time * rate)/100;
	
	
	scanf("%d", &time);
	scanf("%f", &rate);
	scanf("%lf", &amount);
	scanf("%lf", &simpleintrest);
	
	
	
	printf("\nYou entered\n");
	printf("integer: %d\n", time);
	printf("float: %.2f\n", rate);
	printf("double: %.2lf\n", amount);
	printf("simple intrest is: %.2lf", simpleintrest);
	
	return 0;
	
	
	
}