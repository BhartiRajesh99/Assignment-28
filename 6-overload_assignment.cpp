#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,img;
    public:
        Complex()
        {
            real=0;img=0;
        }
        void setdata(int x,int y)
        {
            real=x;
            img=y;
        }
        void showdata()
        {
            if(img>=0)
                cout<<real<<"+"<<img<<"i\n";
            else
                cout<<real<<img<<"i\n";
        }
        void operator=(Complex n)
        {
            real=n.real;
            img=n.img;
        }
};
int main()
{
    Complex c1,c2;
    c1.setdata(6,5);
    c1.showdata();
    c2=c1;
    c2.showdata();
    return 0;
}