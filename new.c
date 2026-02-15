#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float cgpa;
    char skill[30];
    struct Student *next;
};

struct Queue {
    int studentId;
    struct Queue *next;
};

struct Student *head = NULL;
struct Queue *front = NULL, *rear = NULL;

/* ---------- Utility Functions ---------- */

void clearInputBuffer() {
    while(getchar() != '\n');
}

struct Student* findStudentById(int id) {
    struct Student *temp = head;
    while(temp != NULL) {
        if(temp->id == id)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

/* ---------- Student Functions ---------- */

void addStudent() {
    struct Student *newNode = (struct Student*)malloc(sizeof(struct Student));

    if(newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enter ID: ");
    scanf("%d", &newNode->id);
    clearInputBuffer();

    if(findStudentById(newNode->id) != NULL) {
        printf("Student ID already exists!\n");
        free(newNode);
        return;
    }

    printf("Enter Name: ");
    fgets(newNode->name, sizeof(newNode->name), stdin);
    newNode->name[strcspn(newNode->name, "\n")] = 0;

    printf("Enter CGPA: ");
    scanf("%f", &newNode->cgpa);
    clearInputBuffer();

    printf("Enter Skill: ");
    fgets(newNode->skill, sizeof(newNode->skill), stdin);
    newNode->skill[strcspn(newNode->skill, "\n")] = 0;

    newNode->next = head;
    head = newNode;

    printf("Student Added Successfully!\n");
}

void displayStudents() {
    struct Student *temp = head;

    if(temp == NULL) {
        printf("No student records found.\n");
        return;
    }

    printf("\n--- Student Records ---\n");
    while(temp != NULL) {
        printf("\nID    : %d", temp->id);
        printf("\nName  : %s", temp->name);
        printf("\nCGPA  : %.2f", temp->cgpa);
        printf("\nSkill : %s\n", temp->skill);

        temp = temp->next;
    }
}

void sortByCGPA() {
    if(head == NULL) {
        printf("No records to sort.\n");
        return;
    }

    struct Student *i, *j;
    for(i = head; i != NULL; i = i->next) {
        for(j = i->next; j != NULL; j = j->next) {
            if(i->cgpa < j->cgpa) {

                struct Student temp = *i;
                *i = *j;
                *j = temp;

                struct Student *swapNext = i->next;
                i->next = j->next;
                j->next = swapNext;
            }
        }
    }

    printf("Students Sorted by CGPA (Descending)\n");
}

void checkEligibility() {
    float minCGPA;
    printf("Enter Minimum CGPA: ");
    scanf("%f", &minCGPA);

    struct Student *temp = head;
    int found = 0;

    printf("\n--- Eligible Students ---\n");
    while(temp != NULL) {
        if(temp->cgpa >= minCGPA) {
            printf("%s (CGPA: %.2f)\n", temp->name, temp->cgpa);
            found = 1;
        }
        temp = temp->next;
    }

    if(!found)
        printf("No eligible students found.\n");
}

/* ---------- Queue Functions ---------- */

void enqueue() {
    int id;
    printf("Enter Student ID to Enqueue: ");
    scanf("%d", &id);

    if(findStudentById(id) == NULL) {
        printf("Student ID not found!\n");
        return;
    }

    struct Queue *newNode = (struct Queue*)malloc(sizeof(struct Queue));

    if(newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->studentId = id;
    newNode->next = NULL;

    if(rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    printf("Student Added to Interview Queue\n");
}

void dequeue() {
    if(front == NULL) {
        printf("Interview Queue is Empty\n");
        return;
    }

    struct Queue *temp = front;
    printf("Interviewing Student ID: %d\n", temp->studentId);

    front = front->next;
    if(front == NULL)
        rear = NULL;

    free(temp);
}

void displayQueue() {
    struct Queue *temp = front;

    if(temp == NULL) {
        printf("Queue is Empty\n");
        return;
    }

    printf("\n--- Interview Queue ---\n");
    while(temp != NULL) {
        printf("Student ID: %d\n", temp->studentId);
        temp = temp->next;
    }
}

/* ---------- Memory Cleanup ---------- */

void freeAllMemory() {
    struct Student *sTemp;
    while(head != NULL) {
        sTemp = head;
        head = head->next;
        free(sTemp);
    }

    struct Queue *qTemp;
    while(front != NULL) {
        qTemp = front;
        front = front->next;
        free(qTemp);
    }
}

/* ---------- Main ---------- */

int main() {
    int choice;

    while(1) {
        printf("\n===== Placement Support Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Sort Students by CGPA\n");
        printf("4. Check Eligibility\n");
        printf("5. Enqueue for Interview\n");
        printf("6. Dequeue Interview\n");
        printf("7. Display Interview Queue\n");
        printf("0. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: sortByCGPA(); break;
            case 4: checkEligibility(); break;
            case 5: enqueue(); break;
            case 6: dequeue(); break;
            case 7: displayQueue(); break;
            case 0:
                freeAllMemory();
                printf("Exiting Program...\n");
                return 0;
            default:
                printf("Invalid Choice\n");
        }
    }
}