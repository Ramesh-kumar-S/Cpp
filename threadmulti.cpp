#include<iostream>
#include<thread>
using namespace std;
void sample()
{
    int n=20;
    for (int i=0;i<n;i++)
    {
        cout<<i<<endl;
    }
}
void sample1()
{
    int n=100;
    for (int i=0;i<n;i++)
    {
        cout<<"Ramesh - SRE "<<endl;
    }

}
class ramesh
{ 
    public:
        void operator()(int x)
        {
            for (int i=0;i<x;i++)
            {
                cout<<"Ramesh C++ Developer"<<endl;
            }
        }
};


int main()
{
    thread t1(sample);
    t1.join();

    thread t2(sample1);
    // t2.join();
    
    thread t3(ramesh(),3);
    t3.join();

    auto r=[](int x)
    {
        for (int i=0;i<x;i++)
        {
            cout<<"Thread 3"<<endl;
        }
    };

    thread t4(r,3);
    t4.join();

    return 0;
}