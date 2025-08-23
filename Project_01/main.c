#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with current time
    srand(time(0));  

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int No_of_gusses = 0 ;
    int guessed;

    do{
        printf("Guess the number: ");
        scanf("%d", &guessed);
        if(guessed > randomNumber){
            printf("Please choose lesser\n");
        }
        else{
            printf("Please choose greater\n");
        }
        No_of_gusses++;
    }while (guessed!=randomNumber);
    
    printf("You guess the number in %d attempts", No_of_gusses);
    return 0;
}
