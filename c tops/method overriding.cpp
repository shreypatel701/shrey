#include<iostream>
using namespace std;
class parent
{
	public:
		void mobile()
		{
			cout<<"iphone";
		}
};
class child : public parent
{
	public:
		void mobile()
		{
			parent::mobile(); //scope resolution operater
			cout<<"\niphone 15 pro max";
		}
};
main()
{
	child c1;
	c1.mobile();
}