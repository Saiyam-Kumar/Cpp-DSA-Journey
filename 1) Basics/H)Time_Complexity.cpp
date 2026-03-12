#include <iostream>
#include <vector>
using namespace std;

// O(n) Time, O(1) Space
void printNumbers(int n) {
    cout << "Printing numbers from 0 to " << n-1 << ":\n";
    for (int i = 0; i < n; i++) {
        cout << i << " ";
    }
    cout << "\n";
}

// O(n^2) Time, O(1) Space
void printPairs(int n) {
    cout << "\nPrinting all pairs:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "(" << i << "," << j << ") ";
        }
        cout << "\n";
    }
}

// O(n) Time, O(n) Space
void fillVector(int n) {
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        arr.push_back(i);
    }
    cout << "\nVector contents:\n";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << "\n";
}

// O(2^n) Time, O(n) Space (due to recursion stack)
int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

// O(log n) Time, O(1) Space
int binarySearch(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int n = 5;

    // O(n)
    printNumbers(n);

    // O(n^2)
    printPairs(n);

    // O(n)
    fillVector(n);

    // O(2^n)
    cout << "\nFibonacci of " << n << ": " << fib(n) << "\n";

    // O(log n)
    vector<int> sortedArr = {1, 3, 5, 7, 9, 11};
    int target = 7;
    int index = binarySearch(sortedArr, target);
    if (index != -1)
        cout << "\nBinary Search: Element " << target << " found at index " << index << "\n";
    else
        cout << "\nBinary Search: Element not found.\n";

    return 0;
}
