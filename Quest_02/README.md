# Quest02

## Exercise1

| Quest02          | My Initializer              |
|:-----------------|---------------------------- |
| Submit Directory | ex00                        |
| Submit file      | my_initializer.c            |

Create a function that takes a pointer to integer as a parameter, and sets the value to 0.

Example 00 (In C)

```int main() {
  int variable_a = 12;

  printf("%d\n", variable_a); // will print 12
  my_initializer(&variable_a);
  printf("%d\n", variable_a); // will print 0
  return 0;
}
```

## Exercise2

| Quest02          | My Swap                     |
|:-----------------|---------------------------- |
| Submit Directory | ex01                        |
| Submit file      | my_swap.c                   |

Create a function that swaps the value of two integers whose addresses are entered as parameters.

Example 00 (In C)

```int main() {
  int variable_a = 12;
  int variable_b = 21;

  printf("A - %d ** B - %d\n", variable_a, variable_b); // will print A - 12 ** B - 21
  my_swap(&variable_a, &variable_b);
  printf("A - %d ** B - %d\n", variable_a, variable_b); // will print A - 21 ** B - 12
  return 0;
}
```
## Exercise3

| Quest02          | My Strlen                   |
|:-----------------|---------------------------- |
| Submit Directory | ex02                        |
| Submit file      | my_strlen.c                 |

The strlen() function returns the number of characters.

Example 00:

```Input: "abc"
Output: 3
```

Example 01:

```Input: "RaInB0w d4Sh!"
Output: 13
```
Example 02:

```Input: "ThE C4k3 Is a L|3"
Output: 17
```

## Exercise4

| Quest02          | My Putstr                   |
|:-----------------|---------------------------- |
| Submit Directory | ex03                        |
| Submit file      | my_putstr.c                 |


Create a function that displays a string of characters on the standard output.
The address of the string's first character is in the pointer entered as
parameter in the function.

Example 00

```Input: "abc"
Output: abc
Return Value: nil
```
Example 01

```Input: "abcdelele dzp ll 0"
Output: abcdelele dzp ll 0
Return Value: nil
```
Example 02

```Input: ""
Output: 
Return Value: nil
```
## Exercise5

| Quest02          | My Add                      |
|:-----------------|---------------------------- |
| Submit Directory | ex04                        |
| Submit file      | my_add.c                    |


Create a my_add function which takes 2 parameters (nbr1 and nbr2) and returns a value.
This value is the result of the addition of nbr1 and nbr2 parameters.

Example 00

```Input: 0 && 1
Output: 
Return Value: 1
```
Example 01

```Input: 10 && 10
Output: 
Return Value: 20
```
Example 02

```Input: -10 && 10
Output: 
Return Value: 0
```

## Exercise6

| Quest02          | My Sub                      |
|:-----------------|---------------------------- |
| Submit Directory | ex05                        |
| Submit file      | my_sub.c                    |

Create a my_sub function which takes 2 parameters (nbr1 and nbr2) and returns a value.
This value is the result of the subtraction of nbr1 and nbr2 parameters.

Example 00

```Input: 0 && 1
Output: 
Return Value: -1
```
Example 01

```Input: 10 && 10
Output: 
Return Value: 0
```
Example 02

```Input: -10 && 10
Output: 
Return Value: -20
```

## Exercise7

| Quest02          | My Mult                     |
|:-----------------|---------------------------- |
| Submit Directory | ex06                        |
| Submit file      | my_mult.c                   |


Create a my_mult function which takes 2 parameters (nbr1 and nbr2) and returns a value.
This value is the result of the multiplication of nbr1 and nbr2 parameters.

Example 00

```Input: 0 && 1
Output: 
Return Value: 0
```
Example 01

```Input: 10 && 10
Output: 
Return Value: 100
```
Example 02

```Input: -10 && 10
Output: 
Return Value: -100
```

## Exercise8

| Quest02          | My String Formatting        |
|:-----------------|---------------------------- |
| Submit Directory | ex07                        |
| Submit file      | my_string_formatting.c      |

Create a my_string_formatting function which takes 3 parameters (firstname, lastname and age) and prints a string composed value.

Formatting should be: "Hello, my name is FIRSTNAME LASTNAME, I'm AGE."

Make sure you are printing a newline.

Example 00

```Input: "john" && "doe" && 37
Output: Hello, my name is john doe, I'm 37.

Return Value: nil
```
Example 01

```Input: "Baby" && "Yoda" && 50
Output: Hello, my name is Baby Yoda, I'm 50.

Return Value: nil
```
Example 02

```Input: "Marie" && "Curie" && 26
Output: Hello, my name is Marie Curie, I'm 26.

Return Value: nil
```

## Exercise9

| Quest02          | My String Index             |
|:-----------------|---------------------------- |
| Submit Directory | ex08                        |
| Submit file      | my_string_index.c           |


Create a my_string_index function which takes 2 parameters (haystack and needle) and locates the first occurrence of the character needle in the string haystack and returns the position.

You can this function as: is there a L (character) in my string "helLo".

Objective is to build a loop and having a if statement when it matches the right character and returns its position.

Example 00

```Input: "hello" && "l"
Output: 
Return Value: 2
```
Example 01

```Input: "aaaaa" && "b"
Output: 
Return Value: -1
```

## Exercise10

| Quest02          | My Upcase                   |
|:-----------------|---------------------------- |
| Submit Directory | ex09                        |
| Submit file      | my_upcase.c                 |


Create a my_upcase function. Which takes a string as parameter and returns the uppercase version of it.

Example 00

```Input: "aBc"
Output: 
Return Value: "ABC"
```
Example 01

```Input: ""
Output: 
Return Value: ""
```
## Exercise11

| Quest02          | My Downcase                 |
|:-----------------|---------------------------- |
| Submit Directory | ex10                        |
| Submit file      | my_downcase.c               |

Create a my_downcase function. Which takes a string as parameter and returns the lowercase version of it.

Example 00

```Input: "aBc"
Output: 
Return Value: "abc"
```
Example 01

```Input: ""
Output: 
Return Value: ""
```





