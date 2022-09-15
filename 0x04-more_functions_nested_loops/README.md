0x04. C - More functions, more nested loops
===========================================

Tasks
-----

### 0\. isupper

mandatory

Write a function that checks for uppercase character.

-   Prototype: `int _isupper(int c);`
-   Returns `1` if `c` is uppercase
-   Returns `0` otherwise

FYI: The standard library provides a similar function: `isupper`. Run `man isupper` to learn more.

```
julien@ubuntu:~/0x04$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
julien@ubuntu:~/0x04$ ./0-isuper
A: 1
a: 0
julien@ubuntu:~/0x04$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x04-more_functions_nested_loops`
-   File: `0-isupper.c`

 Done? Help Check your code

### 1\. isdigit

mandatory

Write a function that checks for a digit (`0` through `9`).

-   Prototype: `int _isdigit(int c);`
-   Returns `1` if `c` is a digit
-   Returns `0` otherwise

FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.

```
julien@ubuntu:~/0x04$ cat 1-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit
julien@ubuntu:~/0x04$ ./1-isdigit
0: 1
a: 0
julien@ubuntu:~/0x04$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x04-more_functions_nested_loops`
-   File: `1-isdigit.c`

 Done? Help Check your code

### 2\. Collaboration is multiplication

mandatory

Write a function that multiplies two integers.

-   Prototype: `int mul(int a, int b);`

```
julien@ubuntu:~/0x04$ cat 2-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-mul.c -o 2-mul
julien@ubuntu:~/0x04$ ./2-mul
100352
-1646592
julien@ubuntu:~/0x04$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x04-more_functions_nested_loops`
-   File: `2-mul.c`

 Done? Help Check your code

### 3\. The numbers speak for themselves

mandatory

Write a function that prints the numbers, from `0` to `9`, followed by a new line.

-   Prototype: `void print_numbers(void);`
-   You can only use `_putchar` twice in your code

```
julien@ubuntu:~/0x04$ cat 3-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers();
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers
julien@ubuntu:~/0x04$ ./3-print_numbers | cat -e
0123456789$
julien@ubuntu:~/0x04$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x04-more_functions_nested_loops`
-   File: `3-print_numbers.c`

 Done? Help Check your code

### 4\. I believe in numbers and signs

mandatory

Write a function that prints the numbers, from `0` to `9`, followed by a new line.

-   Prototype: `void print_most_numbers(void);`
-   Do not print `2` and `4`
-   You can only use `_putchar` twice in your code

```
julien@ubuntu:~/0x04$ cat 4-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_most_numbers();
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_most_numbers.c -o 4-print_most_numbers
julien@ubuntu:~/0x04$ ./4-print_most_numbers
01356789
julien@ubuntu:~/0x04$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x04-more_functions_nested_loops`
-   File: `4-print_most_numbers.c`

 Done? Help Check your code

### 5\. Numbers constitute the only universal language

mandatory

Write a function that prints 10 times the numbers, from `0` to `14`, followed by a new line.

-   Prototype: `void more_numbers(void);`
-   You can only use `_putchar` three times in your code

```
julien@ubuntu:~/0x04$ cat 5-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    more_numbers();
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-more_numbers.c -o 5-more_numbers
julien@ubuntu:~/0x04$ ./5-more_numbers
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
julien@ubuntu:~/0x04

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x04-more_functions_nested_loops`
-   File: `5-more_numbers.c`

 Done? Help Check your code

### 6\. The shortest distance between two points is a straight line

mandatory

Write a function that draws a straight line in the terminal.

-   Prototype: `void print_line(int n);`
-   You can only use `_putchar` function to print
-   Where `n` is the number of times the character `_` should be printed
-   The line should end with a `\n`
-   If `n` is `0` or less, the function should only print `\n`

```
julien@ubuntu:~/0x04$ cat 6-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-print_line.c -o 6-lines
julien@ubuntu:~/0x04$ ./6-lines | cat -e
$
__$
__________$
$
julien@ubuntu:~/0x04$

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x04-more_functions_nested_loops`
-   File: `6-print_line.c`

 Done? Help Check your code

### 7\. I feel like I am diagonally parked in a parallel universe

mandatory

Write a function that draws a diagonal line on the terminal.

-   Prototype: `void print_diagonal(int n);`
-   You can only use `_putchar` function to print
-   Where `n` is the number of times the character `\` should be printed
-   The diagonal should end with a `\n`
-   If `n` is `0` or less, the function should only print a `\n`

```
julien@ubuntu:~/0x04$ cat 7-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_diagonal.c -o 7-diagonals
julien@ubuntu:~/0x04$ ./7-diagonals | cat -e
$
\$
 \$
\$
 \$
  \$
   \$
    \$
     \$
      \$
       \$
        \$
         \$
$
julien@ubuntu:~/0x04$
