/*
Syntax:
    while(condition){
        //code that runs in loop until the condition becomes false.
    }

The while loop keeps executing as long as the condition is true.
*/
//Lets take the example of printing "Happy Birthday" 100 times:
// #include <stdio.h>
// int main(){
//     int i = 0; // we will use this variable for condition
//     while(i<100){ // until the variable i stores value less than 100, the code inside while loop will execute in series
//         printf("Happy Birthday\n");
//         i = i+1; // increases the value of i by 1 each time the loop executes
//     }
//     return 0;
// }

/*
Here we increase the value of i (0) by 1 each time the loop executes, so that at a point of time i can become 100. And when it becomes 100, the loop executes because the condition will become false

This loop is mainly useful when we don't know how many times we want to execute the code.
*/

/*
Note:
    If the condition becomes false, the while loop keeps getting executed. Such loop is called an infinite loop.
*/

//example of an infinite loop is:

// #include <stdio.h>
// int main(){
//     int i = 0;
//     while(i<10){
//         printf("Value of i: %d", i);
//     }
//     return 0;
// }
// Here if we don't increase the value of i by 1, the condition (i<10) will always be true because 0 is less than 10 and it will never become false. so the loop will continue to loop that can create a lag in your system.

// another example is:
#include <stdio.h>
int main(){
    while(2<10){
        printf("Happy Birthday\n");
    }
    return 0;
}

// this works same as the above example. The condition will always be true because 2 is less than 100. so the loop will continue to execute again creating lag in your system.
