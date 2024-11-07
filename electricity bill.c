#include <stdio.h>
int main ()
{
	int customerID;
	int units;
	char name1[10];
	char name2[10];
	double unitsConsumed;
	float charge;
	double totalBill;
	
	
	printf("Enter Your Customer ID: ");
	scanf("%d", &customerID);
	
	printf("Enter your Name: ");
	scanf("%s%s", name1, name2);
	
	printf("Enter unit consumed: ");
	scanf("%lf", &unitsConsumed);
	
	
	
	if (units <= 199) {
		charge = units * 1.20;
	}
	
	else if (units >= 200 && units < 400) {
		charge = units * 1.50;
	}

	else if (units >=400 && units < 600) { charge = units * 1.80;
	}
	else { units > 600, charge = units * 2.00;
	}
	
	
	//calculate bill
	totalBill = charge * unitsConsumed;
	printf("\n--electricity bill--\n");
	printf("Name %s\n%s\n", name1, name2);
	printf("Customers ID %d\n", customerID);
	printf("Units used %lf\n", unitsConsumed);
	printf("Total amount to pay ksh. %.3f\n", totalBill);
	
		//surcharge
	if (totalBill > 400) { charge += charge * 0.15;
	}
	else if (totalBill < 100 ) {
		printf("sorry bill below required amount");
	};
	
	
	return 0;
}