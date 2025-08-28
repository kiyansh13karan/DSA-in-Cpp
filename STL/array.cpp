#include<iostream>
#include<array>

using namespace std ; 
int main() {
    array<int,5> a = {1,2,3,4,5} ; 
    cout<<"Size of array is : "<<a.size()<<endl ; 
    cout<<"Element at 2nd index is : "<<a.at(2)<<endl ; 
    cout<<"Element at 4th index is : "<<a[4]<<endl ; 
    cout<<"First element of array is : "<<a.front()<<endl ; 
    cout<<"Last element of array is : "<<a.back()<<endl ; 
    cout<<"Array before filling : "<<endl ; 
    for(int i=0;i<a.size();i++) {
        cout<<a[i]<<" " ; 
    }
    cout<<endl ; 
    a.fill(10) ; 
    cout<<"Array after filling with 10 : "<<endl ; 
    for(int i=0;i<a.size();i++) {
        cout<<a[i]<<" " ; 
    }
    cout<<endl ; 
    return 0 ;
} 