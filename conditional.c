//switch case

#include<stdio.h>
int main(){
    int usn;
    printf("enter your usn(31-35):\n");
    scanf("%d",&usn);

    switch(usn) {
        case 31 : printf("shrishail\n");
                  break;
        case 32 : printf("shashank\n");
                  break;
        case 33 : printf("sagar\n");
                  break;
        case 35 : printf("rajesh\n");
                  break;
        case 34 : printf("vinod\n");
                  break;
        default : printf("This usn doesnt exist:\n");
         
        return 0;
    
    }
}