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

// #include<stdio.h>
// void salting(char password[]);

// int main(){
//     char password[100];
//     scanf("%s",password);
//     salting(password);
// }

// void salting(char password[]){
//     char salt[]="123";
//     char newpass[200];

//     strcpy(newpass,password);//newpass="test"
//     strcat(newpass,salt);//newpass="test"+"123";
//     puts(newpass);
// }

// #include<stdio.h>
// void slice(char str[],int n,int m);

// int main(){
//     char str[]="Helloworld";
//     slice(str,3,6);
// }

// void slice(char str[],int n,int m){
//     char newStr[100];
//     int j=0;
//     for(int i = n; i<=m; i++,j++){
//         newStr[j]=str[i];
//     }
//     newStr[j]='\0';
//     puts(newStr);
// }

//write a fun to count occurrence of vowels in a string.

// #include<stdio.h>
// int countvowels(char str[]);

// int main(){
//     char str[]="shashank";
//     printf("vowels are : %d",countvowels(str));
// }

// int countvowels(char str[]){
//     int count=0;
//     for(int j=0; str[j]!='\0'; j++){
//         if(str[j]=='a'  || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u')
//         {
//        count++;
//         }
//     }
//     return count;
// }

//check if a given charater is present in a string or not

// #include<stdio.h>

// void checkchar(char str[],char ch);

// int main(){
//     char str[]="Apnacollege";
//     char ch = 'w';
//     checkchar(str,ch);
// }

// void checkchar(char str[],char ch){
//     for(int i=0; str[i]!='\0'; i++){
//         if(str[i]==ch){
//             printf("character is present");
//             return;
//         }
//     }
//     printf("character is NOT present:");
// }