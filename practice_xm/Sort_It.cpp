#include<bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;
    if (n < 1 || n > 100000) {
        cout << "Invalid input for N\n";
        return 1; 
    }

    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < -1000000000 || a[i] > 1000000000) {
            cout << "Invalid input for array element A[" << i << "]\n";
            return 1; 
        }
    }

    // ascending order
    sort(a, a + n); 
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << "\n";

    // descending order
    sort(a, a + n, greater<int>()); 
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}