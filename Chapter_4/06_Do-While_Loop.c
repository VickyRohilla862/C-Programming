/*
As we seen in While loop, that loop runs when the condition is true.
In While loop, condition is checked before executing the code. But D0-While loop is different.
It runs the code atleast once before checking the condition. It means whether the condition is true or not, the code inside the do-while loop will run alteast one time and then the condition is checked.
If the condition is true, the loop continue to execute but if the condition is false, the loop will not run.
*/
/*
Syntax:
    do{
        //code;
    }while(condition);
*/
// In simpler terms we can say that do-while loop = while loop which executes atleast once.
//example:
#include <stdio.h>
int main(){
    int i = 5;
    do{
        printf("loop running..."); // the code will run first
    }while(i>6); // the condition is false so the loop will not run
    return 0;
}

//output: loop running...