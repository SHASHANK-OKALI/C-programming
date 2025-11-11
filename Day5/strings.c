// #include<stdio.h>
// int main(){
//     char name[]="SHASHANK";
//     printf("%s",name);
   
// }

// #include<stdio.h>
// void printString(char arr[]);
// int main(){
//     char firstname[]="shashank";
//     char lastname[]="okali";

//     printString(firstname);
//     printString(lastname);

//     return 0;
// }

// void printString(char arr[]){
//     for(int i=0; arr[i]!='\0'; i++){
//         printf("%c",arr[i]);
//     }
//     printf("\n");
// }

//take input and print strlen

// #include<stdio.h>

// int countlength(char arr[]);

// int main(){
//     char name[100];
//     fgets( name, 100, stdin);
//     printf("length is :%d",countlength(name));
//     return 0;
// }

// int countlength(char arr[]){
//     int count=0;
//     for(int i=0; arr[i]!='\0'; i++){
//         count++;
//     }
//     return count-1;
// }

#include<stdio.h>
void salting(char password[]);

int main(){
    char password[100];
    scanf("%s",password);
    salting(password);
}

void salting(char password[]){
    char salt[]="123";
    char newpass[200];

    strcpy(newpass,password);//newpass="test"
    strcat(newpass,salt);//newpass="test"+"123";
    puts(newpass);
}