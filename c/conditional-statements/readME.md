# conditional statements
Allows you to make decisions depending upon the user input/ values of variables. C provides different ways to implement conditional expression or conditional statements which are also called as **Branches**
[1]: if statements
[2]: switch
[3]: ternary operator

# if statements
 - Simple if statement:
    - Syntax:
    ```
        if (conditional expression that gives boolean values) {
            // executes when the boolean value is true
        }
    ```
        **if the condition fails then it does nothing**

 - If else:
    - syntax:
    ```
        if (condition/boolean Expression)
        {
            // executes if the bool/condition is true
        }
        else
        {
            // executes if the condition fails or bool is false
        }
    ```
 - If else ladder: mutually exclusive
    - syntax:
    ```
        if  (condition)
        {
            // true block
        }
        else if (condition 2)
        {
            // 2nd true block
        }
        else
        {
            // false block
        }
    ```

 - if ladder:  non-mutually exclusive branches, only 3rd and 4th branch are mutually exclusive branches coz the else binds to the nearest if only
    - syntax:
    ```
        if (expression)
        {
            // first branch
        }
        if (expression2)
        {
            // second branch
        }
        if (expression3)
        {
            // third branch
        }
        else
        {
            //fourth branch
        }
    ```

# switch
 - provides **enumeration of discrete cases**, instead of relying on boolean expression
 - must have **break** statement else your code will fall through each cases
  - syntax:
    ```
    int x = get_int();
    switch(x)
    {
        case 1:
            action block1;
            break;
        case 2:
            action block2;
            break;
        default:
            default action block;
    }
    ```

# ternary operator
    - syntax:
    `condition ? true-block : false-block` <br />
    similar to if..else.. statements, used for writting short branches