/*
If we change the following code:
    #include <stdio.h>
    int sum(int, int);

    int sum(int x, int y){
        printf("The sum is %d\n", x+y);
    }
    int main(){
        int a = 1;
        int b = 2;
        sum(a, b);

        int a1 = 12;
        int b1 = 23;
        sum(a1, b1);

        int a2 = 2;
        int b2 = 27;
        sum(a2, b2);
        return 0;
    }

    output:
        The sum is 3
        The sum is 35
        The sum is 29
    
To:
    #include <stdio.h>
    int sum(int, int);

    int sum(int x, int y){
        //printf("The sum is %d\n", x+y);
        return x+y;
    }
    int main(){
        int a = 1;
        int b = 2;
        int c = sum(a, b);
        printf("%d\n", c);

        int a1 = 12;
        int b1 = 23;
        sum(a1, b1);

        int a2 = 2;
        int b2 = 27;
        sum(a2, b2);
        return 0;
    }

    output:
        3

The return will only work if we don't use a printf statement in the function and we call the function inside a variable in main()
*/