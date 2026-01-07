#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {

    /* ===============================
       Member functions / constructor
       =============================== */
    string s1("Hello");
    string s2("World");
    string s3;

    /* ===============================
       Non-member function overloads
       =============================== */
    s3 = s1 + " " + s2;          // operator+
    cout << "Concatenation: " << s3 << endl;   // operator<<

    if (s1 < s2)                 // relational operators
        cout << "s1 < s2\n";

    swap(s1, s2);                // non-member swap()
    cout << "After swap: " << s1 << " " << s2 << endl;

    /* ===============================
       Element access
       =============================== */
    cout << "First char: " << s3.front() << endl;
    cout << "Last char: " << s3.back() << endl;
    cout << "Char at index 1: " << s3.at(1) << endl;
    cout << "Operator[] index 2: " << s3[2] << endl;

    /* ===============================
       Modifiers
       =============================== */
    s3 += "!";                   // operator+=
    s3.append(" C++");           // append
    s3.push_back('!');           // push_back
    s3.insert(5, " Amazing");    // insert
    s3.erase(5, 8);              // erase
    s3.replace(0, 5, "Hi");      // replace
    s3.pop_back();               // pop_back

    cout << "Modified string: " << s3 << endl;

    /* ===============================
       String operations
       =============================== */
    const char* cstr = s3.c_str();   // c_str
    cout << "C-string: " << cstr << endl;

    size_t pos = s3.find("C++");     // find
    if (pos == string::npos)
        cout << "C++ not found\n";
    else
        cout << "C++ found at: " << pos << endl;

    cout << "Substring: " << s3.substr(0, 2) << endl; // substr
    cout << "Compare s1 & s2: " << s1.compare(s2) << endl;

    /* ===============================
       Iterators
       =============================== */
    cout << "Forward iteration: ";
    for (auto it = s3.begin(); it != s3.end(); ++it)
        cout << *it;
    cout << endl;

    cout << "Reverse iteration: ";
    for (auto it = s3.rbegin(); it != s3.rend(); ++it)
        cout << *it;
    cout << endl;

    /* ===============================
       Capacity
       =============================== */
    cout << "Size: " << s3.size() << endl;
    cout << "Length: " << s3.length() << endl;
    cout << "Capacity: " << s3.capacity() << endl;
    cout << "Max size: " << s3.max_size() << endl;

    s3.reserve(50);              // reserve
    s3.resize(5);                // resize
    cout << "After resize: " << s3 << endl;

    if (!s3.empty())             // empty
        cout << "String is not empty\n";

    s3.clear();                  // clear
    cout << "After clear, empty? " << s3.empty() << endl;

    return 0;
}
