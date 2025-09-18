#include <stdio.h>
// sum(n) = 1 + 2 + 3 + ... + n
// sum(n) = 1 + 2 + 3 + ... + (n-1) + n
// sum(n) = sum(n-1) + n
// dry run will be same as in Factorial_Dry_Run.png
int sum(int);
int sum(int n){
    if(n == 1 || n == 0) return 1;
    int s = sum(n-1) + n;
    return s;
}
int main(){
    int n;
    printf("Enter the natural number you want to sum upto: ");
    scanf("%d", &n);
    printf("The sum of numbers from 1 to %d is %d", n, sum(n));
    return 0;
}