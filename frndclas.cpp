#include<iostream>
using namespace std;
class SGST;
class CGST
{
    private:
        int gst;
    public:
        CGST():gst(18) {}

        friend class SGST;

};
class SGST
{
    private:
        int gst;
    public:
        SGST():gst(9) {}

        int addgst()
        {
            CGST ct;
            return ct.gst+gst;
        }
};

int main()
{
    // CGST ct;
    SGST st;
    cout<<"Total GST : "<<st.addgst();
    return 0;
}