// Write program to determine whether a student has passed or failed. To pass, a student requires a total of 40% and atleast 33% in each subject. Assume there are 3 subjects and take the marks as input from the user.
#include <stdio.h>
int main(){
    int marks1, marks2, marks3;
    printf("Enter the marks of first subject: ");
    scanf("%d", &marks1);
    printf("Enter the marks of second subject: ");
    scanf("%d", &marks2);
    printf("Enter the marks of third subject: ");
    scanf("%d", &marks3);
    if(marks1 < 33 || marks2 < 33 || marks3 < 33){  // checking marks for individual subjects
        printf("You are failed due to less marks in individual subject\n");
    }else if((marks1 + marks2 + marks3)/3 < 40){ // finding the average
        printf("You are failed due to less marks\n");
    }else{
        printf("You are passed!\n");
    }
    return 0;
}