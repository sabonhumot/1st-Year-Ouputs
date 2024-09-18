#include <stdio.h>

int main () {
	
	int people;
	
	do {
		printf("Enter no. of People: ");
		scanf("%d", &people);
	
		while(people < 10) {
			printf("Maximum is 10, Try Again: ");
			scanf("%d", &people);
		}
	}
	
	
	return 0;
}
