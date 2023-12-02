#include<iostream>
using namespace std;
class swaping
{
	private:
		int x,y;
		friend void fun();
};
void fun()
{
	swaping sp;
	sp.x=10;
	sp.y=20;
	cout<<"before swapping x="<<sp.x;
	cout<<"\nbefore swapping y="<<sp.y;
	
	sp.x=sp.x*sp.y;
	sp.y=sp.x/sp.y;
	sp.x=sp.x/sp.y;
	
	cout<<"\nafter swapping x="<<sp.x;
	cout<<"\nafter swapping y="<<sp.y;
}
main()
{
	fun();
}