#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: \n");
    scanf("%d", &age);

    if (age > 10){
        printf("Your age is %d \n", age);
        printf("and it is greater than 10");
    }
    
    if(age < 10){
        printf("Your age is %d \n", age);
        printf("and it is less than 10");
    }
    return 0;
}