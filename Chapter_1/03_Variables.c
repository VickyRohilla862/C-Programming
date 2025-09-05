//A variable is a container which stores a value
//eg: In kitchen, we have containers storing Rice, Dal, Sugar, etc. Similar to that, Variables stores value to a constant.
//For example:
/*a = 3;//3 is an integer assigned to a
b = 4.7;//4.7 is a float assigned to b
c = "A";//"A" is a character assigned to c*/
// int, float, char are datatypes. Other than these we will see later.
/*syntax
    data_type variable_name = value;
            or
    data_type variable_name;
    variable_name = value;
*/
//example:
#include <stdio.h>
int main(){
    //int a = 60; //This is the declaration
    int a ; // This is also the declaration
    a = 60; // This is definition or initialization.
    printf("The value of a is %d", a); //printf prints the output to console. %d is used to print integer values. a is the variable name.
    return 0;
}

/*Output:
    The value of a is 60
*/
