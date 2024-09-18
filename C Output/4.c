#include <stdio.h>

int main () {
	
	int subjects, grade, sum, x;
	char choice;
	
	do {
		int total = 0;
		printf("Enter number of subjects: ");
		scanf("%d", &subjects);
		
			for(x = 1; x <= subjects; x++) {
				printf("Enter grade for subject %d: ", x);
				scanf("%d", &grade);
				
				total += grade;		
			}
			
			double ave = (double)total / (double)subjects;
			printf("\n============================");
			printf("\nTotal Sum = %d", total);
			printf("\nAverage = %.2lf", ave);
			
		
			if(ave >= 75) {
				printf("\nStatus: Passed!");
				printf("\n============================");
			}
			else {
				printf("\nStatus: Failed.");
				printf("\n============================");
			}
		
		printf("\n\nEnter again? (y/n): ");
		scanf(" %c", &choice);
	}
	while(choice == 'y' || choice == 'Y');
	
	printf("Thank you!");
		
	return 0;
}
