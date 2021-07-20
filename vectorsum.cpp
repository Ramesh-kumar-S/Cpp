#include<iostream>
#include<vector>
using namespace std;

int main(){
    auto sum=0;
    vector<int> vec{1,5,7,8,9,7};

    cout<<vec.front() - vec.back()<<endl;
    while(!vec.empty())
    {
        sum=sum+vec.back();
        vec.pop_back();
    }
    cout<<sum<<endl;


    return 0;
}