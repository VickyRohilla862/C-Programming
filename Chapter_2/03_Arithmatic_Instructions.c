// Arithmatic instructions perform mathematic operations
/*
some commonly used operators are:
    +(Addition)
    -(Subtraction)
    *(Multiplication)
    /(Division)
    %(Modulus)
*/
// x + y = z (Here, x and y are operands, + and = are operators and y is the final result)

/*
    Note:
        1. Operands can be float/int etc. +,-,*,/ are arithmatic operators.
            int b = 2, c = 3;
            int z; z = b * c; // valid
            int z; b * c = z; // invalid
        2. % is the modular division operator
            returns the remainder
            cannot be applied to float
            sign will be same as of the numerator (-5 / 2 = -1)
        3. No operator is assumed to be present
            int i = ab; // invalid
            int i = a * b; // valid
        4. There is no operator to perform exponentiation in C. However we use pow(x, y) from <math.h> file (more in upcoming chapters).
*/