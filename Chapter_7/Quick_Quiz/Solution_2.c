#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p1 = &arr[1];
    int *p2 = &arr[4];
    printf("Pointer Arithmetic and Comparison Demo:\n");
    printf("Array: ");
    for(int i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\n\n");
    // 1. Addition of a number to a pointer
    printf("1. Addition of 2 to p1 (p1 = &arr[1]): p1 + 2 points to arr[3] = %d\n", *(p1 + 2));
    // 2. Subtraction of a number from a pointer
    printf("2. Subtraction of 1 from p2 (p2 = &arr[4]): p2 - 1 points to arr[3] = %d\n", *(p2 - 1));
    // 3. Subtraction of a pointer from another
    printf("3. Subtraction of pointers (p2 - p1): %ld (number of elements between p2 and p1)\n", p2 - p1);
    // 4. Comparison of two pointer variables
    if(p1 < p2)
        printf("4. p1 < p2: TRUE (p1 points to arr[1], p2 points to arr[4])\n");
    else
        printf("4. p1 < p2: FALSE\n");
    return 0;
}

/*
Output:
    Pointer Arithmetic and Comparison Demo:
    Array: 10 20 30 40 50 

    1. Addition of 2 to p1 (p1 = &arr[1]): p1 + 2 points to arr[3] = 40
    2. Subtraction of 1 from p2 (p2 = &arr[4]): p2 - 1 points to arr[3] = 40
    3. Subtraction of pointers (p2 - p1): 3 (number of elements between p2 and p1)
    4. p1 < p2: TRUE (p1 points to arr[1], p2 points to arr[4])
*/