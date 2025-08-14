#include<iostream>
#include <climits>
using namespace std;

int getMin(int arr[] , int n) {
    int min = INT_MAX ; 
    for(int i=0 ; i<n ; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min ; 
}

int getMax(int arr[] , int n) {
    int max = INT_MIN ; 
    for(int i=0 ; i<n ; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max ; 
}

int main() {
    int n ; 
    cout<<"Enter the size of an array : "<<endl ;
    cin>>n ;
    int arr[n] ;
    cout<<"Enter the elements of the array : "<<endl ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    }

    int min = getMin(arr, n) ;
    int max = getMax(arr, n) ;

    cout << "Maximum Element : " << max << endl ;
    cout << "Minimum Element : " << min << endl ;

    return 0;
}