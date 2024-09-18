#include <stdio.h>
#include <string.h>

int main () {
	
	int med, sold[10], x, itemsSold = 0;
	double price[10], sales, totalProfit = 0;
	char name[15][100], response[10];
	
	do {
	printf("Enter no. of Medicine: ");
	scanf("%d", &med);
	printf("\n");
	
		while (med > 10) {
			printf("Maximum limit is 10, Try Again: ");
			scanf("%d", &med);
		}
	
	printf("\n");
	
		for(x = 0;x < med; x++) {
			printf("Details of Medicine %d:", x+1);
			printf("\n \tName: ");
			scanf("%s", &name[x]);
			
			printf("\tPrice: ");
			scanf("%lf", &price[x]);
			
			printf("\tSold: ");
			scanf("%d", &sold[x]);
			
			itemsSold += sold[x];
			
			sales = price[x] * (double)sold[x];
			totalProfit += sales;
		}
		
		printf("\n----------------------------------------------------------------");
		printf("\nSales List:");
		printf("\n----------------------------------------------------------------");

		printf("\nNo. \t | Name \t | Price \t | Sold \t | Sales");
		printf("\n----------------------------------------------------------------");
			for(x = 0; x < med; x++) {
		printf("\n%d \t | %s \t | %.2lf \t | %d \t\t | %.2lf", x + 1, name[x], price[x], sold[x], price[x] * (double)sold[x]);
	}
		printf("\n----------------------------------------------------------------");
		
		printf("\nNo. of Items Sold: %d", itemsSold);
		printf("\nTotal Profit: %.2lf", totalProfit);
		printf("\nProduct Count: %d", med);
		
		printf("\n\nMake another transaction? (yes/no):  ");
		scanf("%s", &response);
			if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0) {
			}
			else{
				x = 0;
			}
		
	}
	while (x); {
		printf("Thank You!");
	}	
	return 0;
}
