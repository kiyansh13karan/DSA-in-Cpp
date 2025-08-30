#include<iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> dq;

    // Adding elements to the front and back
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(0);

    // Accessing elements
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;
    cout << "Element at index 2: " << dq.at(2) << endl;

    // Displaying elements
    cout << "Elements in deque: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // Removing elements from front and back
    dq.pop_front();
    dq.pop_back();

    cout << "Elements after pop operations: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    return 0;
}