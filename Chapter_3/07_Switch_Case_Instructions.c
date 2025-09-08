// Switch case is used when we have to make a choice between numbers of alternatives for a given variable
/*
syntax:
    switch (integer_expression){
        case c1:
            //code
        case c2:
            //code
        case c3:
            //code
        default:
            //code
    }
*/
// The value of integer expression is matches against c1, c2, c3. If it matches any of these cases, that case along with all subsequenced "case" and "default" sattements are executed.

//example code:
#include <stdio.h>
int main(){
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    switch (a){
        case 1:
            printf("You entered 1");
        case 2:
            printf("You entered 2");
        case 3:
            printf("You entered 3");
        case 4:
            printf("You entered 4");
        default:
            printf("You didn't entered a value between 1-4. You entered %d", a);
    }
    return 0;
}

/*
input: 
    3
*/
/*
output:
    You entered 3
    you entered 4
    You didn't entered a value between 1-4. You entered 3
*/

// To avoid this output, you use break statement like this:
#include <stdio.h>
int main(){
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    switch (a){
        case 1:
            printf("You entered 1");
            break;
        case 2:
            printf("You entered 2");
            break;
        case 3:
            printf("You entered 3");
            break;
        case 4:
            printf("You entered 4");
            break;
        default:
            printf("You didn't entered a value between 1-4. You entered %d", a);
            break;
    }
    return 0;
}

// input: 3
// output: You entered 3
// Nothing else will be printed

/*
Note:
    1. We can use switch case statements even by writing cases in any order of our choice (Not necessarily ascending).
    2. Char values are allowed as they can be easily evaluated to an integer
    3. A switch can occur within another but in practice this is rarely done.
*/