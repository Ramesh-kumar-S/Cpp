#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
mutex m;

void makeACall() 
{
      m.lock();
      for(int i=0;i<20;i++)
      {
        cout<<i<<endl;
      }
      m.unlock();
    
}

int main() 
{
    
    thread man1(makeACall);
    
    thread man2(makeACall);
   
    thread man3(makeACall);

    man1.join();

    man2.join();

    man3.join();
    return 0;
}
