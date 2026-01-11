#include <iostream>
#include <cstring>   // for string functions
using namespace std;

int main() {

    char s1[50] = "hello";
    char s2[50] = "world";
    char s3[50];

    // 1. strlen() → length of string
    cout << "Length of s1: " << strlen(s1) << endl;

    // 2. strcpy() → copy string
    strcpy(s3, s1);
    cout << "After strcpy, s3: " << s3 << endl;

    // 3. strcat() → concatenate strings
    strcat(s1, s2);
    cout << "After strcat, s1: " << s1 << endl;

    // 4. strcmp() → compare strings
    int result = strcmp(s1, s2);
    cout << "strcmp(s1, s2): " << result << endl;

    // 5. strrev() → reverse string (works in many compilers)
    cout << "Reverse of s2: " << strrev(s2) << endl;

    // 6. strlwr() → lowercase
    char s4[50] = "HELLO";
    cout << "Lowercase: " << strlwr(s4) << endl;

    // 7. strupr() → uppercase
    char s5[50] = "hello";
    cout << "Uppercase: " << strupr(s5) << endl;

    // 8. strchr() → find first occurrence of character
    cout << "First 'l' in s5: " << strchr(s5, 'L') << endl;

    // 9. strstr() → find substring
    char s6[50] = "programming";
    cout << "Substring 'gram': " << strstr(s6, "gram") << endl;

    return 0;
}
