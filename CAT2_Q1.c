//CAT 2 SECTIO 2 QUESTION ONE
/*
AUTHOR: ANTONY GICHOHI MUCHANGI
DATE: 6/11/2024
REG NO: CT101/G/21609/24
*/

#include <stdio.h>
#include <string.h>

struct employee {
	char name[25];
	int id;
	char department[25];
	double salary;
	char email[50];
	
};

int main(){
	
	struct employee empl = {
		.name = "John Doe",
		.id = 12345,
		.department = "Human Resources",
		.salary = 55000.50,
		.email = "john.doe@company.com"
	};
	
	printf("Below is the Employee Info\n");
	printf("NAME: %s\n", empl.name);
	printf("ID NO: %d\n", empl.id);
	printf("DEPARTMENT: %s\n", empl.department);
	printf("SALARLY: %.2lf\n", empl.salary);
	printf("EMAIL: %s\n", empl.email);
	
	return 0;
	
}