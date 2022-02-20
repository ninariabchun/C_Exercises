# Quest01

## Exercise1

| Quest01          | My First Compilation        |
|:-----------------|---------------------------- |
| Submit Directory | ex00                        |
| Submit file      | my_first_compilation.c      |

What is compilation?
It transforms a text file (yes a file of code is a text file) into a binary file.

The function should print my_first_compilation. :)
(The \n means it will go to a new line.)

Example 00

```Input: 
Output: my_first_compilation.

Return Value: nil
```

## Exercise 2

| Quest01          | My First Variable Integer   |
|:-----------------|---------------------------- |
| Submit Directory | ex01                        |
| Submit file      | my_first_variable_integer.c |

First part of coding is to create variable. Let's get started with an integer variable.

What does it mean "integer variable?"

In most languages you have "types", a good comparaison is a letter is different from a number.

In a computer everything is numbers (0 and 1). But we, as human, interact with letter (and words) to make it usuable there are "convention": a letter is a number and one of this table of convertion is: ASCII (you should google man ascii)

Example 00

```Input: 
Output: 34

Return Value: nil
```

## Exercise 3

| Quest01          | My First Variable Char      |
|:-----------------|---------------------------- |
| Submit Directory | ex02                        |
| Submit file      | my_first_variable_char.c    |


The first part of coding is to create a variable. Let's get started with a char variable.

What does an "char variable” mean?

In most languages, you have "types". A good comparison is that a letter is different from a number.

In a computer, everything is numbered (0 and 1). But we, as humans, interact with a letter (and words) to make it useable there is "convention": a letter is a number and one of this table of conversion is: ASCII (you should google man ASCII)

Example 00

```Input: 
Output: c

Return Value: nil
```

## Exercise 4

| Quest01          | My First Variable String    |
|:-----------------|---------------------------- |
| Submit Directory | ex03                        |
| Submit file      | my_first_variable_string.c  |


What is a string?, a word? How a computer is creating a string?

It could be defined by "multiple letter", which is translated to multiple "characters."

Is it an array of characters? :-)

Example 00

```Input: 
Output: Learning is growing

Return Value: nil
```
## Exercise 5

| Quest01          | My Multiple Variables Multiple Type    |
|:-----------------|----------------------------------------|
| Submit Directory | ex04                                   |
| Submit file      | my_multiple_variables_multiple_type.c  |

Replace/Complete the following code. Create multiple variables with (if needed) the right type.

Function prototype (c)

```#include <stdio.h>

int main() {
  XX = 34;
  XX = "Luke";
  XX = ',';

  printf("Hello %s%c I'm %d years old.\n", my_name, my_comma, my_age);
  return 0;
}
```
Example 00

```Input: 
Output: Hello Luke, I'm 34 years old.

Return Value: nil
```

## Exercise 6

| Quest01          | My First Incrementation                |
|:-----------------|----------------------------------------|
| Submit Directory | ex05                                   |
| Submit file      | my_first_incrementation.c              |


Incrementation and decrementation depending of the language it's either ++ (--) or += 1 (-= 1).

Example 00

```Input: 
Output: 1
-1
2

Return Value: nil
```
## Exercise 7

| Quest01          | My First If Else                       |
|:-----------------|----------------------------------------|
| Submit Directory | ex06                                   |
| Submit file      | my_first_if_else.c                     |


If statements linked to else statements are part of the fundamentals of coding. The challenge is to design the best condition.

A condition will control which part of your code is executed, if containing what to do if the condition is true, and else containing what to do if the condition is not met.

Example 00

```Input: 
Output: nbr is less than 20

Return Value: nil
```
## Exercise 8

| Quest01          | My First If Multiple Conditions        |
|:-----------------|----------------------------------------|
| Submit Directory | ex07                                   |
| Submit file      | my_first_if_multiple_conditions.c      |

if conditions are linked to else statements and writing the correct condition can be quite complicated :D.

Your assignment is to write the correct conditions inside the if statements below in order to render the 2 print statements true!

Example 00

```Input: 
Output: a is bigger than b AND smaller than c AND equal to d
z OR y are bigger than a

Return Value: nil
```

## Exercise 9

| Quest01          | My First Function                      |
|:-----------------|----------------------------------------|
| Submit Directory | ex08                                   |
| Submit file      | my_first_function.c                    |

The syntax is only a small part of what you need to learn to write quality code.

Software Architecture (Designing Software) is really the core part of each project and being a good engineer.

Example 00

```Input: 
Output: my_first_function

Return Value: nil
```

## Exercise 10

| Quest01          | My First While                         |
|:-----------------|----------------------------------------|
| Submit Directory | ex09                                   |
| Submit file      | my_first_while.c                       |


Repeating is annoying? what is we could create a program for it? :)

Implemente a while loop to print 100 times "I want to code".

Function prototype (c)

```#include <stdio.h>

int main() {
  int index = 0;

  while (XX) {
    printf("I want to code\n");
    XX
  }
  return 0;
}
```

## Exercise 11

| Quest01          | My First Param Function                |
|:-----------------|----------------------------------------|
| Submit Directory | ex10                                   |
| Submit file      | my_first_param_function.c              |

Function accepts parameters, let's send an integer to our function and print it!

Implemente a while loop to call a function detonation in...X secondes.

Your loop will stop a 0. 10 included, 0 is not.

Example 00

```Input: 
Output: detonation in... 10 secondes.
detonation in... 9 secondes.
detonation in... 8 secondes.
detonation in... 7 secondes.
detonation in... 6 secondes.
detonation in... 5 secondes.
detonation in... 4 secondes.
detonation in... 3 secondes.
detonation in... 2 secondes.
detonation in... 1 secondes.

Return Value: nil
```

## Exercise 12

| Quest01          | My First Return Function               |
|:-----------------|----------------------------------------|
| Submit Directory | ex11                                   |
| Submit file      | my_first_return_function.c             |

Functions can also return value(s) and the return value(s) can be used later on.

In this exercise you will implement a function which returns the number 7.

Example 00

```Input: 
Output: 7

Return Value: nil
```
## Exercise 13

| Quest01          | My Is Negative                         |
|:-----------------|----------------------------------------|
| Submit Directory | ex12                                   |
| Submit file      | my_is_negative.c                       |

Create a my_is_negative function.

This function my_is_negative returns 1 or 0 depending on the integer's sign entered as a parameter.

If n is negative, return 0. If n is positive or 0, return 1.

Function prototype (c)
```/*
**
** QWASAR.IO -- my_is_negative
**
** @param {int} param_1
**
** @return {int}
**
*/

int my_is_negative(int param_1)
{

}
```
## Exercise 14

| Quest01          | My Abs                                 |
|:-----------------|----------------------------------------|
| Submit Directory | ex13                                   |
| Submit file      | my_abs.c                               |

Create a my_abs function.

Reproduce behavior of an abs() function. It returns always the positive value of a number.

Example 00

```Input: -30
Output: 
Return Value: 30
```
Example 01

```Input: 30
Output: 
Return Value: 30
```
Example 02

```Input: 0
Output: 
Return Value: 0
```

## Exercise 15

| Quest01          | My Isalpha                             |
|:-----------------|----------------------------------------|
| Submit Directory | ex14                                   |
| Submit file      | my_isalpha.c                           |


Create a my_isalpha function.

Reproduce the behavior of isalpha() function. It returns 1 if the character sent as argument is a letter (A to Z or a to z). It returns 0 otherwise.

Example 00

```Input: "a"
Output: 
Return Value: 1
```
Example 01

```Input: " "
Output: 
Return Value: 0
```
Example 02

```Input: "0"
Output: 
Return Value: 0
```
## Exercise 16

| Quest01          | My Isdigit                             |
|:-----------------|----------------------------------------|
| Submit Directory | ex15                                   |
| Submit file      | my_isdigit.c                           |

Reproduce the behavior of isdigit() function. It returns 1 if the character sent as argument is a digit (0 to 9). It returns 0 otherwise.

Example 00

```Input: "a"
Output: 
Return Value: 0
```
Example 01

```Input: " "
Output: 
Return Value: 0
```
Example 02

```Input: "0"
Output: 
Return Value: 1
```

## Exercise 17

| Quest01          | My Islower                             |
|:-----------------|----------------------------------------|
| Submit Directory | ex16                                   |
| Submit file      | my_islower.c                           |

Reproduce the behavior of islower() function. It returns 1 if the character sent as argument is a lower letter (a to z). It returns 0 otherwise.

Example 00

```Input: "a"
Output: 
Return Value: 1
```
Example 01

```Input: "A"
Output: 
Return Value: 0
```
Example 02

```Input: "0"
Output: 
Return Value: 0
```

## Exercise 18

| Quest01          | My Isupper                             |
|:-----------------|----------------------------------------|
| Submit Directory | ex17                                   |
| Submit file      | my_isupper.c                           |


Reproduce the behavior of isupper() function. It returns 1 if the character sent as argument is a upper-case letter (A to Z). It returns 0 otherwise.

Example 00

```Input: "a"
Output: 
Return Value: 0
```
Example 01

```Input: "A"
Output: 
Return Value: 1
```
Example 02

```Input: "0"
Output: 
Return Value: 0
```

## Exercise 19

| Quest01          | My Isspace                             |
|:-----------------|----------------------------------------|
| Submit Directory | ex18                                   |
| Submit file      | my_isspace.c                           |

Reproduce the behavior of isspace() function. It returns 1 if the character sent as argument is a space (man isspace). It returns 0 otherwise.

Example 00

```Input: "a"
Output: 
Return Value: 0
```
Example 01

```Input: "A"
Output: 
Return Value: 0
```
Example 02

```Input: " "
Output: 
Return Value: 1
```

## Exercise 20

| Quest01          | My Print Alphabet                      |
|:-----------------|----------------------------------------|
| Submit Directory | ex19                                   |
| Submit file      | my_print_alphabet.c                    |

Create a function that displays the alphabet in lowercase, on a single line, by ascending order, starting from the letter a.

It will be follow by a \n (newline character)

Example 00

```Input: 
Output: abcdefghijklmnopqrstuvwxyz
Return Value: nil
```

## Exercise 21

| Quest01          | My Print Reverse Alphabet              |
|:-----------------|----------------------------------------|
| Submit Directory | ex20                                   |
| Submit file      | my_print_reverse_alphabet.c            |


Create a function that displays the alphabet in lowercase, on a single line, by descending order, starting from the letter z.

It will be follow by a \n (newline character)

Example 00

```Input: 
Output: zyxwvutsrqponmlkjihgfedcba
Return Value: nil
```

