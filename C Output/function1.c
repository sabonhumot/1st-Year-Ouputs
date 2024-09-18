#include <stdio.h>

int totalMarks();
double getAverage ();
void getStatus();

int main () {
	
	int math, sci, his, eng;
	
	printf("Enter mark in Math: ");
	scanf("%d", &math);
	
	printf("Enter mark in Science: ");
	scanf("%d", &sci);
	
	printf("Enter mark in History: ");
	scanf("%d", &his);
	
	printf("Enter mark in English: ");
	scanf("%d", &eng);
	
	printf("\nTotal Marks = %d", totalMarks(math, sci, his, eng));
	printf("\nPercentage = %.2lf\n", getAverage(math, sci, his, eng));
	
	getStatus(getAverage(math, sci, his, eng));
		
	return 0;
}

int totalMarks(int math, int sci, int his, int eng) {
	
	int sum = math + sci + his + eng;
	
	return sum;
	
}

double getAverage (int math, int sci, int his, int eng) {
	
	double ave = (double)totalMarks(math, sci, his, eng) / 4;
	
	return ave;
	
}

void getStatus (double ave) {
	
	if (ave > 74 && ave <= 100) {
		printf("Status = Passed");
	}
	else {
		printf("Status = Failed");
	}
	
}
