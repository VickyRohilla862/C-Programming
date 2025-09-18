/*
A function defined in C can call itself. This is called recursion.
A function calling itself is also called 'recursive' function.
example:
    factorial(n) = 1 X 2 X 3 X ... X n    // factorial(6) = 1 X 2 X 3 X ... X 6
    factorial(n) = 1 X 2 X 3 X ... X (n-1) X n    // factorial(6) = 1 X 2 X 3 X ... X (6-1) X 6
    factorial(n) = factorial(n-1) X n    // factorial(6) = factorial(6-1) X 6

    Since we can write factorial of a number in terms of itself, we can program it using recursion.
*/
#include <stdio.h>
int factorial(int);
int factorial(int x){
    int f;
    if(x == 0 || x == 1){
        return 1;
    }else{
        f = factorial(x-1) * x;
        return f;
    }
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("%d",factorial(n));
    return 0;
}

// Check out the dry run of this program in the image named 'Factorial_Dry_Run.png'

/*
Notes:
1. Recursion is often a direct way to implement certain algorithms, but not always the most direct for every algorithm.
Recursion is particularly suited for problems that can be divided into smaller, similar subproblems (like factorial computation or tree traversal), but for some algorithms, iterative approaches might be more straight more straight forward or efficient.

2. The condition in a recursive function that stops further recursion is called base case.
This correction clarifies that the base case is crucial as it prevents infinite recursion and ensures the function terminates correctly.

3. Sometimes, due to an oversight by the programmer, a recursive function can continue to run indefinitely without reaching the base case, potentially causing a stack overfloww or memory error.
This statement highlights the risk of infinite recursion annd its consequences, emphasizing the importance of properly defining base case in recursive function.
*/