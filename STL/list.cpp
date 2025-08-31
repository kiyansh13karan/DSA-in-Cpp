#include<iostream>
#include<list>
#include<iterator>
using namespace std ;

int main() {
    list<int> lst ;

    // Adding elements to the front and back
    lst.push_back(1) ;
    lst.push_back(2) ;
    lst.push_front(0) ;
    lst.push_front(3) ;
    lst.push_front(44) ;
    lst.push_back(99) ;
    
    // Accessing elements (using iterators)
    cout << "First element: " << lst.front() << endl ;
    cout << "Last element: " << lst.back() << endl ;

    // Displaying elements
    cout << "Elements in list: " ;
    for (int x : lst){
        cout << x << " " ;
    }
    cout << endl ;

    // inserting at third positon 
    auto it = lst.begin() ; 
    advance(it , 3) ;
    lst.insert(it , 555) ;

    cout << "Elements in list after inserting 555 at position 3 : " ;
    for (int x : lst){
        cout << x << " " ;
    }
    cout << endl ;

    // sorting
    lst.sort() ;
    cout<<"Elements after sorting : " ; 
    for(int x : lst) {
        cout << x << " " ;
    }
    cout << endl ;

    // Reversing
    lst.reverse() ; 
    cout<<"Elements after reversing : " ; 
    for(int x : lst) {
        cout<< x << " " ; 
    }
    cout<<endl ; 


    // size of list 
    cout<<"Size of list : "<< lst.size() << endl ;

    // Insert value at position 4
    auto it2 = lst.begin();
    advance(it2, 4);
    lst.insert(it2, 777);
    
    cout << "After inserting 777 at position 4: ";
    for(int x : lst) cout << x << " ";
    cout << endl; 

    // Removing elements from front and back
    lst.pop_front();
    lst.pop_back();

    cout << "Elements after pop operations: " ;
    for (int x : lst) cout << x << " " ;
    cout << endl ;


    // new list with same values 
    list<int> l1(5 , 100) ; 
    cout<< "New List : " ; 
    for(int x : l1) {
        cout << x << " " ; 
    }
    cout << endl ;

    return 0 ;
}