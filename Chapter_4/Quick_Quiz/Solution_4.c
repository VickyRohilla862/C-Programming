#include <stdio.h>
int main(){
    int i;
    printf("How many natural numbers do you want to print in reverse: ");
    scanf("%d", &i);
    for(i; i; i--){
        printf("%d\n", i);
    }
    return 0;
}