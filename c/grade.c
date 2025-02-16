// to display grade of student according to their marks using switch case
// 90+ -- A
// 80+ -- B
// 70+ -- C
// 60+ -- D


#include <stdio.h>

int main () {
    int marks;
    printf ("Enter the marks\n");
    scanf ("%d",&marks);
    grade(marks);
}

void grade (int x) {
    int temp=x/10;
    switch (temp){
        case 10:
        printf ("Grade -- A+");
        break;
        case 9:
        printf ("Grade -- A");
        break;
        case 8:
        printf ("Grade -- B");
        break;
        case 7:
        printf ("Grade -- C");
        break;
        case 6:
        printf ("Grade -- D");
        break;
        case 5:
        printf ("Grade -- E");
        break;
        case 4:
        printf("Grade -- F");
        break;
        default:
        printf("Invalid Choice");
    }
}