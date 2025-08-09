# include <stdio.h>
#include <string.h>
            //while loop = continues a block of code if the condition is true if false it stop 
int main(){

 char name [50] ="";

 getchar;
 printf("Enter your name: ");
 fgets(name, sizeof(name), stdin);
 name[strlen(name) - 1] = '\0';

 while(strlen(name)==0){
    printf("Your name is not available. Enter your name please: ");
     fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

 }

 printf("Welcome %s, thank you for choosing us", name);



    return 0 ;
}