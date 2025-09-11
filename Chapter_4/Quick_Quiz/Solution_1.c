// answer 1
#include <stdio.h>
int main(){
    int i = 0;
    while(i<=20){
        if(i>=10){
            printf("%d\n", i);
        }
        i = i+1;
    }
    return 0;
}

// answer 2
#include <stdio.h>
int main(){
    int i = 0;
    int nn = 10;
    while(i <= 10){
        printf("%d\n", nn);
        nn = nn+1;
        i = i+1;
    }
    return 0;
}