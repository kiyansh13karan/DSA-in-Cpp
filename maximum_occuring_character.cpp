#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    int count[256] = {0};

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            count[s[i]]++;
        }
    }

    char maxChar;
    int max = 0;

    cout << "\nCharacter count:\n";
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            cout << (char)i << " = " << count[i] << endl;

            if (count[i] > max) {
                max = count[i];
                maxChar = i;
            }
        }
    }

    cout << "\nMaximum occurring character: "
         << maxChar << " (" << max << " times)";

    return 0;
}
