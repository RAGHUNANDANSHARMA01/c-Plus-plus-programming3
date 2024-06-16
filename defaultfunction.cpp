#include<iostream>
using namespace std;
int sum(int firstnumber=30,int secondnumber=43)
{
    int result=0;
    result=firstnumber+secondnumber;
    return result;
}
int main()
{
    cout<<sum<<endl;
    return 0;
}