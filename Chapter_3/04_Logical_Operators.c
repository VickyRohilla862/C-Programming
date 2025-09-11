// && (AND), || (OR), and ! (NOT) are three logical operators in C.
// They are used to provide logic to our C Program.

/*
USAGE OF LOGICAL OPERATORS:
    1. && (AND) -> is true when both the conditions are true.
        a. '1' && '0' is evaluated as false.
        b. '0' && '0' is also evaluated as false.
        c. '1' && '1' is evaluated as true.
    
    2. || (OR) -> is true when at least one of the conditions is true.
        a. '1' && '0' is evaluated as true.
        b. '0' && '0' is evaluated as false.
        c. '1' && '1' is evaluated as true.

    3. ! (NOT) -> returns true is the given false and false if given true
        example:*/
            #include <stdio.h>
            int main(){
                int a = 1;
                int b = 0;
                printf("%d\n", !a);
                printf("%d", !b);
                return 0;
            }
        /*output:
            0
            1
        */

//As the number of conditions increases, the level of indentation increases. This reduces readability. Logical operators come to rescue in such situation.

//example:
    #include <stdio.h>
    int main(){
        int money = 1; //1 represents true
        int rainy_outside = 0; // 0 represents false
        // you'll buy an umbrella if you have money anf the climate is rainy. So:
        if(rainy_outside == 1){
            if(money == 1){
                printf("You can buy an umbrella");
            }else{
                printf("You dont have money");
            }
        }else{
            printf("it's not raining so you dont need to buy an umbrella");
        }
        return 0;
    }

//We can write it as:
    #include <stdio.h>
    int main(){
        int money = 1;
        int rainy_outside = 0;
        if(rainy_outside == 1 && money == 1){
            printf("You can buy an umbrella");
        }else if(rainy_outside == 1 && money == 0){
            printf("You dont have money");
        }else{
            printf("it's not raining so you dont need to buy an umbrella");
        }
        return 0;
    }

//Both works same.
