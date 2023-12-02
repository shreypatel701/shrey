#include<iostream>
using namespace std;
class operater
{
	public:
			void addition(int a,int b)
		{
			cout<<a+b<<endl;
		}		
		void addition(float a,float b,float c)
		{
			cout<<a+b+c<<endl;
		}	
};
main()
{
	operater op;
	op.addition(13,15);
	op.addition(13.67f,15.34f,34.44f);
}
