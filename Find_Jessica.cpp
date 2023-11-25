#include<bits/stdc++.h>
using namespace std;
int main() {
    string input;
    getline(cin, input);

    istringstream ss(input);
    string word;

    // Iterate through each word in the input
    while (ss >> word) {
        // Check for "Jessica" with case sensitivity
        if (word == "Jessica") {
            cout << "YES" << endl;
            return 0;
        }
    }

    // If the loop completes without finding "Jessica"
    cout << "NO" << endl;
    return 0;
}