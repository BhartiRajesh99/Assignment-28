#include<iostream>
using namespace std;
class Integer
{
    private:
        int a;
    public:
        void set(int x)
        {
            a=x;
        }
        void display()
        {
            cout<<a<<"\n";
        }
        bool operator!()
        {
            if(a==0)
                return 1;
            return 0;
        }
};
int main()
{
    Integer i1;
    bool k;
    i1.set(98);
    i1.display();
    k=!i1;
    cout<<k<<endl;
    return 0;
}