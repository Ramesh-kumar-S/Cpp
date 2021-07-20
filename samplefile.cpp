#include<iostream>
using namespace std;
class car{
    public:
     virtual void run()
     {
         cout<<"Car is Running from Base Road "<<endl;

     }
};
class luxurycar : public car{
    public:
    void run() override
    {
        cout<<"Car is Running from Derived Road"<<endl;
        // car::run(); //Call Overridden Function
    }
   
};
class budgetcar : public luxurycar{
    public:
    void run()
    {
        cout<<"Car is Running from Second Derived Road"<<endl;
    }
};
int main()
{
    budgetcar bcar;
    // car c;
    // c.run();
    bcar.luxurycar::run();

    car* ptr=&bcar; //calling overidden function using pointer
    ptr->run();
}