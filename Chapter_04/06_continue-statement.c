#include <stdio.h>
int main(){
    for (int i = 0; i < 20; i++){
        if (i==6){
            continue; // skip this iteration now;
        }
        printf("%d \n", i);
    }
    return 0;
}