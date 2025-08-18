#include<iostream>
using namespace std ; 

int lastoccurence(int arr[] , int n , int key) {
    int s=0 ; 
    int e=n-1 ; 
    int ans = -1 ; 
    int mid = s + (e-s)/2 ;
    while(s <= e) {
        if(arr[mid] == key) {
            ans = mid ; 
            s = mid + 1 ; 
        } else if(key > arr[mid]) {
            s = mid + 1; // Search in the right half
        } else {
            e = mid - 1; // Search in the left half
        }
        mid = s + (e-s)/2; // Update mid
    }
    return ans ; 
}

int main() {
    int n ; 
    cout<<"Enter the size of an array : " ; 
    cin>>n;

    int arr[n] ;
    cout<<"Enter the elements of the array in sorted order : \n" ;
    for(int i=0 ; i<n ; i++) {
        cin >> arr[i] ;
    }

    int key ;
    cout<<"Enter the key : " ; 
    cin >> key ;

    int res = lastoccurence(arr , n , key) ; 
    cout<<"Last occurrence of element found at index: " << res << endl ;
    if (res == -1) {
        cout << "Element not found in the array." << endl;
    }
    
    return 0 ; 
}