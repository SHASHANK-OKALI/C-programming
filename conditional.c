//switch case

// #include<stdio.h>
// int main(){
//     int usn;
//     printf("enter your usn(31-35):\n");
//     scanf("%d",&usn);

//     switch(usn) {
//         case 31 : printf("shrishail\n");
//                   break;
//         case 32 : printf("shashank\n");
//                   break;
//         case 33 : printf("sagar\n");
//                   break;
//         case 35 : printf("rajesh\n");
//                   break;
//         case 34 : printf("vinod\n");
//                   break;
//         default : printf("This usn doesnt exist:\n");
         
//         return 0;
    
//     }
// }

//
// #include<stdio.h>
// int main(){
//     int marks;
//     printf("Enter student marks:\n");
//     scanf("%d",&marks);

//     if(marks<30){
//         printf("Grade is C\n");
//     }else if(marks>30 && marks<=70){
//         printf("Grade is B\n");
//     }else if(marks>70 && marks<=90){
//         printf("Grade is A\n");
//     }else if(marks>90 && marks<=100){
//         printf("Grade is A+\n");
//     }
//     else{
//         printf("Marks are not valid for grade assigning");
//     }
// }

//program to check upper or lower case

#include<stdio.h>
int main(){
    char ch;
    printf("Enter character:\n");
    scanf("%c",&ch);
    if(ch>='A' & ch<='Z'){
       printf("Entered character %c is upper case letter\n",ch);
    } 
    else if(ch>='a' & ch<='z')
    {
       printf("Entered character %c is lower case letter\n",ch);
    }else{
    printf("Entered value is not a character\n");
    }
    return 0;
}

    