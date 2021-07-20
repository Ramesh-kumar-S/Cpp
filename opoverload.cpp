#include<iostream>
using namespace std;
class boreop{
    private:
        int value;

    public:
        boreop():value(10){}

    boreop operator ++ () {
        boreop temp;
        temp.value = value + 1000;
        return temp;
    }
    boreop operator ++(int) {
        boreop temp;
        temp.value = value + 10;
        return temp;
    }
    void display()
    {
        cout<<"Result : "<<value<<endl;
    }

};
int main()
{
    boreop bp,res;

    res=bp++;
    res.display();
    res=++bp;
    res.display();

    // bp.display();
    return 0;
}