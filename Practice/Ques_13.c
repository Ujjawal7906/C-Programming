// Write a program to print first ‘n’ natural number using do-while 
#include <stdio.h>
int main(){
    int i = 1;
    int a;
    printf("Enter the natural No.: ");
    scanf("%d", &a);
    do{
        printf("%d \n", i);
        i++;
    } while (i <= a);
    return 0;
}