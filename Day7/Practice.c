#include<stdio.h>
int main(){
    int arr[100],n,pos,i,val;
    printf("Enter number of elements:\n");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0; i<n; i++)
    scanf("%d",&arr[i]);

    //Insertion

    printf("enter position to insert (0-%d)\n",n+1);
    scanf("%d",&pos);
    printf("Enter value to insert:\n");
    scanf("%d",&val);
    for(i=n; i>=pos; i--)
    arr[i]=arr[i-1];
    arr[pos-1]=val;
    n++;

    printf("Array after insertion\n");
    for(i=0; i<n; i++)
    printf("%d",arr[i]);

    

    
}