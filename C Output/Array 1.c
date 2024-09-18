#include <stdio.h>
#include <string.h>

int main () {
	
	int students;
	int grades[10];
	char name[10][50];
	int x, sum = 0;
	char response[10];
	const char *result;
	
	do {
	printf("Enter no. of students: ");
	scanf("%d", &students);
	printf("\n");
		
		while (students > 10) {
			printf("Maximum limit is 10, Try Again: ");
			scanf("%d", &students);
		}
		
		printf("\n");
		for(x = 0; x < students; x++) {
			printf("Enter details of student %d", x+1);
			printf("\nName: ");
			scanf("%s", &name[x]);
			printf("Grade: ");
			scanf("%d", &grades[x]);
			printf("\n");
			
			sum += grades[x];
		}
				
	double ave = (double)sum / students;		
					
	printf("Record List:");
	printf("\nNo. \t | Name  \t | Grade \t | Status");	
	
		for(x = 0; x < students; x++) {
			
				if(grades[x] > 74 && grades[x] <= 100) {
					result = "Passed";
				}
				else {
					result = "Failed";
				}
			
			printf("\n%d \t | %s  \t | %d \t\t | %s", x+1, name[x], grades[x], result);
		}
	
	
	printf("\nTotal Student Count: %d", students);
	printf("\n\nClass Average = %.2lf", ave);
	
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
