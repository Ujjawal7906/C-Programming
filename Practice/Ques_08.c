/*Write a program to determine whether a student has passed or failed. To pass, a
student requires at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user*/

#include <stdio.h>
int main(){
    int sub1_marks;
    int sub2_marks;
    int sub3_marks;
    float marks_percentage;
    printf("Enter your marks in sub1 out of 100: ");
    scanf("%d", &sub1_marks);

    printf("Enter your marks in sub2 out of 100: ");
    scanf("%d", &sub2_marks);

    printf("Enter your marks in sub3 out of 100: ");
    scanf("%d", &sub3_marks);

    printf("Your marks are %d, %d and %d and\n", sub1_marks, sub2_marks, sub3_marks);

    // marks_percentage = (sub1_marks + sub2_marks + sub3_marks)/300.0*100;
    // printf("Your percentage is %.2f%%", marks_percentage);

    // if(marks_percentage >= 33){
    //     printf(" and you pass");
    // }

    // else{
    //     printf(" and you fail");
    // }

    if(sub1_marks >= 33 && sub2_marks >= 33 && sub3_marks >= 33){
        printf("You pass");
    }
    else{
        printf("you fail because your marks in one of the subjects is less than 33");
    }

    return 0;
}