#include<iostream>
using namespace std;
struct complex
{
    private:
    int a,b;
    public:
    void set_data(int x,int y)
    {a=x;b=y;}
    void show_data()
    {cout<<"\a:"<<a<<"b:"<<b;}
    };
    int main()
    {
        complex c1;
        c1.set_data(3,4);
        c1.show_data();
        return 0;
    }