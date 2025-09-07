// like we saw in 04_Type_Conversion.c that C automatically changes the type of value into another automatically according to the variable type
//  for eg: 
//     5/2 becomes 2 as both the operands are integer.
//     5.0/2 becomes 2.5 as one of the operands is float.
//     2/5 becomes 0 as both the operands are integer.

// In type casting we can manually change the type of the value and we can do this somehow like this:
    #include <stdio.h>
    int main(){
        int n = 45;
        float m = 32.23;
        n = (int) m; // n holds 32 now

        printf("The value of n is %d and the value of m is %.2f", n, m); // we use %.2f to print only 2 decimal values of a float variables.
        return 0;
    }
// output: 
// The value of n is 32 and the value of m is 32.23