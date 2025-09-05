/*
1. \n: Newline. Moves the cursor to the beginning of the next line.
2. \t: Horizontal Tab. Inserts a horizontal tab space.
3. \r: Carriage Return. Moves the cursor to the beginning of the current line.
4. \b: Backspace. Moves the cursor one position backward, potentially erasing the character at that position.
5. \f: Form Feed. Moves the cursor to the beginning of the next logical page (often used for printing).
6. \v: Vertical Tab. Inserts a vertical tab space.
7. \a: Alert (Bell). Generates an audible or visual alert (e.g., a beep).
8. \\: Backslash. Represents a literal backslash character.
9. \': Single Quote. Represents a literal single quote character.
10. \": Double Quote. Represents a literal double quote character.
11. \?: Question Mark. Represents a literal question mark character. This is primarily for resolving trigraphs in older C standards.
12. \nnn: Octal representation. Represents a character with the ASCII value equivalent to the octal number nnn. nnn can be one to three octal digits.
13. \xhh: Hexadecimal representation. Represents a character with the ASCII value equivalent to the hexadecimal number hh. hh can be one or more hexadecimal digits.
14. \0: Null Character. Represents the null terminator, used to mark the end of a C string.
*/