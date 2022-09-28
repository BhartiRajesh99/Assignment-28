#include<iostream>
using namespace std;
class Marks
{
    private:
        int marks;
    public:
        Marks()
        {
            marks=0;
        }
        void setmarks(int y)
        {
            marks=y;
        }
        void print()
        {
            cout<<"Marks="<<marks<<endl;
        }
        Marks* operator->()
        {
            return this;
        }
};
int main()
{
    Marks m1;
    m1->setmarks(400);
    m1.print();
    return 0;
}