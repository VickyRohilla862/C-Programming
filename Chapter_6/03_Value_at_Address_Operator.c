/*
The 'value at address' or '*' operator is used to fetch the value present at a given memory address.
It is denoted by '*'.
Looking at Pointer.png:
    *(&i) = 72
    *(&j) = 87994
If we do:
    printf("The value at j is %d", *j);    // used %d because j is storing an integer value
output:
    The value at j is 72

Every person in the world have an address(house). Consider a builder is constructing a house. The builder also have a house.
Similarly, i has an address(87994 in image), and the address of i is stored at j.
It doesn't mean  j don't have any address. It is also stored at 87998.
*/