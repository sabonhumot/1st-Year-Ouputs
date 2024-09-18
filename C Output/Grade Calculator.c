#include <stdio.h>

double average ();
int finalGrade ();

int main () {
	
	int subs;
	
	printf("======================================");
	printf("\nWelcome to the Grade Calculator!");
	printf("\nPlease enter the number of subjects: ");
	scanf("%d", &subs);
		
	double ave = average(subs);
	
	printf("======================================\n");
	printf("\nThe average score is = %.2lf", ave);
	
	finalGradeDisplay(finalGrade(ave));
	
	return 0;
}

double average (int subs) {
	int x, score, sum = 0;
	double ave;
	printf("======================================\n");
	for (x = 1; x <= subs; x++) {
			printf("Enter score for subject %d: ", x);
			scanf("%d", &score);
			
			sum += score;
		}
		return ave = (double)sum / subs;
	}
	
int finalGrade (double average) {
	if (average >= 90){
		return 'A';
	}
	else if (average >= 80 && average < 90) {
		return 'B';
	}
	else if (average >= 70 && average < 80 ) {
		return 'C';
	}
	else if (average >= 60 && average < 70) {
		return 'D';
	}
	else if (average < 60) {
		return 'F';
	}
}

void finalGradeDisplay (char grade) {
	switch (grade) {
		case 'A':
			printf("\nYour Final Grade is: A");
			break;
		case 'B':
			printf("\nYour Final Grade is: B");
			break;
		case 'C':
			printf("\nYour Final Grade is: C");
			break;
		case 'D':
			printf("\nYour Final Grade is: D");
			break;
		case 'E':
			printf("\nYour Final Grade is: E");
			break;		
		case 'F':
			printf("\nYour Final Grade is: F");
			break;
	}
}
	
	
 
	



