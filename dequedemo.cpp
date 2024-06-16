#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>dq;
    dq.push_back(32);
    dq.push_back(21);
    dq.push_back(12);
    dq.push_back(11);  
    dq.push_front(54);
    dq.push_front(45);
    dq.push_front(9);
    while(not dq.empty()){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    return 0;
}
