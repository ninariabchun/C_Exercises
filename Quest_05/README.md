# Quest05

## Exercise1

| Quest05          | My Count Files              |
|:-----------------|---------------------------- |
| Submit Directory | ex00                        |
| Submit file      | my_count_files              |

Write a command line that counts and displays the number of regular files and directories in the current directory and all its sub-directories. 

It should include ".", the starting directory.

Example 00
Example of output:

```$>./my_count_files | cat -e
13$
$>
```

## Exercise2

| Quest05          | My Clean                    |
|:-----------------|---------------------------- |
| Submit Directory | ex01                        |
| Submit file      | my_clean                    |


In a file called my_clean place the command line that will search for all files - in the current directory as well as in its sub-directories - with a name ending by ~, or a name that start and end by #

The command line will print and delete all files found.

Only one command is allowed: no ; or && or other gitaneries.

Example 00


```$>my_clean
./.zshrc~
...
./blah/#tat#
$>

```

## Exercise2

| Quest05          | My Find Sh                  |
|:-----------------|---------------------------- |
| Submit Directory | ex02                        |
| Submit file      | my_find_sh                  |


Write a command line that searches for all file names that end with ".sh" (without quotation marks) in the current directory and all its sub-directories. 

It should display only the name of files without the extension .sh.

Example 00

```$>./my_find_sh | cat -e
file1$
file2$
file3$
$>
```

## Exercise3

| Quest05          | My Patch                    |
|:-----------------|---------------------------- |
| Submit Directory | ex03                        |
| Submit file      | my_patch                    |


Patch transform a file origin to a fixed file applying the transformation or you can called it patch.


