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

#include <stdio.h>

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
}

