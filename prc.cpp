#include<iostream>
using namespace std;

template <class T>
void sample(T s1,T s2)
{
    cout<<s1<<" "<<s2<<endl; 
}
int main()
{
  for(int i=0;i<5;i++)
  {
      int s1=32;
      int s2=i;
    
      sample(s1,s2);
  }
  return 0;
}