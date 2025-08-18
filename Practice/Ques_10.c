// Write a program to determine whether a character entered by the user is lowercase or not.

#include <stdio.h>
int main(){
    char a;
    printf("Enter your Character: ");
    scanf("%c", &a);

    if(a >= 97 && a <= 122){
        printf("The character is LowerCase");
    }
    else{
        printf("The character is UpperCase");
    }
    return 0;
}