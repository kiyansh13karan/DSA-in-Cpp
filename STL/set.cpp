#include<iostream>
#include<set>

using namespace std ;

int main() {
    set<int> s;

    // Inserting elements into the set
    s.insert(10);
    s.insert(20);
    s.insert(20);
    s.insert(30);
    s.insert(30);
    s.insert(40);
    s.insert(40);
    s.insert(50);

    // size of set
    cout << "Size of set: " << s.size() << endl;

    // Displaying the elements in the set
    cout << "Elements in the set: ";
    for(int x : s) {
        cout << x << " ";
    }
    cout << endl;

    // Checking if an element exists in the set
    int key = 30;
    if (s.find(key) != s.end()) {
        cout << key << " is present in the set." << endl;
    } else {
        cout << key << " is not present in the set." << endl;
    }

    // Erase element
    s.erase(10) ;
    cout << "After erasing 10: ";
    for (int x : s){
        cout << x << " " ;
    }
    cout << endl ;

    // count
    cout << "30 is present or not : " << s.count(30) << endl;
    cout << "100 is present or not : " << s.count(100) << endl;

    return 0;
}
