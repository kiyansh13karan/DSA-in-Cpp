#include<iostream>
#include<vector>
#include<algorithm> // For sort function

using namespace std ;

int main() {
    vector<int> v ; 
    cout<<"Size of vector is : "<<v.size()<<endl ; 
    cout<<"Capacity of vector is : "<<v.capacity()<<endl ; 
    v.push_back(1) ; 
    v.push_back(2) ; 
    v.push_back(3) ;  
    v.push_back(4) ; 
    v.push_back(5) ; 
    cout<<"Size of vector after insertion is : "<<v.size()<<endl ;
    cout<<"Capacity of vector after insertion is : "<<v.capacity()<<endl ;
    cout<<"Element at 2nd index is : "<<v.at(2)<<endl ; 
    cout<<"Element at 4th index is : "<<v[4]<<endl ; 
    cout<<"First element of vector is : "<<v.front()<<endl ; 
    cout<<"Last element of vector is : "<<v.back()<<endl ; 
    cout<<"Vector before poping an element from back : "<<endl ; 
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<" " ; 
    }
    cout<<endl ; 
    v.pop_back() ; 
    cout<<"Vector after poping an element from back : "<<endl ; 
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<" " ; 
    }
    cout<<endl ;
    
    // Using STL algorithm
    sort(v.begin(), v.end());  // Sort in ascending order
    cout << "Sorted vector: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // copy vector v in v1 vector
    vector<int> v1(v);

    cout << "Copied vector v1: ";
    for(int x : v1) cout << x << " ";
    cout << endl;

    return 0 ;
}