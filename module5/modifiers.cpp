#include <bits/stdc++.h>
using namespace std;
int main()
{

    //     Modifiers
    // s+= -> append another string.
    // s.append() -> append another string.
    // s.push_back() -> add character to the last of the string.
    // s.pop_back() -> remove the last character of the string.
    // s= -> assign string.
    // s.assign() -> assign string.
    // s.erase() -> erase characters from the string.
    // s.replace() -> replace a portion of the string.
    // s.insert() -> insert a portion to a specific position.

    // string a = "Hello";
    // string b = "World";
    // string b = "A";
    // a+=b;
    // a.append(b);
    // cout << a << endl;
    // cout << b << endl;
    // a="HelloA"; ->works
    // a=a+"A"; -works
    // a=a+b; -> works
    // a[5]='A'; -> didn't work
    // a.push_back('A'); // works
    // a.pop_back();
    // a.pop_back();
    // cout << a << endl;

    // a = "Gello";
    // a.assign("Gelo");
    // cout << a << endl;

    string a="Helloworld";
    // a.erase(4,3);
    // a.replace(4,3,"so");
    // a.replace(4,0,"so");
    a.insert(5,"Nosia");
    cout<<a<<endl;
    return 0;
}