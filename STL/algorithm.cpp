#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for accumulate
using namespace std;

int main() {
    vector<int> v = {4, 2, 5, 2, 1, 3, 5};

    cout << "Original vector: ";
    for (int x : v) cout << x << " ";
    cout << "\n\n";

    // 1. sort (ascending)
    sort(v.begin(), v.end());
    cout << "Sorted (asc): ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // 2. sort (descending)
    sort(v.begin(), v.end(), greater<int>());
    cout << "Sorted (desc): ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // 3. reverse
    reverse(v.begin(), v.end());
    cout << "Reversed: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // 4. min/max element
    cout << "Min element: " << *min_element(v.begin(), v.end()) << endl;
    cout << "Max element: " << *max_element(v.begin(), v.end()) << endl;

    // 5. count occurrences
    cout << "Count of 5: " << count(v.begin(), v.end(), 5) << endl;

    // 6. find
    auto it = find(v.begin(), v.end(), 2);
    if (it != v.end())
        cout << "Element 2 found at index: " << distance(v.begin(), it) << endl;
    else
        cout << "Element 2 not found" << endl;

    // 7. accumulate (sum)
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "Sum of elements: " << sum << endl;

    // 8. binary_search (needs sorted vector)
    sort(v.begin(), v.end()); // sort again
    cout << "Binary search for 3: " 
         << (binary_search(v.begin(), v.end(), 3) ? "Found" : "Not Found") 
         << endl;

    // 9. lower_bound & upper_bound
    auto lb = lower_bound(v.begin(), v.end(), 3);
    auto ub = upper_bound(v.begin(), v.end(), 3);
    cout << "Lower bound of 3: " << (lb != v.end() ? *lb : -1) << endl;
    cout << "Upper bound of 3: " << (ub != v.end() ? *ub : -1) << endl;

    // 10. next_permutation
    vector<int> p = {1, 2, 3};
    next_permutation(p.begin(), p.end());
    cout << "Next permutation of {1,2,3}: ";
    for (int x : p) cout << x << " ";
    cout << endl;

    // 11. prev_permutation
    prev_permutation(p.begin(), p.end());
    cout << "Previous permutation: ";
    for (int x : p) cout << x << " ";
    cout << endl;

    return 0;
}
