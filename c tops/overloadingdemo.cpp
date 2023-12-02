#include<iostream>
using namespace std;
class overloadingdemo
{
	public:
		void addition(int a,int b)
		{
			cout<<a+b<<endl;
		}
		void addition(float a,float b)
		{
			cout<<a+b<<endl;
		}
		void addition(int a,int b,int c)
		{
			cout<<a+b+c;
		}
		
};
main()
{
	overloadingdemo od;
	od.addition(10,20);
	od.addition(10.76f,20.79f);
	od.addition(10,20,30);
}