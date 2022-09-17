#include <stdio.h>
#include <string.h>

#define USR_MSG_MAX_LEN  100U
char exitstr[] = {"exit"};


void main()
{
    char userMsg[USR_MSG_MAX_LEN] ={0};
    
    printf("Welcome to first femto bash program! \n");
    printf("To end the program, please insert the word \"%s\" \n", exitstr);

    
    
    while(1){
        printf("What is your command? > ");
    
        if(NULL != fgets(&userMsg[0], (int)USR_MSG_MAX_LEN, stdin))
        {
            printf("Your command is: %s", userMsg);
        }

        if((strlen(&userMsg[0]) == 5) && (0 == strncmp(&userMsg[0], &exitstr[0], 4)))
        break;
    }

    printf("Bye Bye \n");
}