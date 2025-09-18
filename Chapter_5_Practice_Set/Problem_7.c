// 2 * i + 1 = formula for the star logic

#include <stdio.h>
int star(int);
int star(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2*i+1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
int main(){
    int n;
    printf("Enter the number of lines you want to print stars: ");
    scanf("%d", &n);
    star(n);
    return 0;
}