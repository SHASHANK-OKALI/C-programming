//Function overlap checker complete code

// #include<stdio.h>
// int isoverlap(int start1,int end1,int start2,int end2){
//     if(start1<=end2 && start2<=end1)
//     return 1;
//     else
//     return 0;
// }

// int main(){
//     int s1,e1,s2,e2;
//     printf("Enter interval 1(start end):");
//     scanf("%d%d",&s1,&e1);
//     printf("Enter interval 2(start end):");
//     scanf("%d%d",&s2,&e2);

//     if (isoverlap(s1,e1,s2,e2))
//     printf("Overlap\n");
//     else
//     printf("No overlap\n");
//     return 0;
// }

//Mood Based greeting generator

#include <stdio.h>
#include <string.h>

// Function declarations
void greetHappy();
void greetSad();
void greetAngry();
void greetExcited();

// Function to choose the correct greeting
void generateGreeting(char mood[]) {
    if (strcmp(mood, "happy") == 0)
        greetHappy();
    else if (strcmp(mood, "sad") == 0)
        greetSad();
    else if (strcmp(mood, "angry") == 0)
        greetAngry();
    else if (strcmp(mood, "excited") == 0)
        greetExcited();
    else
        printf("I don't recognize this mood, but I hope you have a nice day!\n");
}

// Mood-specific functions
void greetHappy() {
    printf("😊 You're happy! Keep shining and spreading positivity!\n");
}

void greetSad() {
    printf("😔 Feeling sad? Remember, tough times don't last. You're stronger than you think.\n");
}

void greetAngry() {
    printf("😡 You're angry. Take a deep breath... everything will settle down.\n");
}

void greetExcited() {
    printf("🤩 You're excited! Amazing things are on the way for you!\n");
}

int main() {
    char mood[20];

    printf("Enter your mood (happy/sad/angry/excited): ");
    scanf("%s", mood);

    generateGreeting(mood);

    return 0;
}
