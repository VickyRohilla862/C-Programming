#include <stdio.h>
int change(int *);
int change(int *x){
    *x*=10;
    printf("The value after ten times: %d", *x);
}
int main(){
    int a;
    printf("Enter a number to make it ten times: ");
    scanf("%d", &a);
    change(&a);
    return 0;
}