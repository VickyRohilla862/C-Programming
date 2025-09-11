// program to print "n" natural numbers
#include <stdio.h>
int main(){
    int n, i = 1;
    printf("Enter how many natural numbers you want to print: ");
    scanf("%d", &n);
    do{
        printf("%d\n", i);
        i++;
    }while(i <= n);
    return 0;
}