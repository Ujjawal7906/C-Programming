// Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit)

#include <stdio.h>
int main(){
    float Celsius;
    float fahrenheit;

    printf("Enter the value of Celsius: \n");
    scanf("%f", &Celsius);

    fahrenheit = (Celsius*9/5) + 32;
    
    printf("The value of fahrenheit with celsius %f is %f", Celsius, fahrenheit);
    return 0;
}