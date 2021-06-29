/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>

using namespace std;

class Tasks
{
    public:
        int priority;
        string task;
        Tasks()
        {
            cout<<"Welcome!!"<<endl<<;
        }
        void welcome()
        {
            cout<<"Hey! I am your CPP Remainder"<<endl<<endl;
        }
        void motivate();
        
};

void Tasks::motivate()
{
    cout<<"Beleive it,You're Half way there!!"<<endl;
}

int main() {
    Tasks t1;
    t1.welcome();
    t1.priority=1;
    t1.task="Learn C++ Development";
    
    Tasks t2;
    t2.priority=2;
    t2.task=" C++ Project upload ";
    
    cout<<"First Priority Task's: "<<endl<<endl;
    
    cout<<"Task Name : " << t1.task<<endl;
    cout<< "Priority Level =  "<< t1.priority<<endl<<endl;
    
    cout<<"Second Priority Task's: "<<endl<<endl;
    
    cout<<"Task Name : " << t2.task<<endl;
    cout<< "Priority Level =  "<< t2.priority<<endl<<endl;
    
    t1.motivate();

    return 0;
}
