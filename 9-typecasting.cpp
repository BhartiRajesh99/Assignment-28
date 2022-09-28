#include<iostream>
using namespace std;
class Integer
{
    private:
        int a;
    public:
        Integer(int y=0)
        {
            a=y;
        }
        void set(int g)
        {
            a=g;
        }
        void display()
        {
            cout<<"a="<<a<<endl;
        }
        operator int()
        {
            return a;
        }
};
int main()
{
    Integer i;
    int x;
    i.set(23);
    i.display();
    x=(int)i;
    cout<<x;
    return 0;
}