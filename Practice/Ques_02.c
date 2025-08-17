// Calculate the area of a circle
#include <stdio.h>
int main(){
    int radius;
    float area;
    int height;
    float volume;
    printf("Enter radius:\n");
    scanf("%d", &radius);
    printf("Enter height: \n");
    scanf("%d", &height);

    area = 3.14*radius*radius;
    printf("The area of circle with radius %d is %f \n", radius, area);

    volume = area*height;
    printf("The volume of cylinder with radius %d and height %d is %f", radius, height, volume);
    return 0;
}