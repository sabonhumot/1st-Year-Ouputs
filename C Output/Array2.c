#include <stdio.h>
#include <string.h>

int main () {
	
	int people;
	int age[10];
	char name[10][50];
	int x, sum = 0;
	char response[10];

	
	do {
	printf("Enter no. of people: ");
	scanf("%d", &people);
	printf("\n");
		
		while (people > 10) {
			printf("Maximum limit is 10, Try Again: ");
			scanf("%d", &people);
		}
	
	printf("\n");
		
		for(x = 0; x < people; x++) {
			printf("Enter age %d: ", x+1);
			scanf("%d", &age[x]);
						
			sum += age[x];
		}
	
	printf("Ages in array are:\n");
		for(x = 0; x < people; x++) {
			printf("%d", age[x]);
			if(x < people - 1) {
				printf(", ");
			}
		}										
	
	printf("\n\nTotal Age Average = %.2lf", (double)sum / people);
	
	printf("\n\nMake another transaction? (YES/NO): ");
	scanf("%s", &response);
	
		if (strcmp(response, "yes") == 0 || strcmp(response, "YES") == 0) {
		}
		else {
			x = 0;
		}
}
while (x); {
	printf("Thank you!");
}

	return 0;
}
