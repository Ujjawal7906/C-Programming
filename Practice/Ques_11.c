// Write a program to find greatest of four numbers entered by the user
#include <stdio.h>
int main(){
    int a, b, c, d;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    printf("Enter the value of d: ");
    scanf("%d", &d);

    if(a > b && a > c && a > d){
        printf("The number %d is greater", a);
    }
    else if(b > a && b > c && b > d){
        printf("The number %d is greater", b);
    }
    else if(c > a && c > b && c > d){
        printf("The number %d is greater", c);
    }
    else{
        printf("The number %d is greater", d);
    }
    return 0;
}