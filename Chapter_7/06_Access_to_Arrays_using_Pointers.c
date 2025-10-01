/*
Consider the array in the image named 'Access_Using_Pointer.png'

If ptr points to index 0, ptr++ will point to index 1 and so on...
This way we can have an integer pointer pointing to first element of the array like this:
    int *ptr = &arr[0]; // or simple array
    ptr++;
    *ptr;   // will have 9 as its value as the array is {7, 9, 2, 8, 1}

int *ptr = &marks[0]; and int *ptr = marks; are same;
Both stores address of value on 0th index.
*/