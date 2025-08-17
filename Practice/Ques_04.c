// Write a program to calculate simple interest for a set of values 
// representing principal, number of years and rate of interest.

#include <stdio.h>
int main(){
    int principal;
    int year;
    int rate;
    int S_I;
    printf("Enter the value of principal amount $: \n");
    scanf("%d", &principal);

    printf("Enter number of year: \n");
    scanf("%d", &year);

    printf("Enter rate of interest in %% : \n");
    scanf("%d", &rate);

    S_I = (principal*rate*year)/100;
    printf("The Simple Interest of principal amount $%d, at rate of interest %d%%, for %d year is $%d", principal, rate, year, S_I);
    return 0;
}