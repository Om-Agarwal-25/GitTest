// create stucture for employee and display size

#include <stdio.h>

int main () {

    struct Employee_Structure {
        int emp_id;
        char emp_name[20];
        int emp_salary;
    }e1;

    union Employee_Union {
        int emp_id;
        char emp_name[20];
        int emp_salary;
    }e2;

    printf ("Size of Employee_Structure: %d\n",sizeof(e1));
    printf ("Size of Employee_Union: %d",sizeof(e2));

    return 0;
}