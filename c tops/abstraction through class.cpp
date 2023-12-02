#include<iostream>
using namespace std;
class abstractiondemo
{
	private:
		int x=10,y=20;
		public:
			void display()
			{
				cout<<"x= "<<x;
					cout<<"\ny= "<<y;
			}			
};
main()
{
	abstractiondemo ad;
	ad.display();
}