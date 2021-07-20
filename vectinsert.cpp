#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<10;i++)
    {
        v1.push_back(i*10);
    }
    // for(int i=0;i<v1.size();i++)
    // {
    //     cout<< v1[i]<<" ";
    // }
    v1.swap(v2);
    v2.insert(v2.begin(),{1,2,3,4,5,6});
    for(int i=0;i<v2.size();i++)
    {
        cout<< v2[i]<<" ";
    }
    
    return 0;
}