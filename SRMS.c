#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for student
struct Student {
    int id;
    char name[50];
    float marks;
    struct Student* next;
};

// Function to create a new student node
struct Student* createStudent(int id, char name[], float marks) {
    struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));

    // Memory allocation check
    if (newStudent == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    newStudent->id = id;
    strcpy(newStudent->name, name);
    newStudent->marks = marks;
    newStudent->next = NULL;

    return newStudent;
}

// Function to add a student at the end
void addStudent(struct Student** head, int id, char name[], float marks) {
    struct Student* newStudent = createStudent(id, name, marks);

    if (*head == NULL) {
        *head = newStudent;
    } else {
        struct Student* temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newStudent;
    }

    printf("Student added successfully!\n");
}

// Function to display all students
void displayStudents(struct Student* head) {
    if (head == NULL) {
        printf("No student records found.\n");
        return;
    }

    printf("\nID\tName\t\tMarks\n");
    printf("--------------------------------------\n");

    struct Student* temp = head;
    while (temp != NULL) {
        printf("%d\t%s\t\t%.2f\n", temp->id, temp->name, temp->marks);
        temp = temp->next;
    }
}

// Function to search student by ID
void searchStudent(struct Student* head, int id) {
    struct Student* temp = head;

    while (temp != NULL) {
        if (temp->id == id) {
            printf("Student Found: ID=%d, Name=%s, Marks=%.2f\n",
                   temp->id, temp->name, temp->marks);
            return;
        }
        temp = temp->next;
    }

    printf("Student with ID %d not found.\n", id);
}

// Function to delete student by ID
void deleteStudent(struct Student** head, int id) {
    struct Student* temp = *head;
    struct Student* prev = NULL;

    // If head node holds the ID
    if (temp != NULL && temp->id == id) {
        *head = temp->next;
        free(temp);
        printf("Student with ID %d deleted successfully.\n", id);
        return;
    }

    // Search for the node
    while (temp != NULL && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }

    // If not found
    if (temp == NULL) {
        printf("Student with ID %d not found.\n", id);
        return;
    }

    // Unlink and delete
    prev->next = temp->next;
    free(temp);

    printf("Student with ID %d deleted successfully.\n", id);
}

int main() {
    struct Student* head = NULL;
    int choice, id;
    char name[50];
    float marks;

    do {
        printf("\n--- Student Record Management ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter ID: ");
                scanf("%d", &id);

                printf("Enter Name: ");
                scanf(" %[^\n]", name);  // Read string with spaces

                printf("Enter Marks: ");
                scanf("%f", &marks);

                addStudent(&head, id, name, marks);
                break;

            case 2:
                displayStudents(head);
                break;

            case 3:
                printf("Enter ID to search: ");
                scanf("%d", &id);
                searchStudent(head, id);
                break;

            case 4:
                printf("Enter ID to delete: ");
                scanf("%d", &id);
                deleteStudent(&head, id);
                break;

            case 5:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 5);

    return 0;
}