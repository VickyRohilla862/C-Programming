//Write a program to determine whether a charactered entered by the user is lowercase or not.
// we will use the ascii code for this program

#include <stdio.h>
int main(){
    char ch;
    printf("Enter a single character: ");
    scanf("%c", &ch);
    // printf("%d", ch);// prints the ascii code of a character. we will check the ascii code for 'a' and 'z'.
    //a = 97, z = 122. So:
    if(ch >= 97 && ch <= 122){
        printf("The character is lowecase");
    }else{
        printf("The character is not lowercase.");
    }
    return 0;
}