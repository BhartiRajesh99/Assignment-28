#include<iostream>
using namespace std;
class hg
{
    private:
        int a[100];
        const int size=100;
    public:
        void set(int index,int b)
        {
            if(index>=size)
            {
                cout<<"Array index out of bound\n";
                exit(0);
            }
            a[index]=b;
        }
        void display(int t)
        {
            cout<<a[t]<<endl;
        }
        int& operator[](int y)
        {
            int d;
            if(y>=size)
            {
                cout<<"Array index out of bound\n";
                exit(0);
            }
            return a[y];
        }
};
int main()
{
    hg F;
    F[89]=123;
    F.display(78);
    cout<<F[89];
    return 0;
}