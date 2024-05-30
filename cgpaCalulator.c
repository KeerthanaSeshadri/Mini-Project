#include <stdio.h>

// Function to calculate CGPA
float calculateCGPA(int numSubjects, int grades[]) {
    float totalGradePts = 0;
    float totalCredits = 0;

    // Assuming each subject has equal credits, you can modify this accordingly
    int creditsPerSubject = 3;

    // Loop through each subject's grade
    for (int i = 0; i < numSubjects; i++) {
        // Convert grade to grade points
        float gradePoint;
        if (grades[i] >= 90 && grades[i] <= 100)
            gradePoint = 10.0;
        else if (grades[i] >= 80 && grades[i] < 90)
            gradePoint = 9.0;
        else if (grades[i] >= 70 && grades[i] < 80)
            gradePoint = 8.0;
        else if (grades[i] >= 60 && grades[i] < 70)
            gradePoint = 7.0;
        else if (grades[i] >= 50 && grades[i] < 60)
            gradePoint = 6.0;
        else if (grades[i] >= 40 && grades[i] < 50)
            gradePoint = 5.0;
        else
            gradePoint = 0.0;

        // Accumulate total grade points
        totalGradePts += gradePoint * creditsPerSubject;
        totalCredits += creditsPerSubject;
    }

    // Calculate CGPA
    float cgpa = totalGradePts / totalCredits;
    return cgpa;
}

int main() {
    int numSubjects;
    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);

    int grades[numSubjects];

    printf("Enter the grades for each subject:\n");
    for (int i = 0; i < numSubjects; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    float cgpa = calculateCGPA(numSubjects, grades);

    printf("CGPA: %.2f\n", cgpa);

    return 0;
}

