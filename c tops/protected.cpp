#include<iostream>
using namespace std;
class a
{
	protected:
		int x;
};
class b : public a
{
public:
	void getdetails()
	{
		cout<<"enter the value of x";
		cin>>x;
	}
	void display()
	{
		cout<<"value of x is"<<x;
	}
};
main()
{
	b obj;
	obj.getdetails();
	obj.display();
}