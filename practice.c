#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int key;
    printf("enter key element");
    scanf("%d",&key);
    for(int i=0; i<=5; i++)
      if(arr[i]==key){
        printf("element found at");
          return 0;
      }
    printf("element not found");

}