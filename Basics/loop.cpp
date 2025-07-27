// for loop 
/*
Syntax :- 


for(initialization; condition; update) {
    // Code to be executed
}

*/

#include<iostream>
int main() {
    for(int i = 1; i <= 5; i++) {
        std::cout << i << " ";
    }
    // Output: 1 2 3 4 5
    return 0;



    // while loop 
    int i = 1;
    while(i <= 5) {
        std::cout << i << " ";
        i++;
    }
    // Output: 1 2 3 4 5



    // do while loop 
    int i = 1;
    do {
        std::cout << i << " ";
        i++;
    } while(i <= 5);
    // Output: 1 2 3 4 5


}




