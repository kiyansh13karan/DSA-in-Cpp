// Data Types in C++

/*
Data types in C++ define the type of data a variable can hold. They help the compiler allocate memory and interpret the data correctly.
*/


// 1. Primitive Built-in Data Types :- 
/*
| Data Type | Size (Typical) | Example              | Description                             |
| --------- | -------------- | -------------------- | --------------------------------------- |
| `int`     | 4 bytes        | `int a = 10;`        | Stores integers                         |
| `char`    | 1 byte         | `char ch = 'A';`     | Stores a single character               |
| `float`   | 4 bytes        | `float x = 3.14f;`   | Stores decimal numbers (less precision) |
| `double`  | 8 bytes        | `double d = 3.1415;` | Stores decimal numbers (high precision) |
| `bool`    | 1 byte         | `bool flag = true;`  | Stores true/false                       |
| `void`    | 0 bytes        | `void func();`       | Represents no value (used in functions) |
*/


// 2. Deroved Data Types :- 
/*
| Data Type   | Description                            |
| ----------- | -------------------------------------- |
| `array`     | Collection of similar data types       |
| `pointer`   | Stores the address of another variable |
| `function`  | Group of statements performing tasks   |
| `reference` | Alias for another variable             |
*/


// 3. User defined  Data Types :- 
/*
| Data Type | Description                    |
| --------- | ------------------------------ |
| `struct`  | Group of different data types  |
| `class`   | Blueprint for creating objects |
| `union`   | Like struct but shares memory  |
| `enum`    | User-defined set of constants  |
| `typedef` | Create alias for existing type |
*/







#include <iostream>
using namespace std ;

int main() {
    int age = 25 ;
    float height = 5.9f ;
    char grade = 'A' ;
    bool pass = true ;
    double pi = 3.1415926535 ;

    cout << "Age: " << age << "\n" ;
    cout << "Height: " << height << "\n" ;
    cout << "Grade: " << grade << "\n" ;
    cout << "Passed: " << pass << "\n" ;
    cout << "Pi: " << pi << "\n" ;

    return 0 ;
}
