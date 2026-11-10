*This project has been created as part of the 42 curriculum by enviale.*

# ft_printf

## Description

**ft_printf** is a recode of the libc `printf()` function. The goal of the project is to learn how **variadic functions** work in C (a variable number of arguments, handled with `stdarg.h`) and to build a well-structured, extensible piece of code.

The project produces a static library, `libftprintf.a`, containing:

```c
int ft_printf(const char *format, ...);
```

Like the original, it returns the number of characters printed. The buffer management of the original `printf()` is not implemented: output is done directly with `write`.

**Handled conversions**

| Conversion | Description |
|------------|-------------|
| `%c` | A single character |
| `%s` | A string |
| `%p` | A `void *` pointer, in hexadecimal |
| `%d` | A signed decimal number (base 10) |
| `%i` | A signed integer (base 10) |
| `%u` | An unsigned decimal number (base 10) |
| `%x` | A number in lowercase hexadecimal |
| `%X` | A number in uppercase hexadecimal |
| `%%` | A percent sign |

## Instructions

**Compilation**

The library is compiled with `cc` and the flags `-Wall -Wextra -Werror`.

```bash
make          # builds libftprintf.a
make clean    # removes object files
make fclean   # removes object files and libftprintf.a
make re       # fclean + all
```

**Usage**

Include the header in your source file:

```c
#include "ft_printf.h"
```

Then compile and link against the library:

```bash
cc -Wall -Wextra -Werror ft_printf.c ft_function.c libft/ft_strlen.c libft/ft_itoa.c ft_fct_hexa.c ft_uitoa.c ft_ulitoa16.c
```

**Example**

```c
ft_printf("Hello %s, you have %d new messages (%x)\n", "world", 42, 255);
```

## Algorithm and data structure

**Algorithm**

`ft_printf` reads the format string one character at a time, from left to right:

1. If the character is not `%`, it is written as is with `write`.
2. If the character is `%`, the next character is read. It is the **conversion specifier** (`c`, `s`, `p`, `d`, `i`, `u`, `x`, `X` or `%`).
3. The matching handler function is called. It fetches the next argument with `va_arg`, with the right type, and prints it.
4. Every handler returns the number of characters it wrote. `ft_printf` adds these values up and returns the total at the end.

The conversion to a given base (10 for `%d`, `%i`, `%u`, 16 for `%x`, `%X`, `%p`) is done by one generic function which receives the number and the base characters (`"0123456789"`, `"0123456789abcdef"`, `"0123456789ABCDEF"`). This avoids duplicating the same code for every conversion.

**Data structure**

No complex data structure is needed. The only structure used is the `va_list`, which gives access to the variable arguments one after another with `va_start`, `va_arg` and `va_end`.

**Justification**

- **Direct writing, no buffer**: the subject asks not to implement the buffer management of the original `printf()`. 
- **Return value**: counting the characters in each handler guarantees that `ft_printf` returns the same value as the original `printf()`.

## Resources

**Classic references**
- `man 3 printf`, to know the exact behaviour of each conversion
- `man 3 stdarg` (and `va_start`, `va_arg`, `va_copy`, `va_end`), to learn how variadic functions work
- `man 2 write`
- Introduction and tutorials on the `va_*` macros and variadic functions in C found on Google
- Peer discussions with other 42 students

**Use of AI**

AI was used as a support tool, not as a way to get the project done for me:

- **README.md**: this README was written with the help of AI (structure and wording). I reviewed and adapted it to my project.