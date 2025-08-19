// find pivot in an array 
#include<iostream>
using namespace std;

int getpivot(int arr[] , int n) {
    int s=0 ; 
    int e=n-1 ; 
    int mid = s + (e-s)/2 ;

    while(s < e) {
        if(arr[mid] >= arr[0]) {
            s = mid + 1 ; 
        } else {
            e = mid ; 
        }
        mid = s + (e-s)/2 ; // Update mid
    }
    return s ;  
}

int main() {
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int res = getpivot(arr , n) ; 
    cout<<"Pivot is at index: "<<res<<endl ;
    return 0 ; 
}