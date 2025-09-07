// int a = 1; int b = a;
//     b. int v = 3*3;
//     c. chat dt = '21 dec 2020';

#include <stdio.h>
int main(){
    int a = 1; int b = a;
    int v = 3*3;
    char dt = '21 dec 2020';
    printf("b is %d, v is %d, dt is %c", b, v, dt);
    return 0;
}

// there will be an error. int a = 1; int b = a; is valid. int v = 3*3; is valid. But the char variable can only store one character but there are more that one character ('21 dec 2020'). 
// So, option c is invalid in C.