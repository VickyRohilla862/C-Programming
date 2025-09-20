/*
Based on the way we pass arguments to the function.
Function calls are of two types:
    1. Call by value    -> Sending the values of arguments
    2. Call by reference    -> Sending the address of arguments

1. Call by value:
    Here the value of the arguments are passed to the function. Consider this example:
        int c = sum(3, 4);  // assume x = 3 and y = 4
    If sum is defined as sum(itn a, int b), the value 3 and 4 are copied to a and b. Now even if we change a and b, nothing happens to the variable x and y
    In C we usually make a call by value

2. Call by reference:
    Here the address of the variable is passed to the function as argument.
    Since the addresses are passed to the function, the function can access the memory location and modify the value of a variable in calling function using '*' and '&' operators.
*/
// example:
    #include <stdio.h>
    void swap(int *x, int *y){
        int temp;   // declared a temporary variable
        temp = *x;  // storing value of x to temp
        *x = *y;    // storing value of y to x
        *y = temp;  // storing the value of x stored in temp in y
    }
    /*
    The function is capable of swapping the values passed to it.
    If a = 3, and b = 4 before a call to swap(a, b), then a = 4, and b = 3 after calling swap.
    */
    int main(){
        int a = 3;  // declared a with 3
        int b = 4;  // declared b with 4
        swap(&a, &b);   // call swap function
        printf("The value of a: %d\nThe value of b: %d", a, b);
        return 0;   // return statement
    }

/*
output:
    The value of a: 4
    The value of b: 3
*/