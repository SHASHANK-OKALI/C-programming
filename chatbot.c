// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char input[100];

//     printf("ChatBot: Hello! I am a simple chatbot.\n");
//     printf("Type 'bye' to exit.\n\n");

//     while(1)
//     {
//         printf("You: ");
//         fgets(input, sizeof(input), stdin);

//         // Remove newline character
//         input[strcspn(input, "\n")] = 0;

//         if(strcmp(input, "bye") == 0)
//         {
//             printf("ChatBot: Goodbye! Have a nice day.\n");
//             break;
//         }
//         else if(strstr(input, "hello") || strstr(input, "hi"))
//         {
//             printf("ChatBot: Hello there!\n");
//         }
//         else if(strstr(input, "how are you"))
//         {
//             printf("ChatBot: I'm doing great! Thanks for asking.\n");
//         }
//         else if(strstr(input, "your name"))
//         {
//             printf("ChatBot: I'm a C chatbot created by Shashank.\n");
//         }
//         else if(strstr(input, "help"))
//         {
//             printf("ChatBot: I can answer simple questions.\n");
//         }
//         else
//         {
//             printf("ChatBot: Sorry, I don't understand.\n");
//         }
//     }

//     return 0;
// }
