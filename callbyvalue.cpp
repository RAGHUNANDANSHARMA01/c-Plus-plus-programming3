#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"value of a"<<a<<endl;
    cout<<"value of b"<<b<<endl;
}
int main()
{
    int a=100,b=200;
    swap(a,b);
    return 0;
}
