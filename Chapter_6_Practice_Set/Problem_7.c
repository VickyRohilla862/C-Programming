#include <stdio.h>
int change(int);
int main(){
    int i = 20;
    change(i);
    printf("The number is %d in main()\n", i);
    return 0;
}

int change(int x){
    int ten_times = x * 10;
    printf("The number is %d in the function\n", ten_times);
}

/*
output: 
    The number is 200 in the function
    The number is 20 in main()
*/