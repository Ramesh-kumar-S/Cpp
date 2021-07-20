#include<iostream>
using namespace std;
class Comp
{
    private:
        float real;
        float img;
    public:
        Comp():real(0),img(0) {}

        void input()
        {
            cout<<"Enter the R and I no : "<<endl;
            cin>>real;
            cin>>img;
        }
    Comp operator + (Comp obj)
    {
        Comp t;
        t.real=real+obj.real;
        t.img=img+obj.img;
        return t;
    }
    void print()
    {
        if(img <0)
        {
            cout << "Output Complex number: " << real << img << "i";
        }
        else
        {
            cout << "Output Complex number: " << real << "+" << img << "i";
        }
    }

};
int main()
{
    Comp c1,c2,res;

    cout<<"1st number : ";
    c1.input();

    cout<<"2nd number : ";
    c2.input();
    
    res=c1+c2;
    res.print();
}