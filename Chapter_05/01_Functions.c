#include <stdio.h>

int sum(int x, int y); // Function prototype

int sum(int x, int y){
    printf("The sum of x and y is %d\n", x+y);
    return x+y;
}
int main(){
    sum(7,8); // Function call
    return 0; // return statement
}