#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 134;
    s1.cgpa = 9.5;
    strcpy(s1.name,"shashank");

    printf("student roll no is %d\n",s1.roll);
    printf("student cgpa is %f\n",s1.cgpa);
    printf("student name is %s\n",s1.name);

}