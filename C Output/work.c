#include <stdio.h>

int main() {
	
	printf("Ticketing Rates");
	printf("\n---------------------");
	printf("\n| 1. Economic - 250 |");
	printf("\n| 2. Business - 500 |");
	printf("\n_____________________");
	
	int distance, class, totalFare;
	
	printf("\nEnter distance: ");
	scanf("%d", &distance);
	
	printf("Enter class: ");
	scanf("%d", &class);

	switch(class){
		case 1:
			totalFare = distance * 250;
			printf("Total Fare = P%d", totalFare);
				if(distance >= 1000){
					double discount = (double)totalFare * 0.10;
					totalFare -= discount;
					printf("\nTotal Discount = P%.2lf", discount);
					printf("\nTotal Fare with Discount = P%.2lf", (double)totalFare);
				}
		break;
		case 2:
			totalFare = distance * 500;
			printf("Total Fare = P%d", totalFare);
				if(distance >= 1000){
					double discount = (double)totalFare * 0.10;
					totalFare -= discount;
					printf("\nTotal Discount = P%.2lf", discount);
					printf("\nTotal Fare with Discount = P%.2lf", (double)totalFare);
				}
		break;	
		default:
		printf("Invalid Selection.");	
	}	
	
	
	return 0;
}
