#include<stdio.h>

void namaste();
void bonjur();

void namaste(){
    printf("Namaste shashank!!");
}
void bonjur(){
    printf("Bonjur shingshong!!");
}

int main(){
    char ch;
    printf("enter i for indian and f for french:");
    scanf("%c",&ch);
    if(ch=='i'){
       namaste();
    }else{
        bonjur();
    }
    
}

#include<stdio.h>

void even();
void odd();

void even(){
    printf("The Number is Even");
}
void odd(){
    printf("The Number is Odd");
}

int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    if(n%2==0){
        even();
    }else{
        odd();
    }
}

#include<stdio.h>

int square(int s);
float circle(float r);
int rect(int l,int b);

int square(int s){
    int S=s*s;
    printf("The area of square is : %d\n",S);
}

float circle(float r){
    float R=3.14*r*r;
    printf("The area of circle is:%f\n",R);
}

int rect(int l,int b){
    int Rec=l*b;
    printf("The area of rectangle is:%d\n",Rec);

}

int main(){
    int s;
    printf("Enter s value:");
    scanf("%d",&s);
     square(s);
     
    float r;
    printf("Enter r value:");
    scanf("%f",&r);
     circle(r);

    int l,b;
    printf("Enter l value:");
    printf("Enter b value:");
    scanf("%d",&l);
    scanf("%d",&b);
     rect(l,b);
}

//Recursion

#include<stdio.h>
void printHW(int count);

int main(){
    printHW(5);
    return 0;
}

//recursive function

void printHW(int count){
    if(count == 0){
        return;
    }
    printf("Hello world\n");
    printHW(count-1);
}