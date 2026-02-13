#include <stdio.h>
#include <string.h>

#define MAX 100

struct student {
    int roll;
    char name[30];
    float cgpa;
    char branch[20];
    char skills[30];
    char status[20];   // Placed / Not Placed
};

struct company {
    char name[30];
    float minCGPA;
    char branch[20];
};

struct student s[MAX];
struct company c;

int studentCount = 0;

/* Function Prototypes */
void addStudents();
void addCompany();
void checkEligibility();
void shortlistCandidates();
void updateStatus();
void displayStudents();

/* Main Function */
int main() {
    int choice;

    do {
        printf("\n====== Placement Support Management System ======\n");
        printf("1. Add Students\n");
        printf("2. Add Company\n");
        printf("3. Check Eligibility\n");
        printf("4. Shortlist Candidates\n");
        printf("5. Update Placement Status\n");
        printf("6. Display All Students\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudents(); break;
            case 2: addCompany(); break;
            case 3: checkEligibility(); break;
            case 4: shortlistCandidates(); break;
            case 5: updateStatus(); break;
            case 6: displayStudents(); break;
            case 0: printf("Exiting system...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while(choice != 0);

    return 0;
}

/* Add Students */
void addStudents() {
    int n, i;

    printf("Enter number of students to add: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", studentCount + 1);

        printf("Roll No: ");
        scanf("%d", &s[studentCount].roll);

        printf("Name: ");
        scanf("%s", s[studentCount].name);

        printf("CGPA: ");
        scanf("%f", &s[studentCount].cgpa);

        printf("Branch: ");
        scanf("%s", s[studentCount].branch);

        printf("Skills: ");
        scanf("%s", s[studentCount].skills);

        strcpy(s[studentCount].status, "Not Placed");

        studentCount++;
    }

    printf("\nStudents added successfully!\n");
}

/* Add Company */
void addCompany() {
    printf("\nEnter Company Details\n");

    printf("Company Name: ");
    scanf("%s", c.name);

    printf("Minimum CGPA: ");
    scanf("%f", &c.minCGPA);

    printf("Eligible Branch: ");
    scanf("%s", c.branch);

    printf("\nCompany details saved!\n");
}

/* Eligibility Check */
void checkEligibility() {
    int i, found = 0;

    printf("\nEligible Students for %s:\n", c.name);

    for(i = 0; i < studentCount; i++) {
        if(s[i].cgpa >= c.minCGPA &&
           strcmp(s[i].branch, c.branch) == 0 &&
           strcmp(s[i].status, "Not Placed") == 0) {

            printf("%d | %s | %.2f | %s\n",
                   s[i].roll, s[i].name, s[i].cgpa, s[i].skills);
            found = 1;
        }
    }

    if(!found)
        printf("No eligible students found.\n");
}

/* Shortlist Candidates (Rank by CGPA) */
void shortlistCandidates() {
    int i, j;
    struct student temp;

    /* Sort students by CGPA (Descending) */
    for(i = 0; i < studentCount - 1; i++) {
        for(j = i + 1; j < studentCount; j++) {
            if(s[i].cgpa < s[j].cgpa) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nShortlisted Candidates (Top CGPA first):\n");
    for(i = 0; i < studentCount; i++) {
        if(s[i].cgpa >= c.minCGPA &&
           strcmp(s[i].branch, c.branch) == 0 &&
           strcmp(s[i].status, "Not Placed") == 0) {

            printf("%d | %s | %.2f\n",
                   s[i].roll, s[i].name, s[i].cgpa);
        }
    }
}

/* Update Placement Status */
void updateStatus() {
    int roll, i, found = 0;

    printf("Enter Roll No to update status: ");
    scanf("%d", &roll);

    for(i = 0; i < studentCount; i++) {
        if(s[i].roll == roll) {
            strcpy(s[i].status, "Placed");
            printf("Student %s is now Placed!\n", s[i].name);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Student not found.\n");
}

/* Display Students */
void displayStudents() {
    int i;

    printf("\n--- Student Records ---\n");
    printf("Roll | Name | CGPA | Branch | Skills | Status\n");

    for(i = 0; i < studentCount; i++) {
        printf("%d | %s | %.2f | %s | %s | %s\n",
               s[i].roll,
               s[i].name,
               s[i].cgpa,
               s[i].branch,
               s[i].skills,
               s[i].status);
    }
}