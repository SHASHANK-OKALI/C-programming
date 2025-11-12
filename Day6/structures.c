// #include<stdio.h>
// #include<string.h>

// struct student{
//     int roll;
//     float cgpa;
//     char name[100];
// };

// int main(){
//     struct student s1;
//     s1.roll = 134;
//     s1.cgpa = 9.5;
//     strcpy(s1.name,"shashank");

//     printf("student roll no is %d\n",s1.roll);
//     printf("student cgpa is %f\n",s1.cgpa);
//     printf("student name is %s\n",s1.name);

// }


// #include<stdio.h>

// struct  address {
//     int houseno;
//     int block;
//     char city[100];
//     char state[100];
// };

// int main(){
//     struct address adds[5];

//     printf("Enter info for person 1:");
//     scanf("%d",&adds[0].houseno);
//     scanf("%d",&adds[0].block);
//     scanf("%s",adds[0].city);
//     scanf("%s",adds[0].state);

//     printf("Enter info for person 2:");
//     scanf("%d",&adds[1].houseno);
//     scanf("%d",&adds[1].block);
//     scanf("%s",adds[1].city);
//     scanf("%s",adds[1].state);

//     printf("Enter info for person 3:");
//     scanf("%d",&adds[2].houseno);
//     scanf("%d",&adds[2].block);
//     scanf("%s",adds[2].city);
//     scanf("%s",adds[2].state);

//     printf("Enter info for person 4:");
//     scanf("%d",&adds[3].houseno);
//     scanf("%d",&adds[3].block);
//     scanf("%s",adds[3].city);
//     scanf("%s",adds[3].state);

//     printf("Enter info for person 5:");
//     scanf("%d",&adds[4].houseno);
//     scanf("%d",&adds[4].block);
//     scanf("%s",adds[4].city);
//     scanf("%s",adds[4].state);
    
//     printAdd(adds[0]);
//     printAdd(adds[1]);
//     printAdd(adds[2]);
//     printAdd(adds[3]);
//     printAdd(adds[4]);
//     return 0;

// }

// void printAdd(struct address adds){
//     printf("Address is : %d,%d,%s,%s\n",adds.houseno,adds.block,adds.city,adds.state);

// }

//

#include<stdio.h>
struct vector
{
  int x;
  int y;
};

void calsum(struct vector v1,struct vector v2,struct vector sum);

int main(){
    struct vector v1 = {5,10};
    struct vector v2 = {3,10};
    struct vector sum = {0};

    calsum(v1,v2,sum);

    return 0;


}

void calsum(struct vector v1,struct vector v2,struct vector sum){
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    printf("sum of x is :%d\n",sum.x);
    printf("sum of y is : %d\n",sum.y);
}
