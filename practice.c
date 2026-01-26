//Linear search
// #include<stdio.h>
// int main(){
//     int arr[]={1,2,3,4,5};
//     int key;
//     printf("enter key element");
//     scanf("%d",&key);
//     for(int i=0; i<=5; i++)
//       if(arr[i]==key){
//         printf("element found at");
//           return 0;
//       }
//     printf("element not found");

// }

//Linear search and Binary search

/*#include<stdio.h>
int main(){
  int n,i,key,choice;
  printf("Enter number of elements:");
  scanf("%d",&n);
  int arr[n];
  printf("Enter %d elements :\n",n);
  for(i=0; i<n; i++){
    scanf("%d",&arr[i]);
  }
  printf("\n.....search number....\n");
  printf("1.Linear search\n");
  printf("2.Binary search(array must be sorted)\n");
  printf("Enter your choice:");
  scanf("%d",&choice);
  printf("Enter the element to search:");
  scanf("%d",&key);
  if(choice==1){
    for(i=0; i<n; i++){
      if(arr[i]==key){
        printf("Element found at position %d\n",i+1);
        return 0;
      }
    }
    printf("Element not found \n");
  }
else if(choice==2){
   int low=0,high=n-1,mid;
   while(low<=high){
    mid=(low+high)/2;
    if(arr[mid]==key){
      printf("Element found at position %d\n",mid+1);
      return 0;
    }
    else if(arr[mid]<key){
      low=mid+1;
    }
    else{
      high=mid-1;
    }
   }
   printf("Element not found \n");
  }else{
    printf("Invalid choice!\n");
  }
  return 0;
}*/

/*#include <stdio.h>

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int result = n;

    while (result > 9) {
        result = digitSum(result);
    }

    if (result == 1)
        printf("%d is a MAGIC number!\n", n);
    else
        printf("%d is NOT a magic number.\n", n);

    return 0;
}*/

/*#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n, i, maxIndex = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Find employee with highest salary
    for (i = 1; i < n; i++) {
        if (emp[i].salary > emp[maxIndex].salary) {
            maxIndex = i;
        }
    }

    printf("\nEmployee with Highest Salary:\n");
    printf("ID: %d\n", emp[maxIndex].id);
    printf("Name: %s\n", emp[maxIndex].name);
    printf("Salary: %.2f\n", emp[maxIndex].salary);

    return 0;
}*/

/*#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[100];
    char author[50];
};

int main() {
    struct Book library[100];
    int choice, count = 0;

    while (1) {
        printf("\n===== Library Menu =====\n");
        printf("1. Add Book\n");
        printf("2. Search Book by ID\n");
        printf("3. Display All Books\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nEnter Book ID: ");
            scanf("%d", &library[count].id);

            printf("Enter Book Title: ");
            scanf("%s", library[count].title);

            printf("Enter Author Name: ");
            scanf("%s", library[count].author);

            count++;
            printf("Book Added Successfully!\n");
        }

        else if (choice == 2) {
            int id, found = 0;
            printf("\nEnter Book ID to search: ");
            scanf("%d", &id);

            for (int i = 0; i < count; i++) {
                if (library[i].id == id) {
                    printf("\nBook Found:\n");
                    printf("ID: %d\n", library[i].id);
                    printf("Title: %s\n", library[i].title);
                    printf("Author: %s\n", library[i].author);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Book Not Found!\n");
            }
        }

        else if (choice == 3) {
            printf("\nAll Books in Library:\n");
            for (int i = 0; i < count; i++) {
                printf("\nBook %d:\n", i + 1);
                printf("ID: %d\n", library[i].id);
                printf("Title: %s\n", library[i].title);
                printf("Author: %s\n", library[i].author);
            }
        }

        else if (choice == 4) {
            printf("Exiting...\n");
            break;
        }

        else {
            printf("Invalid Choice! Try again.\n");
        }
    }

    return 0;
}*/

/*#include <stdio.h>

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int i = low, j = high;
        int pivot = arr[(low + high) / 2];
        int temp;

        while (i <= j) {
            while (arr[i] < pivot) i++;
            while (arr[j] > pivot) j--;

            if (i <= j) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
        }

        quicksort(arr, low, j);
        quicksort(arr, i, high);
    }
}

int main() {
    int arr[50], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    quicksort(arr, 0, n - 1);

    printf("Sorted array (Quick Sort): ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int arr[50], n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array (Bubble Sort): ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}*/


// #include<stdio.h>
// void merge(int arr[],int left,int mid,int right)
// {
//     int i=left,j=mid+1,k=0;
//     int temp[50];

//     while(i<=mid && j<=right){
//         if(arr[i]<arr[j])
//         temp[k++]=arr[i++];
//         else
//         temp[k++]=arr[j++];
//     }
//     while(i<=mid)
//     temp[k++]=arr[i++];
//     while (j<=right)
//     temp[k++]=arr[j++];
//     for(i=left,k=0; i<=right; i++,k++)
//     arr[i]=temp[k];
// }
// void mergesort(int arr[],int left,int right)
// {
//   if(left<right)
//   {
//     int mid = (left+right)/2;
//     mergesort(arr,left,mid);
//     mergesort(arr,mid+1,right);
//     merge(arr,left,mid,right);
//   }
// }
// int main()
// {
//   int arr[50],n;
//   printf("Enter number of elements");
//   scanf("%d",&n);
//   printf("Enter %d elements:\n",n);
//   for(int i=0; i<n; i++)
//   scanf("%d",&arr[i]);
//   mergesort(arr,0,n-1);
//   printf("Sorted Array");
//   for(int i=0; i<n; i++)
//   printf("%d",arr[i]);
//   return 0;
// }
    

/*#include <stdio.h>

int main() {
    int arr[50], n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort (Descending Order)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {   // reversed condition
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Array sorted in descending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}*/

/*#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, j, len;

    printf("Enter a string: ");
    scanf("%s", str);   // reads a single word

    len = strlen(str);

    // Bubble Sort on characters
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - i - 1; j++) {
            if (str[j] > str[j + 1]) {   // alphabetical order
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf("Sorted string: %s\n", str);

    return 0;
}*/

/*#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[100], temp;
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Bubble sort by marks (ascending order)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (s[j].marks > s[j + 1].marks) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    // Output sorted list
    printf("\nStudents sorted by marks (ascending order):\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll: %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    
    int start = n / 2;
    int end = n - 1;

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    printf("First half ascending, second half descending:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    if (k < 1 || k > n) {
        printf("Invalid k value!\n");
        return 0;
    }

    // Bubble sort (ascending)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("The %d-th smallest element is: %d\n", k, arr[k - 1]);

    return 0;
}*/


/*#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Sum = %d\n", sum(x, y));
    return 0;
}*/

/*#include <stdio.h>

int isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(isEven(n))
        printf("%d is Even\n", n);
    else
        printf("%d is Odd\n", n);

    return 0;
}*/

//fibonacci series

/*#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, c;

    printf("Fibonacci Series: ");

    for(int i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int n;
    printf("Enter how many terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}*/

/*#include <stdio.h>

int isPrime(int n) {
    if(n < 2) return 0;

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(isPrime(n))
        printf("%d is Prime\n", n);
    else
        printf("%d is Not Prime\n", n);

    return 0;
}*/

//merge sort

// #include<stdio.h>

// void merge(int arr[],int left,int mid,int right)

// {
//     int i=left,j=mid+1,k=0;
//     int temp[50];
//     while(i<=mid && j<=right)
//     {
//         if(arr[i]<arr[j])
//         temp[k++]=arr[i++];
//         else
//         temp[k++]=arr[j++];
//     }
//     while(i<=mid)
//     temp[k++]=arr[i++];
//     while(j<=right)
//     temp[k++]=arr[j++];
//     for(i=left,k=0,j<=right;i++,k++;)
//     arr[i]=temp[k];
// }
// void mergesort(int arr[],int left,int right)
// {
//     if(left<right)
//     {
//         int mid=(left+right)/2;
//         mergesort(arr,left,mid);
//         mergesort(arr,mid+1,right);
//         merge(arr,left,mid,right);
//     }
// }
// int main()
// {
//     int arr[50],n;
//     printf("Enter number of elements:");
//     scanf("%d",&n);
//     printf("Enter %d elements :\n",n);
//     for(int i=0; i<n; i++)
//     scanf("%d",&arr[i]);
//     mergesort(arr,0,n-1);
//     printf("Sorted array:");
//     for(int i=0; i<n; i++)
//     printf("%d",arr[i]);
    
// }


/*#include <stdio.h>

int main() {
    int arr[10], n, key, i, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Element not found");
    }

    return 0;
}*/

//Quick sort

/*#include <stdio.h>

// Function to swap two numbers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function
int partition(int arr[], int low, int high) {
    int pivot = arr[high];   // last element as pivot
    int i = low - 1;

    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

// Quick Sort function
void quickSort(int arr[], int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[20], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, n - 1);

    printf("Sorted array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}*/

//merge sort

/*#include <stdio.h>

// Function to merge two halves
void merge(int arr[], int low, int mid, int high) {
    int i = low, j = mid + 1, k = 0;
    int temp[50];

    while(i <= mid && j <= high) {
        if(arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while(i <= mid)
        temp[k++] = arr[i++];

    while(j <= high)
        temp[k++] = arr[j++];

    for(i = low, k = 0; i <= high; i++, k++)
        arr[i] = temp[k];
}

// Merge Sort function
void mergeSort(int arr[], int low, int high) {
    if(low < high) {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    int arr[50], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    mergeSort(arr, 0, n - 1);

    printf("Sorted array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}*/

// #include <stdio.h>
// #include <stdlib.h>
// struct node {
//     int data;
//     struct node *prev;
//     struct node *next;
// };

// struct node *head = NULL;
// void insert_begin(int value) {
//     struct node *newnode;
//     newnode = (struct node *)malloc(sizeof(struct node));

//     newnode->data = value;
//     newnode->prev = NULL;
//     newnode->next = head;

//     if (head != NULL)
//         head->prev = newnode;

//     head = newnode;
// }
// void insert_end(int value) {
//     struct node *newnode, *temp;
//     newnode = (struct node *)malloc(sizeof(struct node));

//     newnode->data = value;
//     newnode->next = NULL;

//     if (head == NULL) {
//         newnode->prev = NULL;
//         head = newnode;
//         return;
//     }

//     temp = head;
//     while (temp->next != NULL)
//         temp = temp->next;

//     temp->next = newnode;
//     newnode->prev = temp;
// }
// void delete_begin() {
//     struct node *temp;

//     if (head == NULL) {
//         printf("List is empty\n");
//         return;
//     }

//     temp = head;
//     head = head->next;

//     if (head != NULL)
//         head->prev = NULL;

//     free(temp);
// }
// void delete_end() {
//     struct node *temp;

//     if (head == NULL) {
//         printf("List is empty\n");
//         return;
//     }

//     temp = head;
//     while (temp->next != NULL)
//         temp = temp->next;

//     if (temp->prev != NULL)
//         temp->prev->next = NULL;
//     else
//         head = NULL;

//     free(temp);
// }
// void display() {
//     struct node *temp;

//     if (head == NULL) {
//         printf("List is empty\n");
//         return;
//     }

//     temp = head;
//     printf("Doubly Linked List: ");
//     while (temp != NULL) {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
// }
// int main() {
//     insert_begin(10);
//     insert_begin(20);
//     insert_end(30);
//     insert_end(40);

//     display();

//     delete_begin();
//     display();

//     delete_end();
//     display();

//     return 0;
// }


//stack operations using linked list

// #include <stdio.h>
// #include <stdlib.h>
// struct Node {
// int data;
// struct Node* next;
// };
// struct Node* createNode(int value) {
// struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
// newNode->data = value;
// newNode->next = NULL;
// return newNode;
// }

// struct Node* push(struct Node* top, int value) {
// struct Node* newNode = createNode(value);

// newNode->next = top;
// return newNode;
// }

// struct Node* pop(struct Node* top) {
// if (top == NULL) {
// printf("Stack underflow. Cannot pop from an empty stack.\n");
// return NULL;
// }
// struct Node* temp = top;
// top = top->next;
// free(temp);
// return top;
// }
// void display(struct Node* top) {
// if (top == NULL) {
// printf("Stack is empty.\n");
// return;
// }
// printf("Stack elements: ");
// while (top != NULL) {
// printf("%d ", top->data);
// top = top->next;
// }
// printf("\n");
// }
// int main() {
// struct Node* top = NULL;
// int choice, value;
// while (1) {
// printf("\nMenu:\n");
// printf("1. Push\n");
// printf("2. Pop\n");
// printf("3. Display\n");
// printf("4. Exit\n");
// printf("Enter your choice: ");

// scanf("%d", &choice);
// switch (choice) {
// case 1:
// printf("Enter the value to push onto the stack: ");
// scanf("%d", &value);
// top = push(top, value);
// printf("%d pushed onto the stack.\n", value);
// break;
// case 2:
// top = pop(top);
// break;
// case 3:
// display(top);
// break;
// case 4:
// printf("Exiting the program.\n");
// while (top != NULL) {
// struct Node* temp = top;
// top = top->next;
// free(temp);
// }
// return 0;
// default:
// printf("Invalid choice. Please enter a valid option.\n");
// }
// }
// return 0;
// }

//factorial of a number

// #include <stdio.h>
// int main() {
//     int n, fact = 1;
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++)
//         fact *= i;
//     printf("Factorial = %d", fact);
//     return 0;
// }

//power of a number

// #include <stdio.h>
// int main() {
//     int base, exp, result = 1;
//     scanf("%d %d", &base, &exp);
//     for(int i = 1; i <= exp; i++)
//         result *= base;
//     printf("Result = %d", result);
//     return 0;
// }


//Reverse of a number

// #include <stdio.h>
// int main() {
//     int n, rev = 0;
//     scanf("%d", &n);
//     while(n != 0) {
//         rev = rev * 10 + n % 10;
//         n /= 10;
//     }
//     printf("Reverse = %d", rev);
//     return 0;
// }

//Armstrong number

// #include <stdio.h>
// int main() {
//     int n, temp, rem, sum = 0;
//     scanf("%d", &n);
//     temp = n;
//     while(n != 0) {
//         rem = n % 10;
//         sum += rem * rem * rem;
//         n /= 10;
//     }
//     if(sum == temp)
//         printf("Armstrong");
//     else
//         printf("Not Armstrong");
//     return 0;
// }

//perfect number

// #include <stdio.h>
// int main() {
//     int n, sum = 0;
//     scanf("%d", &n);
//     for(int i = 1; i < n; i++) {
//         if(n % i == 0)
//             sum += i;
//     }
//     if(sum == n)
//         printf("Perfect Number");
//     else
//         printf("Not Perfect");
//     return 0;
// }

//count number of digits

// #include <stdio.h>
// int main() {
//     int n, count = 0;
//     scanf("%d", &n);
//     while(n != 0) {
//         count++;
//         n /= 10;
//     }
//     printf("Digits = %d", count);
//     return 0;
// }

//pascal's triangle

// #include <stdio.h>
// int fact(int n) {
//     int f = 1;
//     for(int i = 1; i <= n; i++)
//         f *= i;
//     return f;
// }
// int main() {
//     int n;
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j <= i; j++)
//             printf("%d ", fact(i) / (fact(j) * fact(i - j)));
//         printf("\n");
//     }
//     return 0;
// }

//prime check using prime functions

// #include <stdio.h>
// int isPrime(int n) {
//     if(n <= 1) return 0;
//     for(int i = 2; i <= n/2; i++)
//         if(n % i == 0)
//             return 0;
//     return 1;
// }
// int main() {
//     int n;
//     scanf("%d", &n);
//     if(isPrime(n))
//         printf("Prime");
//     else
//         printf("Not Prime");
//     return 0;
// }

//gcd using functions

// #include <stdio.h>
// int gcd(int a, int b) {
//     if(b == 0)
//         return a;
//     return gcd(b, a % b);
// }
// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     printf("GCD = %d", gcd(a, b));
//     return 0;
// }

//Neon number

// #include <stdio.h>
// int main() {
//     int n, sq, sum = 0;
//     scanf("%d", &n);
//     sq = n * n;
//     while(sq != 0) {
//         sum += sq % 10;
//         sq /= 10;
//     }
//     if(sum == n)
//         printf("Neon Number");
//     else
//         printf("Not Neon");
//     return 0;
// }

//atmospheric number

// #include <stdio.h>
// int main() {
//     int n, sq, temp;
//     scanf("%d", &n);
//     sq = n * n;
//     temp = n;
//     while(temp != 0) {
//         if(temp % 10 != sq % 10) {
//             printf("Not Automorphic");
//             return 0;
//         }
//         temp /= 10;
//         sq /= 10;
//     }
//     printf("Automorphic");
//     return 0;
// }


//strong number

// #include <stdio.h>
// int main() {
//     int n, temp, sum = 0, fact, rem;
//     scanf("%d", &n);
//     temp = n;
//     while(n != 0) {
//         rem = n % 10;
//         fact = 1;
//         for(int i = 1; i <= rem; i++)
//             fact *= i;
//         sum += fact;
//         n /= 10;
//     }
//     if(sum == temp)
//         printf("Strong Number");
//     else
//         printf("Not Strong");
//     return 0;
// }

//prime number between two numbers

// #include <stdio.h>
// int main() {
//     int a, b, flag;
//     scanf("%d %d", &a, &b);
//     for(int n = a; n <= b; n++) {
//         if(n <= 1) continue;
//         flag = 0;
//         for(int i = 2; i <= n/2; i++) {
//             if(n % i == 0) {
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag == 0)
//             printf("%d ", n);
//     }
//     return 0;
// }

//product of digits

// #include <stdio.h>
// int main() {
//     int n, prod = 1;
//     scanf("%d", &n);
//     while(n != 0) {
//         prod *= n % 10;
//         n /= 10;
//     }
//     printf("Product = %d", prod);
//     return 0;
// }


//check co prime numbers

// #include <stdio.h>
// int main() {
//     int a, b, gcd = 1;
//     scanf("%d %d", &a, &b);
//     for(int i = 1; i <= a && i <= b; i++) {
//         if(a % i == 0 && b % i == 0)
//             gcd = i;
//     }
//     if(gcd == 1)
//         printf("Co-Prime");
//     else
//         printf("Not Co-Prime");
//     return 0;
// }

//prime factors of a Number

// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++) {
//         if(n % i == 0)
//             printf("%d ", i);
//     }
//     return 0;
// }


//Duck number

// #include <stdio.h>
// int main() {
//     int n, flag = 0;
//     scanf("%d", &n);
//     while(n != 0) {
//         if(n % 10 == 0) {
//             flag = 1;
//             break;
//         }
//         n /= 10;
//     }
//     if(flag)
//         printf("Duck Number");
//     else
//         printf("Not Duck");
//     return 0;
// }

//sum of AP numbers

// #include <stdio.h>
// int main() {
//     int a, d, n, sum = 0;
//     scanf("%d %d %d", &a, &d, &n);
//     for(int i = 0; i < n; i++)
//         sum += a + i * d;
//     printf("Sum = %d", sum);
//     return 0;
// }

//Replace 0 with 1 in a number

// #include <stdio.h>
// int main() {
//     int n, digit, place = 1, result = 0;
//     scanf("%d", &n);
//     while(n != 0) {
//         digit = n % 10;
//         if(digit == 0)
//             digit = 1;
//         result += digit * place;
//         place *= 10;
//         n /= 10;
//     }
//     printf("Result = %d", result);
//     return 0;
// }

//Decimal to Binary

// #include <stdio.h>
// int main() {
//     int n, bin[20], i = 0;
//     scanf("%d", &n);
//     while(n > 0) {
//         bin[i++] = n % 2;
//         n /= 2;
//     }
//     for(int j = i - 1; j >= 0; j--)
//         printf("%d", bin[j]);
//     return 0;
// }

//Sunny Number

// #include <stdio.h>
// int main() {
//     int n, i;
//     scanf("%d", &n);
//     for(i = 1; i * i <= n + 1; i++);
//     if(i * i == n + 1)
//         printf("Sunny Number");
//     else
//         printf("Not Sunny");
//     return 0;
// }

//Geometric Progression (GP) Series

// #include <stdio.h>
// int main() {
//     int a, r, n, term = 1;
//     scanf("%d %d %d", &a, &r, &n);
//     term = a;
//     for(int i = 1; i <= n; i++) {
//         printf("%d ", term);
//         term *= r;
//     }
//     return 0;
// }


//HCF for multiple numbers

// #include <stdio.h>
// int gcd(int a, int b) {
//     return (b == 0) ? a : gcd(b, a % b);
// }
// int main() {
//     int n, arr[10];
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++)
//         scanf("%d", &arr[i]);
//     int result = arr[0];
//     for(int i = 1; i < n; i++)
//         result = gcd(result, arr[i]);
//     printf("HCF = %d", result);
//     return 0;
// }

//sum of digits at even positions

// #include <stdio.h>
// int main() {
//     int n, pos = 1, sum = 0;
//     scanf("%d", &n);
//     while(n != 0) {
//         if(pos % 2 == 0)
//             sum += n % 10;
//         n /= 10;
//         pos++;
//     }
//     printf("Sum = %d", sum);
//     return 0;
// }

//Area of circle

// #include <stdio.h>
// int main() {
//     float r;
//     scanf("%f", &r);
//     printf("Area = %.2f", 3.14 * r * r);
//     return 0;
// }


//simple interest

// #include <stdio.h>
// int main() {
//     float p, r, t;
//     scanf("%f %f %f", &p, &r, &t);
//     printf("Simple Interest = %.2f", (p * r * t) / 100);
//     return 0;
// }


//unit converter

// #include <stdio.h>

// int main() {
//     float celsius, fahrenheit;

//     printf("Enter temperature in Celsius: ");
//     scanf("%f", &celsius);

    
//     fahrenheit = (celsius * 9 / 5) + 32;

//     printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);

//     return 0;
// }

// The odd or even checker

// #include <stdio.h>

// int main() {
//     int num;

//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     if (num % 2 == 0) {
//         printf("%d is even.\n", num);
//     } else {
//         printf("%d is odd.\n", num);
//     }

//     return 0;
// }

//Check Number is Palindromic Prime

// #include <stdio.h>
// int isPrime(int n){
//     if(n<=1) return 0;
//     for(int i=2;i<=n/2;i++)
//         if(n%i==0) return 0;
//     return 1;
// }
// int reverse(int n){
//     int r=0;
//     while(n){ r=r*10+n%10; n/=10; }
//     return r;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     if(isPrime(n) && reverse(n)==n)
//         printf("Palindromic Prime");
//     else
//         printf("Not Palindromic Prime");
//     return 0;
// }

//check perfect cube

// #include <stdio.h>
// int main() {
//     int n,i;
//     scanf("%d",&n);
//     for(i=1;i*i*i<=n;i++);
//     if((i-1)*(i-1)*(i-1)==n) printf("Perfect Cube");
//     else printf("Not Perfect Cube");
//     return 0;
// }


//Quadratic Equation Roots

// #include <stdio.h>
// #include <math.h>
// int main() {
//     float a,b,c,d,r1,r2;
//     scanf("%f%f%f",&a,&b,&c);
//     d=b*b-4*a*c;
//     if(d>=0){
//         r1=(-b+sqrt(d))/(2*a);
//         r2=(-b-sqrt(d))/(2*a);
//         printf("Roots = %.2f %.2f", r1, r2);
//     } else {
//         printf("Imaginary Roots");
//     }
//     return 0;
// }

//Identity matrix check

// #include <stdio.h>
// int main() {
//     int n,a[10][10],flag=1;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//         for(int j=0;j<n;j++){
//             scanf("%d",&a[i][j]);
//             if((i==j && a[i][j]!=1) || (i!=j && a[i][j]!=0))
//                 flag=0;
//         }
//     if(flag) printf("Identity Matrix");
//     else printf("Not Identity");
//     return 0;
// }


//kaprekar number

#include <stdio.h>
#include <math.h>
int main() {
    int n,sq,d,p1,p2;
    scanf("%d",&n);
    sq=n*n;
    d=log10(n)+1;
    p1=sq/pow(10,d);
    p2=sq%(int)pow(10,d);
    if(p1+p2==n) printf("Kaprekar Number");
    else printf("Not Kaprekar");
    return 0;
}











































