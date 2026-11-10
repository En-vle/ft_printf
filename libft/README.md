*This project has been created as part of the 42 curriculum by enviale.*

# Libft

## Description

**Libft** is my very first own C library. The goal of the project is to understand how the standard C functions work by reimplementing them from scratch, then to extend them with additional utility functions that will be reused in later 42 projects.

The library is compiled into a static archive, `libft.a`, using the `ar` command. It is split into three parts:

**Part 1 - Libc functions**
Reimplementation of standard functions, with the same prototypes and behaviour as the originals, prefixed by `ft_`:
- Character checks and conversions: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- String functions: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
- Memory functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- Conversion: `ft_atoi`

**Part 2 - Additional functions**
Functions that are not in the libc or exist in a different form:
- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`
- `ft_strmapi`, `ft_striteri`
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

**Part 3 - Linked list**
Functions to manipulate a singly linked list built on the `t_list` structure (`content` / `next`):
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
- `ft_lstsize`, `ft_lstlast`
- `ft_lstdelone`, `ft_lstclear`
- `ft_lstiter`, `ft_lstmap`

## Instructions

**Compilation**

The library is compiled with `cc` and the flags `-Wall -Wextra -Werror`.

```bash
make          # builds libft.a
make clean    # removes object files
make fclean   # removes object files and libft.a
make re       # fclean + all
```

**Usage in a project**

Include the header in your source files:

```c
#include "libft.h"
```

Then compile and link against the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## Resources

**Classic references**
- `man` pages of the reimplemented functions (`man strlen`, `man memmove`, etc.)
- *The C Programming Language*
- The 42 Norm
- Peer discussions with other 42 students

**Use of AI**

AI was used as a support tool, not as a way to get the project done for me:

- **README.md**: this README was written with the help of AI (structure and wording). I reviewed and adapted it to my project.
- **Linked list test mains**: the `main` programs I used to test the linked list functions (`ft_lst*`) were written with the help of AI. These test files are not part of the submitted repository.
- **Hardest functions**: for the most difficult functions, I first wrote my own version, then asked AI for its version and compared the two (logic, edge cases, memory handling, readability, Norm compliance). This comparison helped me understand other approaches and find mistakes or edge cases I had missed, and I kept my own code and made sure I could explain every line of it.
The functions concerned are: `ft_split`, `ft_strtrim` and `ft_lstmap`.