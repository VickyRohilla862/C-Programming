#include <stdio.h>
int main(){
    int i = 47;
    int *j = &i;
    int **k = &j;
    printf("The value of i using pointer to pointer variable: %d", **(k));  // if we use only one * than it will print the value of k, which is the value of j, which is address of i
    return 0;
}