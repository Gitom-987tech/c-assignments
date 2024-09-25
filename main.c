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
	double amount, simpleintrest;
	char string;
	
	
	printf("Enter time\n: ");
	printf("Enter rate\n: ");
	printf("Enter amount\n: ");
	printf("Enter simple intrest\n: ");
	printf("Enter string\n: ");
	
	scanf("%d", &time);
	scanf("%f", &rate);
	scanf("%lf", &amount);
	scanf("%lf", &simpleintrest);
	scanf("%s", string);
	
	
	printf("\nYou entered\n");
	printf("integer: %d\n", time);
	printf("float: %.2f\n", rate);
	printf("double: %.2lf\n", amount);
	printf("double: %.2lf\n", simpleintrest);
	printf("string: %s\n", string);
	return 0;
	
	
	
}