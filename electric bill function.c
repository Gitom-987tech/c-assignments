/*
AUTHOR : ANTONY GICHOHI MUCHANGI
REG NO : CT101/G/21609/24
DATE:14/10/2024
*/



#include <stdio.h> //preprocessor direcctives scanf(), printf()
//function to calculate electricity bill
	double totalBill;
	float calculate_electricity_bill (int units) {
		float charge
	};
	
		if (units <= 199) {
		charge = units * 1.20;
	};
	
	else if (units >= 200 && units < 400) {
		charge = units * 1.50;
	}
	else if (units >=400 && units < 600) { charge = units * 1.80;
	}
	else { units > 600, charge = units * 2.00;
	}
	//surcharge
	if (totalBill > 400) { charge += charge * 0.15;
	}
	else if (totalBill <= 99 ) {
		printf("sorry bill below required amount");
	}
	return charge;	
}

 






int main ()
{
	int customerID;
	int units;
	char name1[10];
	char name2[10];
	double unitsConsumed;
	

	
	
	printf("Enter Your Customer ID: ");
	scanf("%d", &customerID);
	
	printf("Enter your Name: ");
	scanf("%s%s", name1, name2);
	
	printf("Enter unit consumed: ");
	scanf("%lf", &unitsConsumed);
	
	
	

	
	//calculate bill
	totalBill = calculate_electricity_bill (unitsConsumed) ;
	printf("\n--electricity bill--\n");
	printf("Name %s\n%s\n", name1, name2);
	printf("Customers ID %d\n", customerID);
	printf("Units used %lf\n", unitsConsumed);
	printf("Total amount to pay ksh. %.3f\n", totalBill);
	
	
	
	
	return 0;
}