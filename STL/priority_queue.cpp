#include<iostream>
#include<queue>
using namespace std ;

int main() {
    priority_queue<int> maxi ; // max heap 

    priority_queue<int, vector<int>, greater<int>> mini ; // min heap

    // Pushing elements onto the priority queue
    maxi.push(30) ;
    maxi.push(10) ;
    maxi.push(20) ;
    maxi.push(50) ;

    cout<<"Element in max heap: " ;
    int n = maxi.size() ; 
    for(int i=0 ; i<n ; i++) {
        cout<<maxi.top()<<" " ;
        maxi.pop() ;
    }
    cout<<endl ; 

    cout << "Top element (highest priority): " << maxi.top() << endl;

    // Popping elements from the priority queue
    maxi.pop();
    cout << "Top element after pop: " << maxi.top() << endl;

    // Size of the priority queue
    cout << "Size of priority queue: " << n << endl;

    // Checking if the priority queue is empty
    if (maxi.empty()) {
        cout << "Priority queue is empty" << endl;
    } else {
        cout << "Priority queue is not empty" << endl;
    }

    cout<<endl ; 
    cout<<endl ;


    // min heap
    mini.push(80) ;
    mini.push(40) ;
    mini.push(200) ;
    mini.push(5) ;

    cout<<"Elements in min heap : " ; 
    int m = mini.size() ; 
    for(int i=0 ; i<m ; i++) {
        cout<<mini.top()<<" " ;
        mini.pop() ;
    }
    cout<<endl ; 

    // accessing the top element from the min heap 
    cout << "Top element (highest priority): " << mini.top() << endl;

    mini.pop();
    cout << "Top element after pop: " << mini.top() << endl;

    // Size of the priority queue
    cout << "Size of priority queue: " << m << endl;

    // Checking if the priority queue is empty
    if (mini.empty()) {
        cout << "Priority queue is empty" << endl;
    } else {
        cout << "Priority queue is not empty" << endl;
    }

    return 0;
}
