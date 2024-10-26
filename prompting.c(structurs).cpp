/*
NAME : ANTONY GICHOHI MUCHANGI
DATE : 23/10/2024
REG N0 : CT101/G/21609/24
*/
//PROMPTING USER(STRUCTURS)

#include <stdio.h>
#include <string.h>

struct book {
	char title[30];
	char author[30];
	int yearOfPublication;
	char isbn[16];
	float price;
	
	
} book1;


int main() //preprocessor printf(), scanf()
 {
	printf("Enter Books Title:\n ");
	scanf("%s\n", &book1.title);
	
	
	
	printf("Enter Books Author\n: ");
	scanf("%s\n", &book1.author);
	
	
	printf("Enter Year of Publication\n: ");
	scanf("%d\n", &book1.yearOfPublication);
	
	
	printf("Enter ISBN \n: ");
	scanf("%s\n", &book1.isbn);
	
	
	printf("Enter Price\n: ");
	scanf("%f\n", &book1.price);
	
	
	
	
	printf("Title\n : ", book1.title);
	printf("Author\n : ", book1.author);
	printf("Year of Publication\n : ", book1.yearOfPublication);
	printf("ISBN:\n ", book1.isbn);
	printf("Price \n: ", book1.price);
	return 0;
	
	
	
}
