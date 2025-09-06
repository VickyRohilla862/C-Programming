/*
An arithmatic operation between:
    int and int result in int
    int and float result in float
    float and float result in float

example:
    5/2 becomes 2 as both the operands are integer.
    5.0/2 becomes 2.5 as one of the operands is float.
    2/5 becomes 0 as both the operands are integer.
*/

/*
Note:
    In programming, type compatibility is crucial.
    For int a = 3.5;, the float 3.5 will be demoted to 3, losing the fractional part because a is an integer. Conversely, for float a = 8;, the integer 8 is promoted to 8.0, matching the float type of a and retaining precision
    int a = 3.5; // in this case 3.5(float) will be demoted to 3(int) because a is not able to store float values
    float a = 8; // a will be promoted to 8.0 | 8 -> 8.0 (promoted to float)
*/