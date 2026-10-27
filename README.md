*This project has been created as part of the 42 curriculum by aabuFarw.*

# ft_printf

*Because ft_putnbr() and ft_putstr() aren't enough*

## Description

The **ft_printf** project is a re-implementation of the C standard library's `printf` function. The primary objective is to learn about variadic functions in C (`stdarg.h`), formatted string parsing, and modular C programming practices.

This implementation mimics the standard `printf` behavior and supports the following format specifiers:

* `%c`: Prints a single character.
* `%s`: Prints a string of characters.
* `%p`: Prints a pointer memory address in hexadecimal format (`0x...`).
* `%d`: Prints a signed decimal integer.
* `%i`: Prints an integer in base 10.
* `%u`: Prints an unsigned decimal integer.
* `%x`: Prints a number in lowercase hexadecimal format.
* `%X`: Prints a number in uppercase hexadecimal format.
* `%%`: Prints a literal percent sign.

## Instructions

### Compilation

The project uses a standard `Makefile` to compile the library. To build `libftprintf.a`, run:

```bash
make
```

Available Makefile rules:

* `make`: Compiles the source files and generates `libftprintf.a`.
* `make clean`: Removes all compiled object files (`.o`).
* `make fclean`: Removes object files and the `libftprintf.a` static library.
* `make re`: Recompiles the library from scratch.

### Execution & Usage

To use `ft_printf` in your project, include the header file in your C files and link the library when compiling:

```c
#include "ft_printf.h"

int main(void)
{
    int count;

    count = ft_printf("Hello %s! Number: %d, Hex: %x, Pointer: %p\n", "world", 42, 255, &count);
    ft_printf("Printed %d characters.\n", count);
    return (0);
}
```

Compile your code alongside `libftprintf.a`:

```bash
gcc -Wall -Wextra -Werror main.c -L. -lftprintf -o program
./program
```

## Algorithm and Data Structure Explanation

### Data Structure & Concepts

* **Variadic Arguments (`va_list`):** Standard C macros (`va_start`, `va_arg`, `va_copy`, `va_end`) from `<stdarg.h>` are used to process an arbitrary number of arguments passed to `ft_printf`.
* **Static Character Tracking / Return Value:** A counter variable is passed by reference or accumulated across function calls to keep track of the total number of characters output to stdout via system calls (`write`), ensuring compliance with `printf`'s return value requirement.

### Algorithm Logic

1. **Format Parsing:** The format string is traversed sequentially.
2. **Specifier Dispatching:** When a `%` token is encountered, the next character is parsed to select the appropriate output handler function (`c`, `s`, `p`, `d`, `i`, `u`, `x`, `X`, `%`).
3. **Number System Conversion:**
   * Signed integers (`%d`, `%i`) handle negative values by printing the minus sign and casting to standard integer representation.
   * Unsigned integers (`%u`) and hexadecimal values (`%x`, `%X`, `%p`) use recursive base conversion algorithms (base 10 and base 16 respectively).
   * Pointer addresses (`%p`) evaluate `NULL` pointers safely and format non-null memory addresses by prepending `0x` to the lowercase base-16 conversion.
4. **Output & Return:** Each byte successfully output using the `write(1, ...)` system call updates the global character count, which is returned upon completion.

## Resources

### References

* [Linux Manual Page: printf(3)](https://man7.org/linux/man-pages/man3/printf.3.html)
* [C Reference: Variadic functions (`stdarg.h`)](https://en.cppreference.com/w/c/variadic)
* [42 School Norminette Rules](https://github.com/42School/norminette)

### AI Usage

* **Tasks:** Formatting, structuring, and generating the documentation content for `README.md` according to the 42 subject requirements.
* **Parts of Project:** Documentation generation only (no implementation code was written by AI).