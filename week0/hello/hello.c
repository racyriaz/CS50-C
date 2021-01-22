#include <stdio.h>
#include <cs50.h>
int main(void)
{
    // gets user name
    string name = get_string("What is your name?\n");
    // prints user name
    printf("hello, %s\n",name);
}