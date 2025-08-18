#include <stdio.h>
int main(){
     // condition ? expression-if-true : expression-if-false
     int age;
     printf("Enter your age:\n");
     scanf("%d", &age);

     age >= 18 ? printf("You are eligible") : printf("You are not eligible");
    return 0;
}