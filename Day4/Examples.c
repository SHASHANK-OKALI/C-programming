#include<stdio.h>

float convt(float celsius);

float convt(float celsius){
   
    float far=celsius*(9.0/5.0)+32;
    return far;
}

int main(){
    float celsius;
    printf("Enter celsius:");
    scanf("%f",&celsius);
    printf(" The celsius of %f  farhanite is %f",celsius,convt(celsius));
    
}

#include<stdio.h>

float percentage(float sci,float math,float sans);

float percentage(float sci,float math,float sans){
    
    float total=sci+math+sans;
    float percent=(total/300)*100;
    return percent;
    
    
}

int main(){
    float sci=90,math=75,sans=65;
    printf("The percentage of student is %.2f%%\n",percentage(sci,math,sans));
}

#include<stdio.h>

float temp(float a);


float temp(float a){
   if(a>30){
    printf("%f is hot degree",a);
   } else{
    printf("%f is cold degree",a);
   }
}

int main(){
    float a;
    printf("Enter temp:");
    scanf("%f",&a);
    temp(a);
}