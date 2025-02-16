#include <stdio.h>
#include <ctype.h>
#include <string.h>

// ANSI color codes for terminal text styling
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"


typedef struct Hospital {
    char name[80];
    char city[20];
    int beds;
    float price;
    float rating;
    int reviews;
} Hospital;

typedef struct Doctor {
    char name[50];
    char hospital[80];
    char speciality[70];
    char degree[60];
    int chargepervisit;
    char specialityinshort[50];
    char phone[15];  // New field for phone number
} Doctor;

typedef struct Patient {
    char name[50];
    int age;
    char gender;
    char history[50];
} Patient;

void PrintHospital(Hospital hosp) {
    printf(CYAN "Hospital Name: " RESET "%s\n", hosp.name);
    printf(CYAN "City: " RESET "%s\n", hosp.city);
    printf(CYAN"Total Beds: " RESET "%d\n", hosp.beds);
    printf(CYAN "Price per Bed: " RESET "%.2f\n", hosp.price);
    printf(CYAN "Rating: " RESET "%.2f\n", hosp.rating);
    printf(CYAN "Total Reviews: " RESET "%d\n\n", hosp.reviews);
}

void PrintPatient(Patient pat) {
    printf(MAGENTA "Patient Name: " RESET "%s\n", pat.name);
    printf(MAGENTA "Age: " RESET "%d\n", pat.age);
    printf(MAGENTA "Gender: " RESET "%c\n", pat.gender);
    printf(MAGENTA"History: " RESET "%s\n\n", pat.history);
}

void sortByRating(Hospital hospital[], int n) {
    for (int i = 0; i < n - 1; i++) {      //descending order(highest rating)
        for (int j = 0; j < n - i - 1; j++) {
            if (hospital[j].rating * hospital[j].reviews < hospital[j + 1].rating * hospital[j + 1].reviews) {
                Hospital temp = hospital[j];
                hospital[j] = hospital[j + 1];
                hospital[j + 1] = temp;
            }
        }
    }
}

void sortbedsdsc(Hospital hospital[], int n) {
    for (int i = 0; i <= n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (hospital[j].price < hospital[j + 1].price) {
                Hospital temp = hospital[j];
                hospital[j] = hospital[j + 1];
                hospital[j + 1] = temp;
            }
        }
    }
}

void sortbedsasc(Hospital hospital[], int n) {
    for (int i = 0; i <= n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (hospital[j].price > hospital[j + 1].price) {
                Hospital temp = hospital[j];
                hospital[j] = hospital[j + 1];
                hospital[j + 1] = temp;
            }
        }
    }
}

void sortavailabelbeds(Hospital hospital[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (hospital[j].beds < hospital[j + 1].beds) {
                Hospital temp = hospital[j];
                hospital[j] = hospital[j + 1];
                hospital[j + 1] = temp;
            }
        }
    }
}

void printHeading() {
    printf("\n\n");
    printf(GREEN"#############################################\n"RESET);
    printf(GREEN"#                                           #\n"RESET);
    printf(GREEN"#       HOSPITAL MANAGEMENT SYSTEM          #\n"RESET);
    printf(GREEN"#                                           #\n"RESET);
    printf(GREEN"#               [  +  ]                     #\n"RESET);
    printf(GREEN"#                                           #\n"RESET);
    printf(GREEN"#############################################\n"RESET);
    printf("\n\n");
}

void sortByName(Hospital hospital[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(hospital[j].name, hospital[j + 1].name) > 0) {
                Hospital temp = hospital[j];
                hospital[j] = hospital[j + 1];
                hospital[j + 1] = temp;
            }
        }
    }
}

void city(Hospital hospital[], int n) {
    char city[30];
    int found = 0;
    printf(BLUE "Enter city name: " RESET);
    scanf("%s", city);

    for (int i = 0; i < n; i++) {
        if (strcmp(hospital[i].city, city) == 0) {
            PrintHospital(hospital[i]);
            found = 1;
        }
    }
    if (!found) {
        printf(RED "No hospitals found in %s\n" RESET, city);
    }
}

void problem(Doctor doctor[], int n) {
    char problem[20];
    int found = 0;
    printf(BLUE "Enter your problem (earnosethroat, backproblem, heart, plasticsurgery, respiratory, digestion,brain ): " RESET);
    scanf("%s", problem);

    for (int i = 0; i < n; i++) {
        if (strcmp(doctor[i].specialityinshort, problem) == 0) {
            printf(GREEN "Doctor Name: " RESET "%s\n", doctor[i].name);
            printf(GREEN "Hospital: " RESET "%s\n", doctor[i].hospital);
            printf(GREEN "Speciality: " RESET "%s\n", doctor[i].speciality);
            printf(GREEN "Degree: " RESET "%s\n", doctor[i].degree);
            printf(GREEN "Charge per visit: " RESET "%d\n\n", doctor[i].chargepervisit);
             printf(GREEN "Contact number: " RESET "%d\n\n", doctor[i].phone);
            found = 1;
        }
    }

    if (!found) {
        printf(RED "No doctors found for the problem: %s\n" RESET, problem);
    }
}

int main() {
    // Initialize hospital and doctor data
    Hospital hospital[7] = {
        {"Shri Lilawati Multispecality Hospital", "Pune", 300, 250.0, 4.5, 100},
        {"Kokila Dhirubhai Ambani Hospital", "Mumbai", 750, 200.0, 4.2, 240},
        {"KEM Hospital", "Pune", 550, 180.0, 4.8, 120},
        {"Beams Multispeciality Hospital", "Mumbai", 50, 180.0, 4.1, 150},
        {"New Era Hospital", "Nagpur", 100, 240.0, 4.6, 130},
        {"Wockhardt Super Speciality Hospital", "Nagpur", 118, 160.0, 4.3, 110},
        {"Six Sigma Hospital", "Nashik", 300, 280.0, 3.9, 140}};

    Patient patients[15] = { 
    {"Amar", 35,'M',"Backpain"},
    {"Manish", 45,'M',"Appendix surgery"},
    {"Atul", 28,'M',"Ear problem"},
    {"Elvish", 62,'M',"Cardiac arrest"},
    {"Debolina", 18,'F',"Face plastic surgery"},
    {"Shruti", 55,'F',"Brain hemorrhage"},
    {"Zafar", 50,'M',"Brain tumor"},
    {"Rahul", 30,'M',"Asthma"},
    {"Priya", 40,'F',"Gastric ulcer"}, 
    {"Amir", 22,'M',"Allergic rhinitis"},
    {"Asif", 38,'M',"Cardiomyopathy"},
    {"Prince", 60,'M',"Congential heart disease"},
    {"Aditya", 28,'M',"Spinal stenosis"},
    {"Aman", 48,'M',"Sciatica"},
    {"Sahil", 33,'M',"Respiratory tract infection"},
    };
    int m=15;

     Doctor doc[7] = {
        {"Dr. Chaitanya Bharadwaj", "Six Sigma Hospital", "ENT Specialist", "MBBS, MS - ENT", 2000, "earnosethroat", "9876543210"},
        {"Dr. Priyesh Dhoke", "Wockhardt Hospital", "Orthopedist", "MBBS, MS - Orthopaedic", 500, "backproblem", "9876543211"},
        {"Dr. Aamod Rao", "Beams Multispeciality Hospital", "Plastic Surgeon", "MBBS, MS - Surgery", 600, "plasticsurgery", "9876543212"},
        {"Dr. Anu Agarwal", "Kokila Dhirubhai Ambani Hospital", "Neurologist", "MBBS, MD", 1500, "brain", "9876543213"},
        {"Dr. Sukhant Bagdia", "New Era Hospital", "Immunologist", "MBBS, MD", 400, "respiratory", "9876543214"},
        {"Dr. Amol Talaulikar", "KEM Hospital", "Urologist", "MBBS, MS - Surgery", 1000, "digestion", "9876543215"},
        {"Dr. Anand Rao", "Shri Lilawati Hospital", "Cardiologist", "MBBS, MD", 800, "heart", "9876543216"}};

    int choice;
    printHeading();
    do {
        printf(RED "\nHospital Management System Menu \n" RESET);
        printf(CYAN "1. Print Hospital Data\n" RESET);
        printf(CYAN "2. Print Patients Data\n" RESET);
        printf(CYAN "3. Sort Hospitals by Bed Price (ascending)\n" RESET);
        printf(CYAN "4. Sort Hospitals by Bed Price (descending)\n" RESET);
        printf(CYAN "5. Sort Hospitals by Available Beds\n" RESET);
        printf(CYAN "6. Sort Hospitals by Name\n" RESET);
        printf(CYAN "7. Sort Hospitals by Rating and Reviews\n" RESET);
        printf(CYAN "8. Print Hospitals in a Specific City\n" RESET);
        printf(CYAN "9. Find Doctors Related to Your Problem\n" RESET);
        printf(RED "0. Exit\n" RESET);
        printf(YELLOW "Enter your choice: " RESET);
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                for (int i = 0; i < 7; i++) {
                    PrintHospital(hospital[i]);
                }
                break;
            case 2:{
            for(int i=0;i<m;i++){
                PrintPatient (patients[i]);
           }
           break;
            }
            case 3:
                sortbedsasc(hospital, 7);
                for (int i = 0; i < 7; i++) {
                    PrintHospital(hospital[i]);
                }
                break;
            case 4:
                sortbedsdsc(hospital, 7);
                for (int i = 0; i < 7; i++) {
                    PrintHospital(hospital[i]);
                }
                break;
            case 5:
                sortavailabelbeds(hospital, 7);
                for (int i = 0; i < 7; i++) {
                    PrintHospital(hospital[i]);
                }
                break;
            case 6:
                sortByName(hospital, 7);
                for (int i = 0; i < 7; i++) {
                    PrintHospital(hospital[i]);
                }
                break;
            case 7:
                sortByRating(hospital, 7);
                for (int i = 0; i < 7; i++) {
                    PrintHospital(hospital[i]);
                }
                break;
            case 8:
                city(hospital, 7);
                break;
            case 9:
                problem(doc, 7);
                break;
            case 0:
                printf(RED "Exiting program. Goodbye!\n" RESET);
                break;
            default:
                printf(RED "Invalid choice. Try again.\n" RESET);
        }
    } while (choice != 0);

    return 0;
}