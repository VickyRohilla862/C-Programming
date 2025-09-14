/*
Syntax:
    for(initialize; test; increment or decrement){
        //code;
    }

1. Initialize -> setting a loop counter to an initial value.
2. Test -> Checking a condition.
3. Increment or Decrement -> Updating the loop counter
*/
// example:
#include <stdio.h>
int main(){
    int n = 6;
    for(int i = 0; i < n; i++){
        printf("The value of i is %d\n", i);
    }
    return 0;
}

/*
Output: 
    The value of i is 0
    The value of i is 1
    The value of i is 2
    The value of i is 3
    The value of i is 4
    The value of i is 5
*/
// if we want to print "The value of i is 6" also, than we have to change i<n to i<=n.