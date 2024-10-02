//program on how to use if,else and if else
/*
AUTHOR:ANTONY GICHOHI
DATE:27/09/2024
REG NO:CT101/G/21609/24
*/
#include <stdio.h> //processor directives printf(), scanf()

int main() {
int age;
int income;


printf("Enter your age\n");
printf("Enter your income\n");

scanf("%d", &age);
scanf("%d", &income);


printf("\nYour entered %d\n");
printf("Age: %d\n", age);
printf("Income: %d\n", income);


if (age >= 21 ){
	printf("Congratulation you qualify for a loan");
	
 if ( income < 21000) {
		printf("Unfortunately,we are  unable to offer you a loan at this time.");
	}
}
	else {
		printf("Unfortunately,we are  unable to offer you a loan at this time.");
		
	} 
	
	
	return 0;


	
	
}
