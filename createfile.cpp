#include<iostream>
#include<fstream>//file read 
using namespace std;
int main()
{
    ofstream file_;
    file_.open("raghu.txt");
    file_<<"this is my first program text file 1"<<endl;
    file_<<"this is my first program text file 2"<<endl;
    file_<<"this is my first program text file 3"<<endl;
    file_<<"this is my first program text file 4"<<endl;
    file_<<"this is my first program text file 5"<<endl;
    file_.close();
    std::cin.get();
    return 0;    
}