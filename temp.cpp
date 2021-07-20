#include<iostream>
using namespace std;
class A
{
    public: 

    void show(int a,int b)
    {
        cout<<"Base cLass"<<endl;
    }
    void show(int a)
    {

    }
};
class B:public A
{
    public:
    void show()
    {
        cout<<"Derived Class";
    }

};
int main()
{
  
    B b;
    A &a=b;
    a.show(5);
    // A *ptr=&b;
  
    // // b.show();
    // ptr->show();

}