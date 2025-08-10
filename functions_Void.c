#include <stdio.h>
#include <string.h>

void happybirthday(char name[], int age){
    printf("happybirthday to you\n");
    printf("happybirthday to you\n");
    printf("happybirthday dear %s\n", name);
    printf("happybirthday to you\n");
    printf("how old are you now? %d years old\n", age);

}

int main(){

    int age = 0;
    char name [50 ] = "";

    printf("Enter your age: ");
    scanf("%d", &age);
     
    getchar();
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    happybirthday(name, age);


    return 0;
}