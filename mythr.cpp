#include<iostream>
#include<thread>

using namespace std;

void caller()
{
    cout << "Hi"<<endl;
}

int main()
{
    thread t1(caller);

    t1.join();

    return 0;
}
