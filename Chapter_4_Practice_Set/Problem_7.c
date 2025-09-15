#include <stdio.h>
int main(){
    int sum = 0;
    for(int i = 1; i <= 10; i++){
        sum += (8*i);
    }
    printf("Sum of all the elements in the table of 8 : %d", sum);
    return 0;
}