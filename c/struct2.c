// sturcture for 2 students having age, name, marks and display average marks

#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float totalMarks;
};

int main() {
    struct Student students[2];
    float averageMarks = 0.0;

    for(int i = 0; i < 2; i++) {
        printf("Enter details for student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Total Marks: ");
        scanf("%f", &students[i].totalMarks);

        averageMarks += students[i].totalMarks;
    }

    averageMarks /= 2;

    for(int i = 0; i < 2; i++) {
        printf("\nDetails for student %d:\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Total Marks: %f\n", students[i].totalMarks);
    }

    printf("\nAverage of total marks: %f\n", averageMarks);

    return 0;
}