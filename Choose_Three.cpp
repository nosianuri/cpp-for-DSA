#include<bits/stdc++.h>
using namespace std;
int main()
{
     int T;
    std::cin >> T;

    if (T < 1 || T > 100) {
        std::cout << "Invalid input for T\n";
        return 1; // Exit with an error code
    }

    while (T--) {
        int N, S;
        std::cin >> N >> S;

        if (N < 1 || N > 100 || S < 1 || S > 1000) {
            std::cout << "Invalid input for N or S\n";
            return 1; // Exit with an error code
        }

        // Use a simple array instead of std::vector
        int A[100]; // Assuming the maximum value of N is 100
        for (int i = 0; i < N; ++i) {
            std::cin >> A[i];

            if (A[i] < 1 || A[i] > 1000) {
                std::cout << "Invalid input for A[" << i << "]\n";
                return 1; // Exit with an error code
            }
        }

        // Check for the sum without using a separate function
        int found = 0;
        for (int i = 0; i < N - 2; ++i) {
            for (int j = i + 1; j < N - 1; ++j) {
                for (int k = j + 1; k < N; ++k) {
                    if (A[i] + A[j] + A[k] == S) {
                        found = 1;
                        break;
                    }
                }
                if (found) break;
            }
            if (found) break;
        }

        if (found) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}