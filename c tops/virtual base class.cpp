#include<iostream>
using namespace std;
class a;
{
	public:
		void display()
		{
			cout<<"welcome to virtual base class";
		}
};
class b:virtual class a
{
	
};
class c:virtual class a
{
	
};
class d:public b, public c
{
	
};
main()
{
	d obj;
	obj.display();
}