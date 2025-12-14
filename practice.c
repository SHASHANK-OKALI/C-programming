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

#include <stdio.h>

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
}









