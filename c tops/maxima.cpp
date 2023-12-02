#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"enter number a:>";
	cin>>a;
	cout<<"enter number b:>";
	cin>>b;
	cout<<"enter number c:>";
	cin>>c;
	if(a>b)
	{
		if(a>c)
		{
			cout<<"a is maximum";
		}
	
}
	else
	{
		if(b>c)
		{
			cout<<"b is maximum";
		}
		else
		{
			cout<<"c is maximum";
		}
	}
}
