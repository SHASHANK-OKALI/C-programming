// #include<stdio.h>
// int main(){
//     int n,i,key,choice;
//     printf("Enter number of elements:");
//     scanf("%d",&n);
//     int arr[n];

//     printf("Enter %d elements : \n",n);
//     for(i=0; i<n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     printf("\n----search number----\n");
//     printf("1.Linear search \n");
//     printf("2.Binary search(Array must be sorted)\n");
//     printf("Enter your choice:");
//     scanf("%d",&choice);
//     printf("Enter the element to search:");
//     scanf("%d",&key);

//     if(choice==1)
//     {
//         for(i=0; i<n; i++)
//         {
//             if(arr[i]==key)
//             {
//                 printf("Element found at position %d\n",i+1);
//                 return 0;
//             }
//         }
//         printf("Element not found \n");
//     }
//     else if(choice==2)
//     {
//         int high=0,low=n-1,mid;
//         while(low<=high)
//         {
//             mid=(low+high)/2;
//             if(arr[mid]==key)
//             {
//                 printf("Element found at position %d",mid+1);
//                 return 0;
//             }
//             else if(arr[mid]<key)
//             {
//                 low=mid+1;
//             }
//             else
//             {
//                 high=mid-1;
//             }
//         }
//         printf("Element not found \n");
//     }
//     else
//     {
//         printf("Invalid choice\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n,i,key,choice;
//     printf("Enter number of elements:\n");
//     scanf("%d",&n);
//     int arr[n];

//     printf("Enter %d elements\n",n);
//     for(i=0; i<n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     printf("\n----search choice----\n");
//     printf("1.Linear seach:\n");
//     printf("2.Binary search:\n");
//     printf("Enter your choice:\n");
//     scanf("%d",&choice);
//     printf("Enter the element to search:\n");
//     scanf("%d",&key);

//     if(choice==1)
//     {
//       for(i=0; i<n; i++)
//       {
//         if(arr[i]==key)
//         {
//           printf("Element found at position %d \n",i+1);
//           return 0;
//         }
//       }
//       printf("Element not found");
//     }
//     else if(choice == 2)
//     {
//         int low=0,high=n-1,mid;
//         while(low<=high)
//         {
//            mid=(low+high)/2;
//            if(arr[mid]==key)
//            {
//             printf("Element found at position %d\n",mid+1);
//             return 0;
//            }
//            else if(arr[mid]<key)
//            {
//              low=mid+1;
//            }
//            else
//            {
//             high=mid-1;
//            }
//         }
//         printf("Element not found");
//     }
//     else{
//         printf("invalid choice");
//     }
//     return 0;
// }


//quick sort

// #include<stdio.h>
// void swap(int *a,int *b)
// {
//    int temp = *a;
//    *a=*b;
//    *b=temp;
// }

// int partition(int arr[],int low,int high)
// {
//     int pivot = arr[high];
//     int i=low-1;
//     for(int j=low; j<high; j++)
//     {
//        if(arr[j]<=pivot)
//        {
//         i++;
//         swap(&arr[i],&arr[j]);
//        } 
//     }
//     swap(&arr[i+1],&arr[high]);
//     return i+1;
// }
// void quicksort(int arr[],int low,int high)
// {
//     if(low<high)
//     {
//         int pi = partition(arr,low,high);
//         quicksort(arr,low,pi-1);
//         quicksort(arr,pi+1,high);
//     }
// }
// int main(){
//     int n;
//     printf("Enter number of elements:\n");
//     scanf("%d",&n);

//     int arr[n];
    
//     printf("Enter %d elements:\n",n);
//     for(int i=0; i<n; i++)
//     {
//     scanf("%d",&arr[i]);
//     }
//     quicksort(arr,0,n-1);
//     printf("Sorted array is :");
//     for(int i=0; i<n; i++)
//     {
//     printf("%d",arr[i]);
//     }
//     return 0;

// }

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
//     for(int i=left,k=0;i<=right;i++,k++)
//     arr[i]=temp[k];
// }

// void mergeSort(int arr[],int left,int right)
// {
//     if(left<right)
//     {
//         int mid=(left+right)/2;
//         mergeSort(arr,left,mid);
//         mergeSort(arr,mid+1, right);
//         merge(arr,left,mid,right);

//     }
// }

// int main(){
//     int arr[50],n;
//     printf("Enter number of elements");
//     scanf("%d",&n);
//     printf("Enter %d elements:\n",n);
//     for(int i=0; i<n; i++)
//     scanf("%d",&arr[i]);
//     mergeSort(arr,0,n-1);
//     printf("Sorted array:");
//     for(int i=0; i<n; i++)
//     printf("%d",arr[i]);
//     return 0;

// }
    

// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node*next;
// };

// void displayNodes(struct Node*head){
//     printf("Linked List Nodes:");
//     while(head!=NULL){
//         printf("%d",head->data);
//         head = head->next;
//     }
//     printf("\n");
// }

// int countNodes(struct Node*head){
//     int count=0;
//     while(head!=NULL)
//     {
//        count++;
//        head=head->next;
//     }
//     return count;
// }

// int main(){

//     struct Node*head=NULL;

//     head=(struct Node*)malloc(sizeof(struct Node));
//     head->data=1;
//     head->next=NULL;

//     struct Node* second = (struct Node*)malloc(sizeof(struct Node));
//     second ->data=2;
//     second ->next=NULL;
//     head->next=second;

//     struct Node* third = (struct Node*)malloc(sizeof(struct Node));
//     third ->data=3;
//     third ->next=NULL;
//     second->next=third;

//     displayNodes(head);

//     int nodeCount = countNodes(head);
//     printf("Number of nodes in the linked list : %d\n",nodeCount);

//     while(head!=NULL)
//     {
//         struct Node*temp=head;
//         head=head->next;
//         free(temp);
//     }
//     return 0;
// }

