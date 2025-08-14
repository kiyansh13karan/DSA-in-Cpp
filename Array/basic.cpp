// Basic concept of array 

#include <iostream>
using namespace std;

int main() {
    // Declaration and Initialization of Array
    int arr[5] = {10, 20, 30, 40, 50};

    // Accessing Array Elements
    cout << "First Element: " << arr[0] << endl;
    cout << "Second Element: " << arr[1] << endl;

    // Modifying Array Elements
    arr[2] = 35;
    cout << "Modified Third Element: " << arr[2] << endl;

    // array after modification
    cout << "Array Elements after Modification: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}