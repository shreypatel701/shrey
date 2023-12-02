#include<iostream>
using namespace std;
template <class T>
void swapping(T &a, T &b)
{
	T t=a;
	  a=b;
	  b=t;
}
 main()
 {
 	char a='A',b='B';
 	int x=10,y=20;
 	cout<<"before swap A="<<a<<"| B="<<b;
 	swapping(a,b);
 	cout<<"before swap A="<<a<<"| B="<<b;
 	
 	cout<<"before swap x="<<x<<"| y="<<y;
 	swapping(x,y);
 	cout<<"before swap x="<<x<<"| y="<<y;
 }