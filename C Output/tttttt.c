#include <stdio.h>

// Function to calculate average score
double calculateAverage(int subjects[], int numSubjects) {
    int i, sum = 0;

    for (i = 0; i < numSubjects; i++) {
        sum += subjects[i];
    }

    return (double)sum / numSubjects;
}

// Function to determine final grade
char determineGrade(double average) {
    if (average >= 90) {
        return 'A';
    } else if (average >= 80) {
        return 'B';
    } else if (average >= 70) {
        return 'C';
    } else if (average >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

// Function to display final grade
void displayGrade(char grade) {
    switch (grade) {
        case 'A':
            printf("Your final grade is: A\n");
            break;
        case 'B':
            printf("Your final grade is: B\n");
            break;
        case 'C':
            printf("Your final grade is: C\n");
            break;
        case 'D':
            printf("Your final grade is: D\n");
            break;
        case 'F':
            printf("Your final grade is: F\n");
            break;
        default:
            printf("Invalid grade\n");
    }
}

int main() {
    printf("Welcome to the Grade Calculator!\n");
    
    int numSubjects;

    // Input the number of subjects
    printf("Please enter the number of subjects: ");
    scanf("%d", &numSubjects);

    int i, subjects[numSubjects];

    // Input scores for each subject
    for (i = 0; i < numSubjects; i++) {
        printf("Enter score for subject %d: ", i + 1);
        scanf("%d", &subjects[i]);
    }

    // Calculate average score
    double average = calculateAverage(subjects, numSubjects);

    // Determine and display the final grade
    displayGrade(determineGrade(average));

    return 0;
}

