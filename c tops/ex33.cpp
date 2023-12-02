#include<iostream>
using namespace std;
class operater
{
	public:
			void mul(int a,int b)
		{
			cout<<a*b<<endl;
		}		
		void mul(float a,float b,float c)
		{
			cout<<a*b*c<<endl;
		}	
};
main()
{
	operater op;
	op.mul(13,15);
	op.mul(13.67f,15.34f,34.44f);
}