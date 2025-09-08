// program to find the grade

#include <stdio.h>
int main(){
    int marks;
    char grade;
    printf("Enter the total percentage of marks you obtained: ");
    scanf("%d", &marks);
    if(marks<=100 && marks >=90){
        grade = 'A';
    }else if(marks>=80 && marks<=89){
        grade = 'B';
    }else if(marks>=70 && marks<=79){
        grade = 'C';
    }else if(marks>=60 && marks<=69){
        grade = 'D';
    }else if(marks>=50 && marks<=59){
        grade = 'E';
    }else if(marks<50){
        grade = 'F';
    }
    printf("Your grades are: %c\n", grade);
    return 0;
}