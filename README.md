# holbertonschool-printf
**_Printf custom function**

**Description**

The purpose of the project is to write a custom _printf function that replicates the behavior of the standard printf function.
All the code use Betty style.
The function is only a part of the printf function.

**Features**

Supports the int type the specifiers %d,%i and the char type with %s,%c
%% prints a '%' character

**Flowchart**

![flowchart_printf drawio (1)](https://github.com/user-attachments/assets/a6d51070-33dd-4f66-9895-b4facc05bfd8)

**Installation**

1 - Clone the repository on your machine:
	```
	git clone https://github.com/clementgibot25/holbertonschool-printf.git
	```
2 - Use this command to compile the program:
	```
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
	```
3 - Run the output files to display it's content:
	```
	./a.out
	```

**File description**

_printf.c - Contains the function _printf().

define_functions.c - Contains all the functions used in the _printf function.
The functions put in this file are used to print the strings and numbers

main.h - Contains all the prototypes and headers of the project.

man_3_printf - Manual of the function _printf.

**Usage**

```
#include "main.h"

int (main)
{
printf("Hello world\n");
printf("I am %d years old\n", 23);
return (0);
}
```

The output of this would results to
```
Hello world
I am 23 years old
```

**Authors**

Clément Gibot, Arnaud Tilawat