#include <stdio.h>
int main(){
    int a = 4;
    printf("%d, %d, %d \n", a, ++a, a++);
    return 0;
}

// the output to the above program will be 6, 6, 4 because evaluation of same variable in printf function is right to left

/*
exaluation:
    a = 4
    a, ++a, a++ // executes right to left so a++ will print a then increases it by 1. a = 5
    a, ++a, 4   // now ++a adds 1 to a and then prints its value. a = 6
    a, 6, 4     // now a just prints the value of a and now the value of a is 6 so:
    6, 6, 4
*/