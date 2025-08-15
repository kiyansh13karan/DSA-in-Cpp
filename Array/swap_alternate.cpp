#include<iostream>
using namespace std ; 


int swap_alternate(int arr[] , int n) {
    for (int i=0 ; i<n-1 ; i+=2) {
        swap(arr[i], arr[i + 1]) ;
    }
}

int main() {
    int n ; 
    cout<<"Enter the size of an array : " ; 
    cin>>n ;  

    int arr[n] ;

    cout<<"Enter the elements of the array : " ; 
    for(int i=0 ; i<n ; i++) {
        cin>>arr[i] ;
    }

    swap_alternate(arr, n) ;

    cout<<"Array after swapping alternate elements: " ;
    for (int i=0 ; i<n ; i++) {
        cout << arr[i] << " ";
    }

    return 0 ; 
}