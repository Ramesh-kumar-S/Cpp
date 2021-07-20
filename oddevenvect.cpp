#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    vector<int> v2;
    for(int i =0;i<=10;i++)
    {
        v1.push_back(i);
    }
    v1=v2;
    cout<<v1[7]<<endl;
    cout<<v2.size();
    for (auto i=v2.begin();i!=v2.end();++i)
    {
        cout<<*i<<endl;
    }
}