#  _PRINTF:
![printf](img/prnt.png)

```c
- Int _printf(Const Char *Format, ...);
```
### Purpose:
- Mimics The Standard Printf Functionality.
-  the function receives a format (const char *format) and a list of arguments (the magic of variadic functions). So printf inside, take the string format and search for specific patterns, then the pattern that was found it is passed to other function that prints the match pattern
### Parameters:
- Format: A String That Specifies How To Format The Output.
- ...: A Variable Number Of Arguments Corresponding To Format Specifiers.
### Returns:
- The Total Number Of Characters Printed, Or -1 If An Error Occurs.

## Compil command
```c
- gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o print
- ./print
```
## Requirements
- Ubuntu 20.04 LTS
- Vi, vim, emacs
- GCC (GNU Compiler Collection)
- Git, Github
- Betty style.pl and Betty-doc.pl
- Readme.md


## HANDLER:
```c
- Int Handler(Const Char *Str, Va_list List);
```
### Purpose:
- Processes The Format String And Handles Different Specifiers.
### Parameters:
- Str: The Format String.
- List: The List Of Arguments.
### Returns:
- Total Size Of Printed Characters.
## PERCENT_HANDLER:
```c
- Int Percent_handler(Const Char *Str, Va_list List, Int *I);
```
### Purpose:
- Handles Specific Format Specifiers Starting With '%'.
### Parameters:
- Str: The Format String.
- List: The List Of Arguments.
- I: Pointer To The Current Index In The String.
### Returns:
- Number Of Characters Printed For This Specifier.
## HELPER FUNCTIONS:
## _Putchar:
```c
- Int _putchar(Char C);
```
### Purpose:
- Writes A Single Character To Standard Output.
### Supported Format Specifiers:
- %C: Character
- %D And %I: Integer
- %S: Used for handling strings (character arrays).
- %%: Used to print a literal percent sign.
- %B: In some extended versions of printf for binary output.
### Usage Example:
```c
- #include "main.h"
int main(void)
{
_printf("Hello %s! Number: %d\n", "World", 42);
return (0);
}
```
## _Print:
```c
- int print(char *str);
```
### Purpose:
- Return: string length.
### Parameters:
- char *str: A pointer to an array of characters (string) that should be printed. This pointer must point to a null-terminated string.
### Returns:
- The function returns an integer (int) representing the length of the string, i.e., the number of characters in the string before the null terminator.
### Usage example:
```c 
#include <stdio.h>

int print(char *str);

int main() {
char message[] = "Hello, World!";
int length = print(message);
printf("The length of the string is: %d\n", length);
return 0;
}

int print(char *str) {
int length = 0;
while (*str != '\0') {
putchar(*str);
str++;
length++;
}
putchar('\n'); // To add a newline after printing
return length;
}
```
### Code Explanation:
- 1: Initialization: The function starts by initializing a length variable to zero. This variable will be used to count the number of characters in the string.
- 2: While Loop: The while loop iterates through each character of the string until it encounters the null character ('\0'). For each iteration:
- The current character is displayed using putchar.
- The str pointer is incremented to move to the next character.
- The length variable is incremented to count the displayed character.
- 3: Newline: After traversing the entire string, a newline is added to separate outputs.
- 4: Return: The function returns the total length of the string.


-This Implementation Supports Basic Formatting For Characters, Strings, And Integers, Providing A Foundational Understanding Of How Formatted Output Works In C.
 
## Testing
**Memory check with Valgrind**
```c
==293287== Memcheck, a memory error detector
==293287== Copyright (C) 2002-2022, and GNU GPL'd, by Julian Seward et al.
==293287== Using Valgrind-3.22.0 and LibVEX; rerun with -h for copyright info
==293287== Command: ./print
==293287== 
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
binary:1100010
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[%u]
Unsigned:[2147484671]
Unsigned octal:[%o]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[%x, %X]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[%p]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
==293287== 
==293287== HEAP SUMMARY:
==293287==     in use at exit: 0 bytes in 0 blocks
==293287==   total heap usage: 1 allocs, 1 frees, 1,024 bytes allocated
==293287== 
==293287== All heap blocks were freed -- no leaks are possible
==293287== 
==293287== For lists of detected and suppressed errors, rerun with: -s
==293287== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
## Man Page

**Command to execute Man Page: man ./man_3_printf**
```c
# My man page _Printf
- _printf \- Produce Output According To A Specified Format
- include "main.h"
- int _printf(const char *format, ...);
##Description
- **_printf**
- is a custom function that produces output according to a specified format. It writes output to the standard output stream, stdout.
- **format**
- parameter is a character string composed of zero or more directives. The following conversion specifiers are supported:
- **%c**
- prints a single chararcter
- **%s**
- prints a string of characters.
- **%%**
- prints a literal '%' character.
- **%d, %i**
- prints a signed decimal integer.
- The function does not handle the following:
- Buffer handling as in the C library printf function.
- Flag characters.
- Field width.
- Precision.
- Length modifiers.
The function uses an internal buffer to optimize character writing. The buffer is flushed either when its maximum capacity is reached or at the end of execution.
## Return value
- The function returns the number of characters printed (excluding the null byte used to end output to strings).
## Examples
- include "main.h"
int main() {
    _printf("Character: %c\n", 'A');
    _printf("String: %s\n", "Hello, World!");
    _printf("Percent: %%\n");
    _printf("Integer: %d\n", 123);
    return 0;
}



## See also
- printf (3)
## Author
Patrick Michel And Matteo Foti

```
## Flowchart
![Flowchart](img/flotchart.jpg)

## Author
**Patrick Michel And Matteo Foti**

