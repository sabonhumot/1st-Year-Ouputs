#include <stdio.h>

int main () {
	
	int num, x;
	char choice;
	
	do {
		printf("\nEnter num: ");
		scanf("%d", &num);
		
			for(x = 1; x <= num; x++) {
				int product = num * x;
				printf("\n%d x %d = %d", num, x, product);
			}	
		
		printf("\n\nDo you want to enter again? (y/n): ");
		scanf(" %c", &choice);	
	}
	while(choice == 'y' || choice == 'Y');
	
	printf("\nThanks!");
	
	return 0;
}
