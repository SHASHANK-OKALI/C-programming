// #include<stdio.h>
// int main(){
//     int age=22;
//     int *ptr=&age;
//     int _age=*ptr;

//     printf("%d",_age);
//     return 0;
// }

#include<stdio.h>
int main(){
    int age=28;
    int *ptr=&age;
    int **pptr=&ptr;

    printf("%d \n",**pptr);
}