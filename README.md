*This project has been created as part of the 42 curriculum by yoben-ch.*

# Libft

## Description

Libft is a custom C static library created for the 42 curriculum. Its goal is to
reimplement a selection of standard C library functions, add useful string and
memory utilities, and provide a small linked-list API that can be reused in later
C projects.

The project builds a static archive named `libft.a`. All source files are written
in C, follow the 42 Norm, and are compiled with `cc` using `-Wall -Wextra -Werror`.

## Library Details

This library contains three groups of functions.

### Libc Reimplementations

These functions reproduce the behavior of their standard C library equivalents,
using the `ft_` prefix:

- Character checks and conversion: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`,
  `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- Memory functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`,
  `ft_memchr`, `ft_memcmp`, `ft_calloc`
- String functions: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`,
  `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
- Conversion: `ft_atoi`

The character classification functions return `1` when the character matches
the tested class and `0` otherwise, as required by the subject.

### Additional Functions

These functions provide common operations that are useful in later projects:

- `ft_substr`: creates a substring from a string
- `ft_strjoin`: joins two strings into a new allocated string
- `ft_strtrim`: trims characters from the beginning and end of a string
- `ft_split`: splits a string into a NULL-terminated array of strings
- `ft_itoa`: converts an integer to a string
- `ft_strmapi`: creates a new string by applying a function to each character
- `ft_striteri`: applies a function to each character in place
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: write output
  to a file descriptor

### Linked List Functions

The library defines the following list structure in `libft.h`:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
```

It also implements these list helpers:

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

## Instructions

Compile the library from the repository root:

```sh
make
```

This creates:

```text
libft.a
```

Clean object files:

```sh
make clean
```

Clean object files and the static library:

```sh
make fclean
```

Rebuild the project from scratch:

```sh
make re
```

To use the library in another C file, include the header and link the archive:

```c
#include "libft.h"
```

```sh
cc -Wall -Wextra -Werror main.c libft.a
```

## Project Rules

- No global variables are used.
- Helper functions, when needed, are declared `static`.
- The library is created with `ar`.
- `libtool` is not used.
- The Makefile provides the required rules: `all`, `clean`, `fclean`, and `re`.
- The submitted files are the Makefile, `libft.h`, and `ft_*.c` source files.

## Resources

- `man` pages for the standard C library functions reimplemented in this project
- The 42 Libft subject, version 19.2
- The OpenBSD manual pages for `strlcpy` and `strlcat`
- The GNU C Library documentation
- The C reference documentation at cppreference.com

