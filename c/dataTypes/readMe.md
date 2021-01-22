# Maths numbers:
    1. **whole numbers**, start from  0,1,2,.....
    2. **Natural numbers** starts from 1,2,3,4,...
    3. **Integers** starts from .....,-2,-1,0,1,2,3....
    4. **Rational number** this is something that is formed when dividing two integers, it has finite number of *decimal numbers*
    5. **Irrational Numbers** this is similar to rational number except that the numbers after the decimal point keeps on continuing
    6. **Real numbers** any number that is either rational or irrational numbers is called *real number*

| TYPES of Variable | QUALIFIERS | Data types
|-|-|-|
| int | unsigned int | bool |
| float | signed int |
| char | short |
| double | long |
| | const |


# Types of Variables IN C: (variable, Format specifier)
- int %d
    - INTEGER variable takes up a memory of 2^32 (a total of 4.29 billion) (i.e. 4 bytes -> splitted into 2 bytes)
    - this is split into negative and positive intergers so get a max positive number of (2^31)2 billion and negative number of 2 billion(2^31 -1).
    - range is **(-2^31 + 2^31-1 = 2^32)**
    - **Unsigned int** uses neg space combined to all 4 billion space
        - This is *not a dataType* its a **qualifier**
    - Similarly **Signed int** uses all positive space range to get all 4 billion space to negative integers
- char %c
    - Has only single character e.g: a b .. or A B ..
    - Character variable takes up a *1 byte* of memory (8 bits | 2^8=256 | range ( -128 to 128 )
    - ASCII uses the positive range to denote ABC...
    - A->65 a->97 0->48
- float %f
    - Floating point variable takes up a memory of 4 bytes (32 bits)
    - They work with real numbers
    - Memory is directionaly proportional to the decimal place, so it is to say float are precise only for 32 bits.
- double
    - Is usually used to store long numbers that requires more space.
    - takes up 8 bytes(64 bits)
    - much more precise than float
- void -> called type not a datatype, it means it does not return anything, Eg. Printf function
    - you cannot pass/return any arguments/parameters
    - usually used with functions
    - acts as place holder for **null**
<hr />

# Types of DataTypes:
- bool
    - will store boolean value,i.e *True* or *False*
    - use `#include <cs50.h>` to include in program
    - every **non-zero number** is `True` , i.e. only **0** is `False`
- strings
    - long series of character
- structs
    - combining integers and strings
- typedefs
    - creating own datatypes

# initialization = declaration of variable + assignment of a value to the variable
Eg.
    1. declaration of a variable: int a,b;
    2. assignment: a = 5;
    or use initialization:
    1. int a = 5;



