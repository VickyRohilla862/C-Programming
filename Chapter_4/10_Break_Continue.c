/*
BREAK STATEMENT:
The break statement is used to exit to loop irrespective of whether the condition is true or not.
Whether a break statement is encountered inside the loop, the control is selt outside the loop.
*/
//example:
// #include <stdio.h>
// int main(){
//     for(int i = 0; i <= 10; i++){
//         if(i == 6){
//             break;
//         }
//         printf("%d\t", i);
//     }
//     printf("The loop is ended!");
//     return 0;
// }
/*
Output:
    0       1       2       3       4       5       The loop is ended!

The above example should have printed all numbers from 0 to 20 but it printed upto because we added a break statement when i become 6. so the loop ended when i became 6.
*/

/*
CONTINUE STATEMENT:
Continue statement is similar to break statement but instead of exiting the loop, it skips the iteration and jumps to the next iteration.
*/
//example:
#include <stdio.h>
int main(){
    for(int i = 0; i < 15; i++){
        if(i == 5){
            continue;
        }
        printf("%d\t", i);
    }
    printf("The loop is ended!");
    return 0;
}
/*
Output:
    0       1       2       3       4       6       7       8       9       10      11      12      13      14      The loop is ended!
*/
/*
Note:
1. Sometimes, the name of the variable might not indecate the behaviour of the program.
2. "Break" statement completely exits the loop.
3. "Continue" statement skips particular iteration
*/