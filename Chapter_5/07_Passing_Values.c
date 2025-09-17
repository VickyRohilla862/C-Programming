/*
We can pass values to a function and can get a value in return from a function.

Syntax:
    int sum(int a, int b);

A function prototype in programming is a declaration of a function that specifies its name, return type, and parameters(if any) but does not include the function body.

The above prototype means that sum is a function which takes values (a(of int type) and b(of int type)) and returns a value of type int.

Function definition can be like:
    int sum(int a, int b){
        int c = a + b;
        return c;
    }
    // now we can call sum(2, 3); from main() to get 5 in return. Here 2 and 3 are arguments
    int d = sum(2, 3);  // d becomes 5

Parameters and arguments are different. Parameters are temporary variables passed in a function. Arguments are the actual values
Like in above example, a and b are parameters(temporary variables in a function) and 2 and 3 are arguments(actual values).
*/
/*
Note:
1. Parameters are the value or variable placeholder in the function definition. Eg - a and b
2. Arguments are the actual values or variables passed to the function to make call. Eg - 2 and 3
3. A function can return only one value at a time.
4. If the passed variable is changed inside the function, the function call doesn't change the value in the calling function. eg:
    int change(int a){
        a = 77; // misnomer
        return 0;
    }
'change' is a function which pretends to change 'a' to 77.
Now if we call it from main():
    int b = 22;
    change(b);  // the calue of b remains 22
    printf("The value of b is %d", b);  // prints"The value of b is 22"
This happens because a copy of b is passed to the change function so the actual value wil remain untouched by the function.
*/