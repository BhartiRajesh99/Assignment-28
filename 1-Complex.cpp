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
        friend ostream& operator<<(ostream&,Complex);
        friend istream& operator>>(istream&,Complex&);
};
ostream& operator<<(ostream &Y,Complex R)
{
    if(R.img>=0)
        Y<<R.real<<"+"<<R.img<<"i\n";
    else
        Y<<R.real<<R.img<<"i\n";
    return Y;
}
istream& operator>>(istream &T,Complex &W)
{
    cout<<"Enter real and img part:";
    T>>W.real>>W.img;
    return T;
}
int main()
{
    Complex c1,c2;
    cin>>c1>>c2;
    cout<<c1;
    cout<<c2;
    return 0;
}