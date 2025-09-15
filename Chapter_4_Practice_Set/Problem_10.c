#include <stdio.h>
int main(){
    int n, prime;
    printf("Enter a number to check fi it is prime or not: ");
    scanf("%d", &n);
    for(int i = 2; i < n; i++){
        if(n%i == 0 && n!=2){
            prime = 1;
            break;
        }else{
            prime = 0;
        }
    }
    if(prime == 1){
        printf("The number is not prime");
    }else if(prime == 0){
        printf("The number is prime");
    }
    return 0;
}