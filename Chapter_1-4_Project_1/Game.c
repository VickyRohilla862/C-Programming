#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int randomNumber = (rand()%100)+1;
    int no_of_guesses = 0;
    int guessed;
    do{
        printf("Guess the number: ");
        scanf("%d", &guessed);
        if(guessed>randomNumber){
            printf("Enter a lower number!\n");
        }else if(guessed<randomNumber){
            printf("Enter a higher number!\n");;
        }
        no_of_guesses++;
    }while(guessed != randomNumber);
    printf("The number is: %d\n", randomNumber);
    printf("You guessed the number in %d guesses\n", no_of_guesses);
    
    return 0;
}