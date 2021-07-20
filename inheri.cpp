#include<iostream>
using namespace std;
class car{                                  //Base Class
    
    public:
        string name;
        int price;
        int rating;
        
        int honk()
        {
            
            cout<<"Horn ..Horn!!!!"<<endl<<endl;
            return 1;
        }
        void test()
        {

        }
};
class stati{
    private:
        int test;
    public:
        // string polo="20.5";
        void stats(){
            string polo="20.5";
            cout<<"!!! "<<polo <<" People's are using POLO !!!"<<endl;
        }
        void test()
        {

        }       
};

class polo:public car,public stati{                          //Multiple Inheritance
    private:
        int pdis;
    public:                                                 //Using Access Specifier's
    string name="Volswagen Polo";
    int price=650000;
    int rating=4.7;

    void setdis(int pd){
        pdis=pd;

    }
    int getdis(){                                         //Accessing Private Attributes using Set() and Get() Methods
        return pdis;
    }
     void usage(){
        cout<<"Mostly Preffered by Youngsters";
    }

};

class swift:public car{
    public:
    string name="Maruti Suziki Swift";
    int price=750000;
    int rating=4.9;  
    void usage(){                                                  //Polymorphism
        cout<<"Mostly Preffered by Family People's"<<endl;
    }
};

class pologt1:public polo{
    public:
        void gt1()                                                 //Multilevel Inheritence
        {
            cout<<endl<<"POLO GT1(108 BHP) has More BHP than POLO"<<endl;
        }
};
int main()
{
 car mycar;                    //Object Creation for Base Class
 polo p;                       //Object Creation for Derived Class
 swift s;
 pologt1 pg;

 cout<<"Car Name : "<<p.name<<endl;
 cout<<"The Price of "<<p.name<<" is "<<p.price<<endl<<endl;
 p.stats();
 p.setdis(5);
 cout<<"The Discount for Polo is : "<<p.getdis()<<endl;
 pg.gt1();
 p.honk();
 p.test();
 p.usage();
 

 cout<<endl<<"Car Name : "<<s.name<<endl;
 cout<<"The Price of "<<s.name<<" is "<<s.price<<endl<<endl;

s.honk();                    //Accessing Member Function
s.usage();

 return 0;
}
