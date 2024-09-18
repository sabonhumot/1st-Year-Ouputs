#include <stdio.h>

int main() {
	
	int products, price, quan;
	
	printf("Enter no of products: ");
	scanf("%d", &products);
	
	printf("\n-----------------------");
	
	int x, prof = 0, items = 0, totalProf = 0, totalPrice = 0;
	
	
	for(x = 1; x <= products; x++) {
		printf("\n(Product %d Details)", x);
		
		printf("\nPrice: ");
		scanf("%d", &price);
		
		printf("Quantity: ");
		scanf("%d", &quan);
		
	prof = price * quan;
	totalProf += prof;
	
	totalPrice += price;
	
	
	items += quan;
	}
	
	printf("\n-----------------------");
		
	printf("\nTotal Expected Profit = %d", totalProf);
	printf("\nItems Count = %d", items);
	
	double aveP = (double)totalPrice / (double)products;
	
	printf("\nAverage Price = %.2lf", aveP);
	
	
	
	
	
	
	return 0;
}
