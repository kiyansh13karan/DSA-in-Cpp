// Reverse an array 
#include<iostream>
using namespace std ;

void reverseArray(int arr[], int n) {
    int start = 0 ;
    int end = n - 1 ;
    while (start < end) {
        int temp = arr[start] ; 
        arr[start] = arr[end] ; 
        arr[end] = temp ; 

        start++ ;
        end-- ;
    }
}

void printarray(int arr[], int n) {
    for(int i = 0 ; i < n ; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl ;
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

    cout<<"Original array : " ;
    printarray(arr, n) ;
    reverseArray(arr, n) ;
    cout<<"Reversed array: " ;
    printarray(arr, n) ;
    return 0 ;
}