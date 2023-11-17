#include<bits/stdc++.h>
using namespace std;

// Function to sort the array in descending order
int* sort_it(int n) {
    // Declare an array of size n
    int* A = new int[n];

    // Taking array input
    for (int i = 0; i < n; ++i) {
        std::cin >> A[i];
    }

    // Sorting the array in descending order
    std::sort(A, A + n, std::greater<int>());

    // Returning the sorted array
    return A;
}

int main() {
    int n;

    // Read the size of the array
    std::cin >> n;
    
    if (n < 1 || n > 100000) {
        std::cout << "Invalid input for N\n";
        return 1; // Exit with an error code
    }

    // Call the function to sort the array
    int* sortedArray = sort_it(n);

    // Print the sorted array in descending order
    for (int i = 0; i < n; ++i) {
        std::cout << sortedArray[i] << " ";
    }
    
    // Free the allocated memory
    delete[] sortedArray;

    return 0;
}