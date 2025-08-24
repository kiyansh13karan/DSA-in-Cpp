#include<iostream>
using namespace std ; 

int bubblesort(int arr[] , int n) {
    bool swapped = false ; 
    for(int i=1 ; i<n ; i++) {
        for(int j=0 ; j<n-i ; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j] , arr[j+1]) ;
                swapped = true ;
            }
        }
        if(swapped == false) {
            break ;
        }
    }
}


int main() {
    int n ; 
    cout<<"Enter the size of an array : " ; 
    cin>> n ;

    int arr[n] ;
    cout<<"Enter the elements of an array : " ;
    for(int i=0 ; i<n ; i++ ) {
        cin>> arr[i] ;
    }

    bubblesort(arr , n) ;
    
    cout<<"Sorted array : "<<endl ; 
    for(int i=0 ; i<n ; i++ ) {
        cout<< arr[i] << " " ;
    }

    return 0 ; 
}