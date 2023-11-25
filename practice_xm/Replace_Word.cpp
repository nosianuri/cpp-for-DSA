#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    cin.ignore();
    for (int i = 0; i < T; ++i)
    {
        string line;
        getline(cin, line);
        stringstream ss(line);
        string S, X;
        ss >> S >> X;
        int pos = S.find(X);
        while (pos != -1)
        {
            S.replace(pos, X.length(), "#");
            pos = S.find(X, pos + 1);
        }
        cout << S << endl;
    }
    return 0;
}