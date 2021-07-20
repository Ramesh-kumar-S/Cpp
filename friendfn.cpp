#include<iostream>
using namespace std;
class SGST;
class CGST
{
    private:
        int gst;
    public:
        CGST():gst(18) {}

        friend int addgst(CGST,SGST);

};
class SGST
{
    private:
        int gst;
    public:
        SGST():gst(9) {}

        friend int addgst(CGST,SGST);
};
int addgst(CGST ct,SGST st)
{
    return (ct.gst+st.gst);
}
int main()
{
    CGST ct;
    SGST st;
    cout<<"Total GST : "<<addgst(ct,st);
    return 0;
}