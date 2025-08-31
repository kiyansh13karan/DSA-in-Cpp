#include<iostream>
#include<stack>
using namespace std ;

int main() {
    stack<int> st ;

    // Pushing elements onto the stack
    st.push(10) ;
    st.push(20) ;
    st.push(30) ;
    st.push(40) ;

    // Accessing the top element
    cout << "Top element: " << st.top() << endl ;

    // Popping elements from the stack
    st.pop() ;
    cout << "Top element after pop: " << st.top() << endl ;

    // Size of the stack
    cout << "Size of stack: " << st.size() << endl ;

    // Checking if the stack is empty
    if (st.empty()) {
        cout << "Stack is empty" << endl ;
    } else {
        cout << "Stack is not empty" << endl ;
    }

    return 0 ;
}