#include<iostream>
using namespace std;
class test
{
	public:
		int x;
		protected:
			int y;
			private:
				int z;
				
			friend void fun();
};
void fun()
{
	test t;
	t.x=10;
	t.y=20;
	t.z=30;
	
	cout<<"x="<<t.x;
	cout<<"\ny="<<t.y;
	cout<<"\nz="<<t.z;
}
main()
{
	fun();
}