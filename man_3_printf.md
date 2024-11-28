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
