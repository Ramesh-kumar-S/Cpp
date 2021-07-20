// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v;

//     for(int i=0;i<=20;i++)
//     {
//         v.push_back(i);
//     }
//     cout<<v.size()<<endl;
//     cout<<v.capacity()<<endl;

//     v.resize(27);
//     cout<<v.size()<<endl;

//     for (int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }

//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v(20);
//     for (int i=0;i<=20;i++)
//     {
//         v[i]=i;
//     }
//     cout<<v.back()<<endl;
//     cout<<v.size()<<endl;
//     // cout<<v.max_size();
//     cout<<v.at(12);
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1(3);
    vector<int> v2(20);

   for (int i=0;i<v1.size();++i)
   {
       v1.push_back(i);
   }

    v1.swap(v2);
    for (auto i=v2.begin();i!=v2.end();++i)
    {
        cout<<*i<<" ";
    }
    return 0;
}