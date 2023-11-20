#include<bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age=24;
    void hello()
    {
        cout<<"Rakib namespaces"<<endl;
    }
}
namespace Sakib
{
    int age2=30;
    void hello()
    {
        cout<<"Sakib namespaces"<<endl;
    }
}
using namespace Rakib;
int main()
{
    // cout<<Rakib::age<<endl;
    // cout<<Sakib::age2<<endl;
    cout<<age<<endl;
    hello();
    Sakib::hello();
    return 0;
}