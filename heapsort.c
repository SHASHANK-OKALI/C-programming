// #include<stdio.h>
// #include<stdlib.h>

// void heapify(int a[], int n, int i)
// {
//     int largest = i;
//     int left = 2*i + 1;
//     int right = 2*i + 2;

//     if (left < n && a[left] > a[largest])
//         largest = left;

//     if (right < n && a[right] > a[largest])
//         largest = right;

//     if (largest != i)
//     {
//         int temp = a[i];
//         a[i] = a[largest];
//         a[largest] = temp;

//         heapify(a, n, largest);
//     }
// }

// void heapsort(int a[], int n)
// {
//     // Build max heap
//     for (int i = n/2 - 1; i >= 0; i--)
//         heapify(a, n, i);

//     // Extract elements from heap
//     for (int i = n - 1; i > 0; i--)
//     {
//         int temp = a[0];
//         a[0] = a[i];
//         a[i] = temp;

//         heapify(a, i, 0);  // Use reduced heap size
//     }
// }

// void printArr(int arr[], int n)
// {
//     for(int i = 0; i < n; ++i)
//         printf("%d ", arr[i]);
// }

// int main()
// {
//     int a[] = {45, 23, 98, 12, 78};
//     int n = sizeof(a) / sizeof(a[0]);

//     printf("Before sorting elements: ");
//     printArr(a, n);

//     heapsort(a, n);

//     printf("\nAfter sorting elements: ");
//     printArr(a, n);

//     return 0;
// }