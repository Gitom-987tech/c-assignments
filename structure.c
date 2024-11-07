/*
NAME: ANTONY GICHOHI MUCHANGI
DATE:20/10/2024
REG NO: CT101/G/21609/24
*/
//USE OF STRUCTURES
#include <stdio.h>
#include <string.h>

struct book {
	char title[30] = "Introduction to C programming";
	char author[30] = "John Smith";

	int publication_year = 2022;

	char isbn[13] = "84892684823";
	float price = 49.90;
	
} book1, book2;


int main() {
	/*struct book book1 = {
		.author = "John Smith",
		.title = "Introduction to C prgramming",
		.publication_year = 2022,
		.isbn = "973485834864",
		.price = 49.90
		
	    };*/
	
	          
	printf("AUTHOR: %s\n", book1.author);
	printf("TITLE: %s\n ", book1.title);
	printf("Year of Publication: %d\n", book1.publication_year);
	printf("ISBN: %s\n", book1.isbn);
	printf("Price: %d\n", book1.price);
	
	
	
	return 0;
	
};