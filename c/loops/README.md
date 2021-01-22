# LOOPS
Allow you to execute program that have repeative step in a efficient way, instead of copy pasting code use loops
The 3 major types of loops in c are:
 - [1]:while
 - [2]:Do-while
 - [3]:for-loop

# while
  - Use when you want a loop unkwon number of times, most commonly used in game, coz we never know when the user will quit the game
  - syntax: while(condition / boolean expression)
            {
                // action block;
            }

    can create infinite loop with while(true){    } <br / >
    Hit `ctrl + c` if you are struck in a infinte loop, it **kills** the program

# Do-while
 - Use when you need to loop unknown number of times, but atleast once, used in game, most commonly used to get user input
 - loop exectues for the first time and then checks for the condition, it is aka **post test loop** / **exit condition loop**
 - syntax: do
            {
                // action block;
            }
            while (boolean expression);

# for loop
  - Used when you want to loop something for specific/discrete amout of times
  - A counter variable is used to check bool condition, increments/decrements after action is done
  - syntax: for (initialisation of counter variable; condition; increment/decrement)
            {
                // action block;
            }