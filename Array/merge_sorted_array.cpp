#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void mergeSortedArrays(int arr1[], int n, int arr2[], int m, int merged[]) {
    int i = 0;  // pointer for arr1
    int j = 0;  // pointer for arr2
    int k = 0;  // pointer for merged array

    // Compare elements from both arrays and insert the smaller one
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of arr1 (if any)
    while (i < n) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements of arr2 (if any)
    while (j < m) {
        merged[k] = arr2[j];
        j++;
        k++;
    }
}


int main() {
    int arr1[] = {1, 3, 5, 7} ;
    int arr2[] = {2, 4, 6, 8} ;
    int merged[8] = {0} ;

    mergeSortedArrays(arr1, 4, arr2, 4, merged) ;

    cout << "Merged array: ";
    for (int x : merged) cout << x << " ";
    cout << endl;

    return 0;
}
