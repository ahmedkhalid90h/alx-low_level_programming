## 0. It ain't what they call you, it's what you answer to 

argc and argv are parameters of the main function in C and C++. They are used to pass command-line arguments to a program.

argc stands for "argument count" and represents the number of arguments passed to the program on the command line, including the name of the program itself. argc is always an integer.

argv stands for "argument vector" and is an array of strings (i.e., an array of pointers to characters) that represent the arguments passed to the program on the command line. argv[0] is the name of the program itself, and argv[1] through argv[argc-1] are the command-line arguments.

For example, consider the following program:

c
Copy code
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Program name: %s\n", argv[0]);
    printf("Number of arguments: %d\n", argc - 1);
    for (int i = 1; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    return 0;
}
If you run this program with the command ./program arg1 arg2 arg3, it will output:

yaml
Copy code
Program name: ./program
Number of arguments: 3
Argument 1: arg1
Argument 2: arg2
Argument 3: arg3
When compiling with unused variables, it depends on the compiler being used. Some compilers will produce a warning if a variable is declared but not used, while others will produce an error. To compile with unused variables in GCC, you can use the -Wunused-variable flag:

bash
Copy code
gcc -Wall -Werror -Wunused-variable myfile.c -o myprogram
The -Wunused-variable flag tells the compiler to produce a warning if a variable is declared but not used. The -Werror flag treats all warnings as errors, which will cause the compiler to fail if any unused variables are detected.