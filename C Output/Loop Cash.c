#include <stdio.h>

int main () {
	
	int totalBill, person;
	
	printf("Enter total bill: ");
	scanf("%d", &totalBill);
	
	printf("Enter no of person: ");
	scanf("%d", &person);
	
	int totalBillpP = totalBill / person;
	
	printf("\nTotal Bill for Each Person = %d", totalBillpP); 
	
	printf("\n------------------------------------------");
	
	int x, totalCashR = 0;
	
	for(x = 1; x <= person; x++){
		int cashPp;
		printf("\nEnter cash of Person %d: ", x);
		scanf("%d", &cashPp);
		
			while(cashPp < totalBillpP){
				printf("Insufficient Amount, Enter Again: ");
				scanf("%d", &cashPp);
			}
	totalCashR = totalCashR + cashPp;
	}
	
	printf("\n-------------------------------------------");
	
	printf("\nTotal Cash Received = %d", totalCashR);
	
	int totalChange = totalCashR - totalBill;
	
	printf("\nTotal Change = %d", totalChange);
		
	return 0;
}
