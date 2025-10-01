// Elements can be entered or accessed like this:
#include <stdio.h>
int main(){
    int marks[5] = {54, 69, 51, 45, 33};
        // index =  0 , 1 , 2 , 3 , 4
    printf("The marks at 0 index is %d\n", marks[0]);
    printf("The marks at 1 index is %d\n", marks[1]);
    printf("The marks at 2 index is %d\n", marks[2]);
    printf("The marks at 3 index is %d\n", marks[3]);
    printf("The marks at 4 index is %d\n", marks[4]);
    return 0;
}
/*
Output:
    The marks at 0 index is 54
    The marks at 1 index is 69
    The marks at 2 index is 51
    The marks at 3 index is 45
    The marks at 4 index is 33
*/

// Or
#include <stdio.h>
int main(){
    int marks[5];
    for(int i = 0; i < 5; i++){
        printf("Enter the marks of %d index: ", i);
        scanf("%d", &marks[i]);
    }
    for(int i = 0; i<5; i++){
        printf("The value at %d index is %d\n", i, marks[i]);
    }
    return 0;
}
/*
Output:
    Enter the marks of 0 index: 45
    Enter the marks of 1 index: 56
    Enter the marks of 2 index: 54
    Enter the marks of 3 index: 34
    Enter the marks of 4 index: 44
    The value at 0 index is 45
    The value at 1 index is 56
    The value at 2 index is 54
    The value at 3 index is 34
    The value at 4 index is 44
*/

// we can also print a value at specific index like:
#include <stdio.h>
int main(){
    int marks[5];
    for(int i = 0; i < 5; i++){
        printf("Enter the marks for %d index: ", i);
        scanf("%d", &marks[i]);
    }
    printf("The value at 1st index: %d", marks[1]);
    return 0;
}
/*
Output:
    Enter the marks for 0 index: 34
    Enter the marks for 1 index: 44
    Enter the marks for 2 index: 56
    Enter the marks for 3 index: 54
    Enter the marks for 4 index: 43
    The value at 1st index: 44
*/