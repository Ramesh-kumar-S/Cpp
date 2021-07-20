#include<iostream>
using namespace std;
class car{
    private:
        int price;
    public:
        car():price(6) {}

        virtual int getprice()
        {
            return price;
        }
};
class baleno:public car
{
    private:
        int price;
    public:
        baleno():price(8){}

    int getprice() override
    {
        return price;
    }
};
class magnite:public baleno{
    private:
        int price;
    public:
        magnite():price(7) {}
    int getprice() override
    {
        return price;
    }
};
void print(car* c)
{
    cout<<"Car -> "<<c->getprice()<<endl;
}
int main()
{
    car* car1=new car();
    car* baleno1=new baleno();
    car* magnite1=new magnite();
    print(car1);
    print(baleno1);
    print(magnite1);

    return 0;
}