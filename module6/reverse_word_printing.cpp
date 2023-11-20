#include <bits/stdc++.h>
using namespace std;
void print(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        cout << word << endl;
        print(ss);
        // for reverse
        //  cout << word << endl;
    }
}
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    print(ss);
    // while(ss>>word)
    // {
    //     cout<<word<<endl;
    // }
    return 0;
}