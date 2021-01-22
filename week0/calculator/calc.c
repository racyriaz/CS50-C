#include <stdio.h>
#include <cs50.h>
int main(){
    int operator_ = get_int("Welcome to calculator: \n Please enter your choice of operand:\n\a1. Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    int operand1, operand2;
    operand1 = get_int("Enter the first number: \n");
    operand2 = get_int("Enter the second number: \n");
    if (operator_ == 1){
        printf("%d", operand1 + operand2);
    } else if (operator_ == 2){
        printf("%d", operand1 - operand2);
    } else if (operator_ == 3){
        printf("%d",operand1 * operand2);
    } else {
        printf("%f",(float)operand1 / (float)operand2);
    }
    printf("\n");
}