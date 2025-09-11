//hard coded input
#include <stdio.h>
int main(){
    int length = 6;
    int breadth = 4;
    int area = length * breadth;
    printf("The area of rectangle with length %d and breadth %d is %d", length, breadth, area);
    return 0;
}

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

/*
input:
5
6
*/

/*
Output:
    Enter the length: 5
    Enter the breadth: 6
    The area of rectangle with length 5 and breadth 6 is 30
*/