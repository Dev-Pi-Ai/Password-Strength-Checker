#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
    char password[100];
    int score = 0;
    int i;

    printf("Enter a password: ");
    scanf("%s", password);

    if (strlen(password) >= 8){
        score++;
    }else{
        printf("Your password should be at least eight characters long!\n");
        return 0;
    }

    for (i = 0; i < strlen(password); i++){
        if (isupper(password[i])){score++;}
        if (isalpha(password[i])){}else{score++;}
    }

    printf("Your password's score is: %d \n", score);
    
    if (score >= 5){
        printf("You have a strong password!\n");
        return 1;
    }else{
        printf("You should strengthen your password with uppercase letters, and symbols\n");
        return 0;
    }
}
