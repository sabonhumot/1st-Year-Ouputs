#include <stdio.h>

double totalProfit();
double totalLoss();
double totalExpectedProfit();

int main () {
	
	int nop, ppp, nops, nori;
	
	printf("Enter number of products: ");
	scanf("%d", &nop);
	
	printf("Enter price per product: ");
	scanf("%d", &ppp);
	
	printf("Enter number of products sold: ");
	scanf("%d", &nops);
	
	printf("Enter number of remaining items: ");
	scanf("%d", &nori);
	
	printf("______________________________________");
	
	printf("\nTotal Profit = %.2lf", totalProfit(ppp, nops));
	printf("\nTotal Loss = %.2lf", totalLoss(ppp, nops, nori));
	printf("\n\nTotal Expected Profit = %.2lf", totalExpectedProfit(nop, ppp));
	
	return 0;
}

double totalProfit (int ppp, int nops) {
	
	double tp = (double)ppp * (double)nops;
	
	return tp;
}

double totalLoss (int ppp, int nops, int nori) {
	
	double loss = ((double)nori - (double)nops) * (double)ppp;
	
	return loss;	
}

double totalExpectedProfit (int nop, int ppp) {
	
	double tep = (double)nop * (double)ppp;
	
	return tep;	
}
