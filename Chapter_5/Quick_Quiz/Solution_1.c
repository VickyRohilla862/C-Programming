#include <stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();

void goodMorning(){
    printf("Good Morning!\n");
}

void goodAfternoon(){
    printf("Good Afternoon!\n");
}

void goodNight(){
    printf("Good Night!\n");
}
int main(){
    goodMorning();
    goodAfternoon();
    goodNight();
    return 0;
}