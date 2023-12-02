#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"enter the value of a:";
	cin>>a;
	cout<<"\nenter the value of b:";
	cin>>b;
    a=a*b;
	b=a/b;
	a=a/b;
	cout<<"value is a:"<<a;
	cout<<"\value is b:"<<b;
}