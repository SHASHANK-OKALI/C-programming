//take 3 inputs and add gst and print the output
// #include<stdio.h>
// int main(){
// int price[3];

// printf("Enter first price:");
// scanf("%d",&price[0]);
// printf("Enter second price:");
// scanf("%d",&price[1]);
// printf("Enter three price:");
// scanf("%d",&price[2]);


// printf("The total of first price is:%f\n",price[0]+(0.18*price[0]));
// printf("The total of sec price is:%f\n",price[1]+(0.18*price[1]));
// printf("The total of third price is:%f\n",price[2]+(0.18*price[2]));

// return 0;


// }

// #include<stdio.h>

// int countodd(int arr[],int n);

// int main(){
//     int arr[]={1,2,3,4,5};
//     printf("%d",countodd(arr,5));
//     return 0;

// }

// int countodd(int arr[],int n){
//     int count=0;
//     for(int i=0; i<n; i++){
//         if(arr[i]%2!=0){
//             count++;
//         }
//     }
//     return count;
// }

#include<stdio.h>
int main(){
    int n;
    printf("enter n(n>2):");
    scanf("%d",&n);

    int fib[n];
    fib[0]=0;
    fib[1]=1;
    printf("The fibonacci series is:\n%d\n%d\n",fib[0],fib[1]);

    for(int i=2; i<n; i++){
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d\n",fib[i]);
    }
    printf("\n");

}