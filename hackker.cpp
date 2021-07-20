#include<iostream>
using namespace std;
class A
{
    public:
    void show(string s)
    {
        stringstream ss(s);
        cout<<ss;

    }
};
int main()
{
    A a;
    a.show("Site Reliability Engineer");
    // cout<<a;
    return 0;
}