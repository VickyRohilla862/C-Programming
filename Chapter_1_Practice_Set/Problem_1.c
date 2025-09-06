//hard coded input
// #include <stdio.h>
// int main(){
//     int length = 6;
//     int breadth = 4;
//     int area = length * breadth;
//     printf("The area of rectangle with length %d and breadth %d is %d", length, breadth, area);
//     return 0;
// }

// input from user
#include <stdio.h>
int main(){
    int length, breadth;
    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the breadth: ");
    scanf("%d", &breadth);
    int area = length * breadth;
    printf("The area of rectangle with length %d and breadth %d is %d", length, breadth, area);
    return 0;
}