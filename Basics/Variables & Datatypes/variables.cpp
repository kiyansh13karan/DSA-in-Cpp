// Variables in C++

/*
Variables in C++ are containers (or named memory locations) used to store data that can be modified during program execution.
*/

// Basic syntax : 
// data_type variable_name = value ;



// Example 
int age = 20;
float salary = 12345.67;
char grade = 'A';
bool isPassed = true;



// Types of variables in c++

/*
1. Local variables :- 
        Declared inside a function or block.
        Only accessible within that function or block.
*/
#include <iostream>
using namespace std ;
void show1() {
    int a = 10;  // local variable
    cout << a;
}


/*
2. Global Variables :- 
        Declared outside all functions.
        Accessible throughout the program.
*/ 
int x = 5;  // global variable
void show2() {
    cout << x;
}

/*
3. Static Variables :- 
        retain their values between function calls 
        default initialised to 0 
*/
void count() {
    static int x = 0;
    x++;
    cout << x << endl;
}
 
/*
4.  constant variables :- 
        immutable ince assigned 
        declared using const
*/
const int PI = 3.14;






/*
Variable Naming Rules :- 

Must begin with a letter (A-Z or a-z) or underscore (_)
Can contain digits (0-9)
Case-sensitive (value ≠ Value)
Cannot use C++ keywords like int, return, etc.
*/



