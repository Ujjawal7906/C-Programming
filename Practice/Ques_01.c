// Write a C program to calculate area of a rectangle using inputs supplied by the user

#include <stdio.h>
int main(){
    int length;
    int breadth;
    int area;

    printf("Enter length:\n");
    scanf("%d", &length);

    printf("Enter breadth\n");
    scanf("%d", &breadth);
    
    area = length*breadth;
    printf("The area of rectangle is %d", area);
    return 0;
}