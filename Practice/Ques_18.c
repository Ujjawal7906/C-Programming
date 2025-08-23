// Write a program to sum first ten natural numbers using while lopp

#include <stdio.h>
int main(){
    int i = 1;
    int sum = 0;
    while (i<=10){
        sum = sum + i;
        printf("Sum is %d \n", sum);
        i++;
    }
    return 0;
}