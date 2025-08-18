#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: \n");
    scanf("%d", &age);

    if (age > 17){
        printf("Your age is %d and you are eligible for vote.", age);
    }
    
    else{
        printf("You are not eligible for vote.");
    }
    return 0;
}