//program on else if statement
/*
AUTHOR: ANTONY GICHOHI MUCHANGI
DATE: 01/10/2024
REG NO: CT101/G/21609/24
*/
#include <stdio.h> //preprocessor directives scanf(), printf()
int main() {
	int Book_ID;
	int due_date;
	int Return_Date;
	int days_overdue;
	float finerate;
	float fineamount;
	//calculate days over due
	'days overdue=Return_date - due_date';
	
	printf("Enter Book ID: ");
	scanf("%d", &Book_ID);
	 
	printf("Enter due date: ");
	scanf("%d", &due_date);
	
	printf("Enter Return Date: ");
	scanf("%d", &Return_Date);
	
	if (days_overdue <= 0) {finerate = 0.0;
	}
	
	else if (days_overdue <= 7) { finerate =  20; // $20 per day
	}
		
	
	else if (days_overdue  <= 14) {
		finerate =  50; // $50 per day
	
	}
	if (days_overdue >= 15){
	 finerate =  100; // $100 per day
		
	}
	
	//calculate fine amount
	fineamount = finerate * days_overdue;
	
	printf("\n--- fine calculation ---\n");
	printf("Book ID: %d\n", Book_ID);
	printf("Due Date: %d\n", due_date);
	printf("Return Date: %d", Return_Date);
	printf("Fine Rate: $%.2f per day\n", finerate);
	
	return 0;
}
