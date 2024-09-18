#include <stdio.h>

int main() {
	
	int con, days;
	
	printf("Electric Consumption Rate");
	printf("\n=============================");
	printf("\n| Up to 100 units: P5/kWh   |");
	printf("\n| 101 to 300 units: P7/kWh  |");
	printf("\n| 301 to 500 units: P10/kWh |");
	printf("\n| Above 500 units: P12/kWh  |");
	printf("\n=============================");
	
	printf("\nConsumption: ");
	scanf("%d", &con);
	
	printf("Days for prompt payment: ");
	scanf("%d", &days);
	
	if(con >= 0 && con <= 100) {
		int totalBill = con * 5;
		
			if(days <= 15){
			printf("\nCost per unit = P%d/kWh", con);
			printf("\nTotal units consumed = %d", con);
			printf("\nTotal bill amount = %d", totalBill);
			
			double discount = (double)totalBill * 0.05;
			totalBill -= discount;
			printf("\nDiscount (5%) = P%.2lf", discount);
			printf("\nFinal bill amount after discount = P%.2lf", (double)totalBill);
		}
			
		
	}
	else if(con >= 101 && con <= 300){
		int totalBill = con * 7;
		
			if(days <= 15){
			printf("\nCost per unit = P%d/kWh", con);
			printf("\nTotal units consumed = %d", con);
			printf("\nTotal bill amount = %d", totalBill);
			
			double discount = (double)totalBill * 0.05;
			totalBill -= discount;
			printf("\nDiscount (5%) = P%.2lf", discount);
			printf("\nFinal bill amount after discount = P%.2lf", (double)totalBill);
	}
}
	else if(con >= 301 && con <= 500){
		int totalBill = con * 10;
		
			if(days <= 15){
			printf("\nCost per unit = P%d/kWh", con);
			printf("\nTotal units consumed = %d", con);
			printf("\nTotal bill amount = %d", totalBill);
			
			double discount = (double)totalBill * 0.05;
			totalBill -= discount;
			printf("\nDiscount (5%) = P%.2lf", discount);
			printf("\nFinal bill amount after discount = P%.2lf", (double)totalBill);
	}
}
	else if(con >= 500){
		int totalBill = con * 12;
		
			if(days <= 15){
			printf("\nCost per unit = P%d/kWh", con);
			printf("\nTotal units consumed = %d", con);
			printf("\nTotal bill amount = %d", totalBill);
			
			double discount = (double)totalBill * 0.05;
			totalBill -= discount;
			printf("\nDiscount (5%) = P%.2lf", discount);
			printf("\nFinal bill amount after discount = P%.2lf", (double)totalBill);
	}
}
	else{
		printf("Invalid Input.");
	}
			
	return 0;
}
