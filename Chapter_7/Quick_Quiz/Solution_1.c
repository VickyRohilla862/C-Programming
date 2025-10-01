// program to accept marks of 5 students in an array and printing them

#include <stdio.h>
int main(){
    int marks[5];
    int students = 1;
    for(int i = 0; i < 5; i++){
        printf("%d. ", students);
        scanf("%d", &marks[i]);
        students++;
    }
    students = 1;
    printf("\nMarks:\n");
    for(int i = 0; i< 5; i++){
        printf("%d. %d\n", students, marks[i]);
        students++;
    }
    return 0;
}
/*
Output:
    1. 34
    2. 44
    3. 54
    4. 65
    5. 66

    Marks:
    1. 34
    2. 44
    3. 54
    4. 65
    5. 66
*/