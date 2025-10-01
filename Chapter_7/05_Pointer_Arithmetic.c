/*
A pointer can be incremented to point to the next memory location fo that type
It will be incremented by the number of bytes used the type of variable
example:
    int i = 32;
    int *a = &i;    // eg a = 87994
    a++;    // value of a or address of i = 87998

    char a = 'A';
    chat *b = &a;   // b = 87994
    b++;    // now b = 87995;

    float i = 1.7;
    float *a = &i;  // a = 87994
    a++;    // now a = 87998

Following operations can be performed on a pointer:
    1. Addition of a number to a pointer
    2. Subtraction of a number from a pointer
    3. Subtraction of one pointer from another
    4. Comparison of two pointer variable
*/