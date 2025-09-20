#include <stdio.h>
int main(){
    int i = 25;
    int *j = &i;
    printf("The address of i: %u\n", j);
    printf("The value of i: %d\n", *j);
    return 0;
}