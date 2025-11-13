//Write c program that takes a three digit integer from the user and checks for palindrome
//conditional statement

// #include<stdio.h>
// int main(){
//   int num;
//   printf("Enter three digit number:");
//   scanf("%d",&num);

//   int first = num/100;
//   int middle=(num/10)%10;
//   int last=num%10;
//   int sum=first+middle+last;

//   if(first==last){
//     if(sum%2==0){
//       printf("perfect mirror\n");
//     }else{
//       printf("Mirror\n");
//     }
//   }
//   else{
//     if(sum%2==0){
//       printf("Balanced\n");
//     }else{
//       printf("ordinary\n");
//     }
//   }
//   return 0;

// }

//smart traffic controller
//create program that takes

#include<stdio.h>
int main(){
  int cars,time,signal;
  printf("Enter three integer inputs:");
  scanf("%d%d%d",&cars,&time,&signal);

  if(signal==1 && cars<=5){
    printf("Go fast");
  }else if(signal==1 && cars>5){
    printf("Move slowly");
  }else if(signal==0 && time<10){
    printf("wait");
  }else if(signal==0 && time>=10){
    printf("ready");
  }else{
    printf("signal error");
  }
  return 0;
}
