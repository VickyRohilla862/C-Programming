#include <stdio.h>
void add(int *a){
    printf("The value of i in add(): %u\n", a);
}
int main(){
    int i = 33;
    int *j = &i;
    printf("The value of i in main(): %u\n", j);
    add(&i);
    return 0;
}
// we can see the same address in add function as we see in main()

/*
The reason you see the same address printed in both main() and add() is because you are passing the address of the same variable (i) to both functions.

In main(), j is a pointer to i, so printing j shows the address of i.
When you call add(&i), you are passing the address of i to the add() function.
In add(), the parameter a receives the address of i, so printing a also shows the address of i.
Since both are referencing the same variable in memory, the address is identical in both functions.
*/