#include<iostream>
using namespace std;
template <class T>
class GST{
    private:
        T amt,gs;
    public:
        GST(T a,T g)
        {
            amt=a;
            gs=g;
        }
        void disp()
        {
            cout<<"The Total Amount is : "<<calc()<<endl;
        }
        T calc()
        {
            return amt+gs;
        }
};

int main()
{
    GST<int> g1(25000,2800);
    GST<float> g2(10515.25,1260.75);

    cout<<"G1 : "<<endl;
    g1.disp();
    cout<<"G2 : "<<endl;
    g2.disp();
    
}
