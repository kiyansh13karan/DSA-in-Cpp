#include<iostream>
#include<map>

using namespace std ; 

int main() {
    map<int, string> m;

    // Inserting elements into the map
    m[1] = "Karan" ;
    m[2] = "Diya" ;
    m[3] = "Nayal" ;
    m[4] = "Tiwari" ;

    // inserting
    m.insert({5, "Pari"}) ;

    // Size of the map
    cout << "Size of map: " << m.size() << endl;

    // Displaying the elements in the map
    cout << "Elements in the map: " << endl;
    for(auto i : m) {
        cout << i.first << " : " << i.second << endl ;
    }

    // displaying the keys only
    cout<<"Keys of map are : " ;
    for(auto i : m) {
        cout << i.first << " " ;
    }
    cout << endl ;

    // displaying the values only
    cout << "Values of map are : " ;
    for(auto i : m) {
        cout << i.second << " , " ;
    }
    cout << endl ;

    // Checking if a key exists in the map
    int key = 2;
    if (m.find(key) != m.end()) {
        cout << key << " is present in the map." << endl;
    } else {
        cout << key << " is not present in the map." << endl;
    }

    // Erasing an element from the map
    m.erase(1);
    cout << "After erasing key 1: " << endl;
    for (auto i : m) {
        cout << i.first << " : " << i.second << endl;
    }

    // Count
    cout << "Count of key 2: " << m.count(2) << endl;
    cout << "Count of key 4: " << m.count(4) << endl;

    return 0;
}
