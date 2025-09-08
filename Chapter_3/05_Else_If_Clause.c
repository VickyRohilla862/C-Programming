// Instead of usinf multiple if statements, we can also use else if along with it.
// Thus, formatting an if-else of-else ladder.

/*
Syntax:
    if{
        //statements
    }else if{
        //statements
    }else{
        //statements
    }
*/

//example:
#include <stdio.h>
int main(){
    int age = 65;
    if(age>60){
        printf("You can drive and you are a senior citizen.");
    }else if(age>18){
        printf("You can drive");
    }else{
        printf("You cannot drive");
    }
    return 0;
}

//output: You can drive and you are a senior citizen.

// If we change the age from 65 to greater then 18 and less than 65, the output will be:
//    You can drive

/*
Note:
    1. Using if-else if-else ladder reduces indentations.
    2. The last "else" is optional
    3. Also there can be any number of "else if"
    4. Last else is executed only if all conditions are false.
*/