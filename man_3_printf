.TH PRINTF 3 "March 2025" "Holberton School" "Library Functions Manual"
.SH NAME
printf \- formatted output conversion

.SH SYNOPSIS
.B #include "main.h"
.BI "int _printf(const char *format, ...);"

.SH DESCRIPTION
The
.B _printf
function produces output according to a
.I format
string. The format string is composed of zero or more directives: ordinary characters (which are copied to the output) and conversion specifications (which specify how subsequent arguments are formatted and printed).

A conversion specification begins with a
.B %
and is followed by a character that determines the format. The supported format specifiers are:

.TP
.B %c
Prints a single character.
.TP
.B %s
Prints a string of characters.
.TP
.B %d, %i
Prints a signed decimal integer.
.TP
.B %%
Prints a literal % character.

.SH RETURN VALUE
The function returns the number of characters printed (excluding the null byte used to end output strings). If an error occurs, it returns -1.

.SH EXAMPLES
.nf
.B #include "main.h"
.B #include <stdio.h>

.B int main(void)
{
    _printf("Hello, %s!\n", "world");
    _printf("Character: %c, Number: %d\n", 'A', 42);
    return (0);
}
.fi

.SH NOTES
The
.B _printf
function does not support all the features of the standard
.B printf
function in the C standard library. It is a custom implementation with limited format specifiers.

.SH SEE ALSO
.BR printf (3),
.BR sprintf (3),
.BR snprintf (3)

.SH AUTHORS
Arnaud Tilawat
Clément Gibot

