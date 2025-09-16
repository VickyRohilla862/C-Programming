// What is a Function?
/*
A function is a block of code which performs a particular task.
A function can be reused by the programmer in a given program  any number of times.
*/

/*
Syntax:
    #include <stdio.h>
    // function prototype
    void display();    // datatype function_name(parameters);
    int main(){
        int a;  // variable declaration
        display();  // function call
        return 0;   // return statement
    }
    // function definition
    void display(){
        printf("Hi I am display function"); // The code that will execute on call
    }
*/

/*
Example:
Instead of writing this:
    #include <stdio.h>
    int main(){
        int a = 1;
        int b = 2;
        int c = a+b;
        printf("The sum is %d", c);

        int a1 = 12;
        int b1 = 23;
        int c1 = a1+b1;
        printf("The sum is %d", c1);

        int a2 = 2;
        int b2 = 27;
        int c2 = a+b;
        printf("The sum is %d", c2);
        return 0;
    }

we will write:
    #include <stdio.h>
    int sum(int, int);

    int sum(int x, int y){
        printf("The sum is %d\n", x+y);
    }
    int main(){
        int a = 1;
        int b = 2;
        sum(a, b);

        int a1 = 12;
        int b1 = 23;
        sum(a1, b1);

        int a2 = 2;
        int b2 = 27;
        sum(a2, b2);
        return 0;
    }

    output:
        The sum is 3
        The sum is 35
        The sum is 29
*/