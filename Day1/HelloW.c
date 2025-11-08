/*#include <stdio.h>

int main() 
{
  int a,b;
  printf("enter a value :\n");
  scanf("%d",&a);
  printf("enter  b value : \n");
  scanf("%d",&b);
  // sum=a+b;
  // printf("sum is : %d \n",sum);
  printf("sum is %d \n",a+b);
  return 0;

}*/

//area of square
/*#include<stdio.h>
int main(){
  float a,area;
  printf("enter value of a : \n");
  scanf("%f",&a);
  area=a*a;
  printf("area of square is: %f\n",area);
  return 0;
}*/

//area of circle

// #include<stdio.h>
// int main(){
//   float r,area;
//   printf("enter value of r : \n");
//   scanf("%f",&r);
//   area=3.14*r*r;
//   printf("the area of circle is: %f\n",area);
//   return 0;
// }


//area of rectangle
// #include<stdio.h>
// int main(){
//   int l,b,area;
//   printf("enter value of l&b : \n");
//   scanf("%d%d",&l,&b);
//   area=l*b;
//   printf("area of rectangle is: %d\n",area);
//   return 0;
// }


//Instructions and operators,associative,precedence

//EX1

// #include<stdio.h>
// #include<math.h>
// int main(){
//   int a = 4+9*10;
//   printf("%d \n",a);
//   return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//   int a = 5+2/2*3;
//   printf("%d\n",a);
//   return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//   int a = 5*(2/2)*3;
//   printf("%d\n",a);
//   return 0;
// }

//control instrucitons
//sequence,decision,Loop,Case Control.

//relational operator
// #include<stdio.h>
// #include<math.h>
// int main(){
  
//   printf("%d\n",3>4);
//   return 0;
// }

//arithmetic operator

// #include<stdio.h>
// #include<math.h>
// int main(){
//   printf("%d\n",3+4);
//   return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//   int a=5<3||5<3;
//   printf("%d\n",a);
//   return 0;
// }

// #include<stdio.h>
// int main(){
//   int a;
//   printf("enter a value:\n");
//   scanf("%d",&a);
//   if(a%2==0){
//     printf("entered a value is even %d",a);
//   }else{
//     printf("entered a value is odd %d",a);
//   }
//   return 0;
// }

#include<stdio.h>
int main(){
  int a,b,c;
  printf("enter a :\n");
  scanf("%d",&a);
  printf("enter b :\n");
  scanf("%d",&b);
  printf("enter c :\n");
  scanf("%d",&c);

  if(a>b){
    printf("Largest number is a %d",a);
  }else if (b>c)
  {
   printf("Largest number is b %d",b); 
  }else if (a>c)
  {
    printf("Largest number is c %d",c);
  }
  return 0;
  
}
