#include <stdio.h>
#include <stdbool.h>

int main(){
    bool isRunning = true;
    char response = '\0';

    while(isRunning){
        printf("You are playing a game\n");
        printf("Would you like to continue to play (Y = YES, N = NO): ");
        scanf(" %c", &response);
        
        if(response == 'N'){
            isRunning = false;
            printf("You exited the game\n");
            

        }
       

    }
   
    return 0;
}