// Linear Search 

#include<iostream>
using namespace std ; 

bool search(int arr[] , int n , int key) {
    for(int i=0 ; i<n ; i++) {
        if(arr[i] == key) {
            return true ;
        }
    }
    return false ;
}

int main() {
    int n ; 
    cout<<"Enter the size of an array : " ; 
    cin>>n ;

    int arr[n] ;

    cout<<"Enter the elements of the array : " ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    }

    int key ;
    cout<<"Enter the element to search : " ;
    cin >> key ;

    if(search(arr, n, key)) {
        cout<<"Element found" ;
    } else {
        cout<<"Element not found" ;
    }

    return 0 ;
}