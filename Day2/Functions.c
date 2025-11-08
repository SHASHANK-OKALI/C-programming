// #include<stdio.h>
// //declaration/prototype
// void printHello();

// int main(){
//     printHello();//function call
//     return 0;
// }

// //function definition

// void printHello(){
//     printf("Hello!");
// }

#include<stdio.h>

int printmulti();

int main(){
    printmulti();
    return 0;
}

int printmulti(){
    int n=2,multi;
    for(int i=1; i<=10; i++){
        multi=n*i;
        printf("%dX%d=%d\n",n,i,multi);
    }
}