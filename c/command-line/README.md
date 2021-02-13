# Compiling

+ Last time, we learned to write our first program in C, printing “hello, world” to the screen.
+ We compiled it with make hello first, turning our source code into machine code before we could run the compiled program with `./hello`
+ `make` is actually just a program that calls clang, a compiler, with options. We could **compile our source code file**, hello.c, ourselves by running the command `clang hello.c`. Nothing seems to happen, which means there were no errors. And if we run `ls`, now we see an *a.out* file in our directory. The filename is still the default, so we can actually run a more specific command: `clang -o hello hello.c`
+ We’ve added another command-line argument, or an input to a program on the command-line as extra words after the program’s name. clang is the name of the program, and `-o hello` and `hello.c` are additional arguments. We’re telling clang to use hello as the output filename, and use hello.c as the source code. Now, we can see hello being created as output.
+ If we wanted to use CS50’s library, via #include <cs50.h>, for the get_string function, we also have to add a flag: `clang -o hello hello.c -lcs50`
+ The `-l` flag links the cs50 file, which is already installed in the CS50 IDE, and includes the machine code for get_string (among other functions) that our program can then refer to and use as well.

---

## Compiling source code into machine code is actually made up of smaller steps:

1. preprocessing
2. compiling
3. assembling
4. linking

---

 - `ls `
    - list -> returns list of directory
 - `cd
    - change directory -> to move between directory
    - cd .. -> moves to one level up
 - `pwd`
    - print current working directory
 - Ctrl + L or `clear`
    - clears screen
 - `~`
    - called home directory
 - `mkdir <folder_name>`
    - create a new folder in the current directory
 - `cp <source> <destination>`
    - copy a file/anything
    - to copy a folder(including its subfolder) that has many stuff inside it use: `cp -r <source> <target>` where -r is called recursively do something...
 - `rm <file>`
    - delets files
    - `rm -f <file>`  permanent delete with forcing
    - removing a folder with all subdirectory use `rm -r <file>`, recursively delete all subfolders and folders, ask for a y/n
    - `rm -rf <file>` permanently delets files and its subfolder, where -rf is recurcively force and do something ...
 - `mv <source> <target>`
    - to rename files
 - chmod
 - ln
 - touch
 - rmdir
 - man
 - diff
 - sudo
 - clear
 - telnet
