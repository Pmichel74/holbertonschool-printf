##  _PRINTF:
![printf](/img/prnt.png)

- Int _printf(Const Char *Format, ...);
###Purpose:
- Mimics The Standard Printf Functionality.
###Parameters:
- Format: A String That Specifies How To Format The Output.
- ...: A Variable Number Of Arguments Corresponding To Format Specifiers.
###Returns:
- The Total Number Of Characters Printed, Or -1 If An Error Occurs.
##HANDLER:
- Int Handler(Const Char *Str, Va_list List);
###Purpose:
- Processes The Format String And Handles Different Specifiers.
###Parameters:
- Str: The Format String.
- List: The List Of Arguments.
###Returns:
- Total Size Of Printed Characters.
##PERCENT_HANDLER:
- Int Percent_handler(Const Char *Str, Va_list List, Int *I);
###Purpose:
- Handles Specific Format Specifiers Starting With '%'.
###Parameters:
- Str: The Format String.
- List: The List Of Arguments.
- I: Pointer To The Current Index In The String.
###Returns:
- Number Of Characters Printed For This Specifier.
##HELPER FUNCTIONS:
###_Putchar:
- Int _putchar(Char C);
###Purpose:
- Writes A Single Character To Standard Output.
###Supported Format Specifiers:
- %C: Character
- %C: Character
- %D And %I: Integer
- %D And %I: Integer
###Usage Example:
- #include "main.h"
int main(void)
{
    _printf("Hello %s! Number: %d\n", "World", 42);
    return (0);
}
- This Implementation Supports Basic Formatting For Characters, Strings, And Integers, Providing A Foundational Understanding Of How Formatted Output Works In C.
## Author
**Patrick Michel And Matteo Foti**
## Screenshots
![App Screenshot](https://lanecdr.org/wp-content/uploads/2019/08/placeholder.png)
