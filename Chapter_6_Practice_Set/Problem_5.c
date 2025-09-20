#include <stdio.h>
int *sum(int a, int b){
    int s = a + b;
    int *sumptr = &s;
    printf("The sum is %d\n", s);
    return sumptr;
}

float *average(int a, int b){
    float avg;
    avg = (a + b) / 2;
    float *avgptr = &avg;
    printf("The average is %.2f\n", avg);
    return avgptr;
}
int main(){
    int x, y;
    int *sum_ptr;
    float *avg_ptr;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    sum_ptr = sum(x, y);
    avg_ptr = average(x, y);
    printf("The address of sum is %u\n", sum_ptr);
    printf("The address of average is %u\n", avg_ptr);
    return 0;
}