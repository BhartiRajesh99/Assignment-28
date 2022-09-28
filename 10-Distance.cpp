#include<iostream>
using namespace std;
class Distance
{
    private:
        int feet,inches;
    public:
        Distance()
        {
            feet=0;inches=0;
        }
        Distance(int x,int y=0)
        {
            feet=x;inches=y;
        }
        void display()
        {
            cout<<"feet="<<feet<<" inches="<<inches<<'\n';
        }
        Distance operator()(int a,int b,int c)
        {
            Distance d;
            d.feet=a+c+5;
            d.inches=a+b+15;
            return d;
        }
};
int main()
{
    Distance d1(7),d2(6,7);
    d2=d1(3,4,5);
    d1.display();
    d2.display();
    return 0;
}