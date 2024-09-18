#include <stdio.h>

int main() {
	
	int pesos, dollar;
	
	printf("Welcome to Currency Converter!");
	printf("\n============================");
	printf("\n|  Current Exchange Rates  |");
	printf("\n|     USD 1 = 50 PHP       |");
	printf("\n============================");
	
	printf("\nEnter the amount in pesos: ");
	scanf("%d", &pesos);
	
	double convert = (double)pesos / 50.00;
	
	printf("Amount in dollars = $%.2lf", convert);
}
