// INTEGER
//Integer datatype allows a variable to store only integer values.
/*example: 
    int a = 6;  is valid
    but int a = 'a'; or int a = 1.7; is not valid
*/ 

//FLOAT
//Float datatype allows a variable to store only float or decimal values.
/*example:
    float a = 7.2;  is valid
    but float a = 'a'; or float a = 7; is not valid
*/

//CHARACTER
//character datatype allows a variable to store only characters or symbols values.
/*example:
    char a = 'a';  is valid
    but char a = 1; or char a = 2.5; is not valid
*/
//character value is kept in single inverted commas. Double inverted commas are not allowed.

// Memory used by various data types:
/*
    integer: it usually takes 4 bytes(32 bit).
    float: it usually takes 4 bytes(32 bit).
    character: it usually takes 1 byte(8 bits).
*/

// We can check how much memory a datatype is using by "sizeof()" finction
// example:

#include <stdio.h>
int main(){
    printf("Size of integer: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of character: %zu bytes\n", sizeof(char));
    return 0;
}

/*output:
    Size of integer: 4 bytes
    Size of float: 4 bytes
    Size of character: 1 bytes
*/