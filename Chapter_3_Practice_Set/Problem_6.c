// Write a program to find greatest of 4 numbers entered by the user
#include <stdio.h>
int main(){
    int a, b, c, d, greatest;
    printf("Enter first integer number: ");
    scanf("%d", &a);
    printf("Enter second integer number: ");
    scanf("%d", &b);
    printf("Enter third integer number: ");
    scanf("%d", &c);
    printf("Enter forth integer number: ");
    scanf("%d", &d);
    if(a>b && a>c && a>d){
        greatest = a;
    }else if(b>a && b>c && b>d){
        greatest = b;
    }else if(c>a && c>b && c>d){
        greatest = c;
    }else if(d>a && d>b && d>c){
        greatest = d;
    }
    printf("The greatest number is %d", greatest);
    return 0;
}