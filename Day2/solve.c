#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);

    int i=1,sum=0;
    do{
        sum=sum+i;
        i++;
        
    //    int j;
    // //    printf("enter number %d");
        
       
    //    do{
    //     j--;
    //     }while(j>1);

    //     printf("%d",j);
    }while(i<=n);
    printf("sum is %d",sum);
}