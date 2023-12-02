#include<iostream>
using namespace std;
class operater
{
	public:
			void div(int a,int b)
		{
			cout<<a/b<<endl;
		}		
		void addition(float a,float b)
		{
			cout<<a/b<<endl;
		}	
};
main()
{
	operater op;
	op.div(13,15);
	op.div(13.67f,15.34f);
}