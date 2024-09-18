#include <stdio.h>

int main () {
	
	int n1, n2;
	
	printf("Enter num1: ");
	scanf("%d", &n1);
	
	printf("Enter num2: ");
	scanf("%d", &n2);
	
	int x;
	
	for(x = 1; x <= n2; x++){
		int product = n1 * x;
		printf("\n%d x %d = %d", n1, x, product);
		
		
		
	}
	

	return 0;
}
