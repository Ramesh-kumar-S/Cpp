#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<string> ramesh{"I","will","be","a","C++","Developer"};
   vector<int> myvec{1,2,3,4,5};

   for (auto i=myvec.crbegin(); i!=myvec.crend();++i)
   {
    //    *i = *i - 2;
       cout<<" "<<*i<<endl;
   }
   if (myvec.empty())
   {
       cout<<"Yess Boss";
   }
   else
   {
       cout<<"No Boss!!..Ther's a Person inside a Room"<<endl;
       cout<<"No of Victims in the Vector: "<<myvec.size()<<endl;
       cout<<"First Victim : "<<myvec.front()<<endl;
       cout<<"Last  Victim : "<<myvec.back()<<endl;

   }
   return 0;
}