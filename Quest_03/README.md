# Quest03

## Exercise1

| Quest03          | Reverse String              |
|:-----------------|---------------------------- |
| Submit Directory | ex00                        |
| Submit file      | reverse_string.c            |


Write a program that takes a string as argument returns its reverses.

Your algorithm must be IN PLACE. (What is in place?)

An in-place algorithm is an algorithm which transforms input using no auxiliary data structure.

Example 00:

```Input: "Hello"
Output: "olleH"
```
Example 01:

```Input: "LoL"
Output: "LoL"
```
Example 02:

```Input: "Nothing Else Matters"
Output: "srettaM eslE gnihtoN"
```

## Exercise2

| Quest03          | My Strcmp                   |
|:-----------------|---------------------------- |
| Submit Directory | ex01                        |
| Submit file      | my_strcmp.c                 |


Reproduce the behavior of the function strcmp.

Example 00

```Input: "abc" && "bd"
Output: 
Return Value: -1
```
Example 01

```Input: "bd" && "abc"
Output: 
Return Value: 1
```

## Exercise3

| Quest03          | My Strcpy                   |
|:-----------------|---------------------------- |
| Submit Directory | ex02                        |
| Submit file      | my_strcpy.c                 |


Reproduce the behavior of the function strcpy.

The strcpy() and strncpy() functions copy the string source (src) to destination (dst).

Example 00

```Input: "" && "abc"
Output: 
Return Value: "abc"
```
Example 01

```Input: "" && "RaInB0w d4Sh! "
Output: 
Return Value: "RaInB0w d4Sh! "
```

## Exercise4

| Quest03          | My Strncpy                  |
|:-----------------|---------------------------- |
| Submit Directory | ex03                        |
| Submit file      | my_strncpy.c                |

Reproduce the behavior of the function strncpy.

Example 00

```Input: "" && "abc" && 2
Output: 
Return Value: "ab"
```
Example 01

```Input: "" && "RaInB0w d4Sh! " && 6
Output: 
Return Value: "RaInB0"
```
## Exercise5

| Quest03          | My Strchr                   |
|:-----------------|---------------------------- |
| Submit Directory | ex04                        |
| Submit file      | my_strchr.c                 |

Searches for the first occurrence of the character c (an unsigned char) in the string pointed to by the argument str.

The terminating null character is considered to be part of the string. 

Returns a pointer pointing to the last matching character, or null if no match was found.

Example 00

```Input: "abcabc" && "b"
Output: 
Return Value: "bcabc"
```
Example 01

```Input: "121212" && "2"
Output: 
Return Value: "21212"
```

## Exercise6

| Quest03          | My Strrchr                  |
|:-----------------|---------------------------- |
| Submit Directory | ex05                        |
| Submit file      | my_strrchr.c                |

Searches for the last occurrence of the character c (an unsigned char) in the string pointed to by the argument str. 

The terminating null character is considered to be part of the string. 

Returns a pointer pointing to the last matching character, or null if no match was found.


Example 00

```Input: "abcabc" && "b"
Output: 
Return Value: "bc"
```
Example 01

```Input: "121212" && "2"
Output: 
Return Value: "2"
```
Example 02

```Input: "abc" && "d"
Output: 
Return Value: nil
```

## Exercise7

| Quest03          | My Strstr                   |
|:-----------------|---------------------------- |
| Submit Directory | ex06                        |
| Submit file      | my_strstr.c                 |

Implement strStr().

Returns a pointer to the first occurrence of needle in haystack, or NULL if needle is not part of haystack.

Example 00

```Input: "hello" && "ll"
Output: 
Return Value: "llo"
```
Example 01

```Input: "aaaaa" && "bba"
Output: 
Return Value: nil
```
Example 02

```Input: "" && "a"
Output: 
Return Value: nil
```

## Exercise8

| Quest03          | My First Struct             |
|:-----------------|---------------------------- |
| Submit Directory | ex07                        |
| Submit file      | my_first_struct.c           |


tructure in C are similar to the concept of package.

You can have multiple object inside your package and with a struct you can have multiple variable in it.

A struct is a type.

You are defining a struct of type struct s_box which will contains variables.

Example 00

```Input: [0]
Output: 1
0

Return Value: nil
```
Example 01

```Input: [1, 2, 3]
Output: 3
1
2
3

Return Value: nil
```

## Exercise9

| Quest03          | My Is Sort                  |
|:-----------------|---------------------------- |
| Submit Directory | ex08                        |
| Submit file      | my_is_sort.c                |


Let's create a function which will tell us if an array is sorted or not. What is sorted? :-)

Write a function that takes an integer array as a parameter (input) and returns a boolean (true/false).

Your function should return true if the integer array is sorted in either ASC(ascending) or DESC(descending) order.

Your function should return false if the integer array is not sorted.

Example 00

```Input: [1, 1, 2]
Output: 
Return Value: true
```
Example 01

```Input: [2, 1, -1]
Output: 
Return Value: true
```


