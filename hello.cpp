
#include <iostream>
using namespace std;
class samp{
    private:

        int no;

    public:
    
     void setno(int n)
     {
         no=n;
     }
     int getno()
     {
         return no;
     }
};

int main()
{
    samp s;
    s.setno(2000);
    cout << s.getno() <<endl;

    return 0;
}
