#include <stdio.h>
#include <cs50.h>
int main(){
    string name = get_string("Enter your name: ");
    printf("Hello %s, welcome to C Language!", name);
}