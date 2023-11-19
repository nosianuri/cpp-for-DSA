#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Iterators
    // s.begin() -> pointer to the first element.
    // s.end() -> pointer to the next element after the last element of the string.

    string s;
    // string:: iterator it;
    cin >> s;
    // for(int i=0;i<s.size();i++)
    // {
    //     cout<<s[i]<<endl;
    // }
    // cout<<*s.begin()<<endl;
    // cout<<*(s.end()-1)<<endl;
    // for(string:: iterator it=s.begin();it<s.end();it++)
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}