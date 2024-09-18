#include <stdio.h>

int main () {
	
	char choice;

	do {
		printf("\nWelcome to the grading system");
		printf("\n===================================");
		
		printf("\n1. Calculate average");
		printf("\n2. See average status");
		printf("\n3. Quit");
		
		printf("\n\nEnter choice: ");
		scanf(" %c", &choice);
		
			switch(choice) {
				case '1': {
					int subjects, x, grade, total = 0;
					
					printf("===================================");
					printf("\n\nEnter number of subjects: ");
					scanf("%d", &subjects);
					
						for(x = 1; x <= subjects; x++) {
							printf("Enter grade for sub %d: ", x);
							scanf("%d", &grade);
							
							 total += grade;
						}
					
					double ave = (double)total / (double)subjects;
					
					printf("\nAverage is %.2lf!", ave);							
				break;
				}
				case '2': {
					int grade;
					
					printf("===================================");
					printf("\nEnter grade: ");
					scanf("%d", &grade);
					
						if(grade >= 75) {
							printf("Status: Passed!");
						}
						else {
							printf("Status: Failed.");
						}
				break;
				}
				case '3': 
					printf("\n==================================="); 
					printf("\nThank you for using the system!");
				break;
		}	
			printf("\n===================================");
			printf("\nMake another transaction? (y/n): ");
			scanf(" %c", &choice);
			printf("===================================");
		
	}												
	while(choice == 'y' || choice == 'Y');
	
	printf("\nThank you for using the system!");
	
	return 0;

}
