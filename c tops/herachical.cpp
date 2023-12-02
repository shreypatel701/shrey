#include<iostream>
using namespace std;
class Parant
{
	public:
		void parent()
		{
			cout<<"\nparents";
		}
};
class Child1: public Parant
{
	public:
		void child1()
		{
			cout<<"\nfirst child";
		}
};
class Child2: public Parant
{
	public:
		void child2()
		{
			cout<<"\nsecond child";
		}
};
main()
{
	Child1 c1;
	Child2 c2;
	
	c1.parent();
	c1.child1();
	
	c2.parent();
	c2.child2();
}