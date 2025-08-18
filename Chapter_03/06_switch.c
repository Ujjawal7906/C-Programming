#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    switch (age){
        case 10:
            printf("You enter 10\n");
            break;
        case 15:
            printf("You enter 15\n");
            break;
        case 20:
            printf("You enter 20\n");
            break;
        default:
            printf("Blank");
            break;
    }
    return 0;
}