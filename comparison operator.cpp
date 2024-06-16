#include<iostream>
using namespace std;
int main()
{
	string str1="pencil";
	string str2="pencil";
	string *ptr1=&str1;
	string *ptr2=&str2;
	cout<<(ptr1==ptr2);
	cout<<(*ptr1==*ptr2);
	return 0;
	
	
}
