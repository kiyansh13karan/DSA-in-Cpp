#include<iostream>
using namespace std ;

int binarysearch(int arr[] , int n , int key) {
    int start = 0 ; 
    int end = n-1 ;
    
    int mid = start + (end - start)/2 ; 
    while(start <= end) {
        if(arr[mid] == key) {
            cout << "Element found at index: " << mid << endl ;
            return mid ; // Element found
        }
        else if(arr[mid] < key) {
            start = mid + 1 ; // Search in the right half
        }
        else {
            end = mid - 1 ; // Search in the left half
        }
        mid = start + (end - start)/2 ; // Update mid
    }
    cout << "Element not found" << endl ;
    return -1 ; // Element not found
}


int main() {

    int n ; 
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n] ;
    cout<<"Enter the elements of the array in sorted order : \n" ;
    for(int i=0 ; i<n ; i++) {
        cin >> arr[i] ;
    }

    int key ;
    cout<<"Enter the key : " ; 
    cin >> key ;

    binarysearch(arr , n , key) ; 

    return 0 ; 
}