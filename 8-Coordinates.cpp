#include<iostream>
using namespace std;
class Coordinate
{
    private:
        int a,b,c;
    public:
        Coordinate()
        {
            a=0;b=0;c=0;
        }
        void set(int x,int y,int z)
        {
            a=x;
            b=y;
            c=z;
        }
        void display()
        {
            cout<<"a="<<a<<" b="<<b<<" c="<<c<<"\n";
        }
        Coordinate operator,(Coordinate C)
        {
            Coordinate k;
            k.a=C.c;
            k.b=C.b;
            k.c=C.a;
            return k;
        }
};
int main()
{
    Coordinate c1,c2,c3,c4;
    c1.set(2,3,4);
    c2.set(9,5,6);
    c3.set(1,2,51);
    c4=(c1,c2,c3);
    c1.display();
    c2.display();
    c4.display();
    return 0;
}