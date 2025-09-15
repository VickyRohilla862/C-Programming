#include <stdio.h>
int main(){
    int n, factorial = 1, i = 1;
    printf("Enter the number you want to find the factorial of: ");
    scanf("%d", &n);
    while(i <= n){
        factorial *= i;
        i++;
    }
    printf("The factorial of %d is %d\n", n, factorial);
    return 0;
}