#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Push elements
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Queue size: " << q.size() << endl;
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    // Pop element
    q.pop();
    cout << "After pop, front element: " << q.front() << endl;

    // Print all elements
    cout << "Queue elements (FIFO): ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
