#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...) {
    int count = 0;
    va_list args;
    va_start(args, format);

    while (*format) {
        if (*format == '%') {
            format++;
            if (*format == 'c') {
                _putchar(va_arg(args, int));
            } else if (*format == 's') {
                write(1, va_arg(args, char *), strlen(va_arg(args, char *)));
            } else if (*format == '%') {
                _putchar('%');
            } else {
                _putchar('%');
                _putchar(*format);
            }
        } else {
            _putchar(*format);
        }
        format++;
        count++;
    }

    va_end(args);
    return count;
}