# Quest04

## Exercise1

| Quest04          | My Range                    |
|:-----------------|---------------------------- |
| Submit Directory | ex00                        |
| Submit file      | my_range.c                  |

Create a function my_range which returns a malloc'd array of integers. This integer array should contain all values between min and max.

Min included - max excluded.

If min value is greater or equal to max's value, a null pointer should be returned.

Example 00

```Input: 1 && 4
Output: 
Return Value: [1, 2, 3]
```
Example 01

```Input: 7 && 10
Output: 
Return Value: [7, 8, 9]
```

## Exercise2

| Quest04          | My Strdup                   |
|:-----------------|---------------------------- |
| Submit Directory | ex01                        |
| Submit file      | my_strdup.c                 |


We have this: "abc" and we want a copy in a new part of memory that you will have to malloc.

(Reproduce the behavior of strdup from man strdup)

Example 00

```Input: "abc"
Output: 
Return Value: "abc"
```
Example 01

```Input: "RaInB0"
Output: 
Return Value: "RaInB0"
```

## Exercise3

| Quest04          | My Print Words Array        |
|:-----------------|---------------------------- |
| Submit Directory | ex02                        |
| Submit file      | my_print_words_array.c      |

Create a function that displays the content of an array of strings.

One word per line.

Each word will be followed by a newline, including the last one.

Example 00

```Input: ["abc", "def", "gh"]
Output: abc
def
gh

Return Value: nil
```

Example 01

```Input: ["123"]
Output: 123

Return Value: nil
```
## Exercise4

| Quest04          | My Count On It              |
|:-----------------|---------------------------- |
| Submit Directory | ex03                        |
| Submit file      | my_count_on_it.c            |


Count the size of each elements in an array.

Create a function my_count_on_it, which receives a string array as parameter and returns an array with the length of each strings.

Example 00

```Input: ["This", "is", "the", "way"]
Output: 
Return Value: [4, 2, 3, 3]
```
Example 01

```Input: ["aBc", "AbcE Fgef1"]
Output: 
Return Value: [3, 10]
```

## Exercise5

| Quest04          | My Join                     |
|:-----------------|---------------------------- |
| Submit Directory | ex04                        |
| Submit file      | my_join.c                   |


Create a function that join an array of strings on a separator characters.

```["Hello", "World", "!"] && ' '
=> "Hello World !"
```

Example 00

```Input: ["abc", "def", "gh", "!"] && "-"
Output: 
Return Value: "abc-def-gh-!"
```
Example 01

```Input: ["abc", "def", "gh", "!"] && "blah"
Output: 
Return Value: "abcblahdefblahghblah!"
```

## Exercise6

| Quest04          | My Spaceship                |
|:-----------------|---------------------------- |
| Submit Directory | ex05                        |
| Submit file      | my_spaceship.c              |


You must create a function that takes in a flight path of a rocket ship as a string of letters and returns the following format:

"{x: X, y: Y, direction: 'DIRECTION'}"

X,Y represent the ending coordinates of your ship and direction represents its final direction.

Example 00

```Input: "RAALALL"
Output: 
Return Value: "{x: 2, y: -1, direction: 'down'}"
```
Example 01

```Input: "AAAA"
Output: 
Return Value: "{x: 0, y: -4, direction: 'up'}"
```
