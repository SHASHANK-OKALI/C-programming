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

#include <stdio.h>

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
}
