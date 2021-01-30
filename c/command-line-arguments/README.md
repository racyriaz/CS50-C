# Command-Line Arguments

* So far we have been using `int main(void)` without knowing the exact reason, now its time to understand why we put void there.

There are two way of getting inputs from user

  1. Taking inputs when the program is running (in program prompts).
  2. Taking inputs before the program starts running (at run-time) from command line

SYNTAX:
  `int main(int argc, string argv[])`
      these two special arguments enables us to know what data the user provided at the command line and how much data did they provided.

where
    `argc` -> argument count (argc), is an integer type variable that is taken to know, **how many inputs/how much stuff** would the user provide in the command line <br /> Program name is included in the count.
    `argv` -> argument vector (argv), is an **array** of characters that takes **argc amount** of user inputs

Example:

| command (argv)           | argc |
|--------------------------|------|
| ./hello_word             | 1    |
| ./hello_word 1024 myName | 3    |

**SHORTCUTS**

| short cut commands | meanings              |
|--------------------|-----------------------|
| argv[0]            | first element of argv |
| argv[argc - 1]     | last element of argv  |

consider the example2 : `./hello_word 1024 myName`

| argv indices | argv content | dtype    |
|--------------|--------------|----------|
| argv[0]      | ./hello_word | fileName |
| argv[1]      | 1024         | string   | SPOILER -> THIS IS NOT INTEGER
| argv[2]      | myName       | string   |

since there are three elements **argc = 3**

each time a program exits it returns an exit status i.e returns '\0'
normally this is not visible in terminal, but you can see the exit status with `echo $?`
