#include<iostream>
using namespace std;
class operater
{
	public:
			void sub(int a,int b)
		{
			cout<<a-b<<endl;
		}		
		void sub(float a,float b,float c)
		{
			cout<<a-b-c<<endl;
		}	
};
main()
{
	operater op;
	op.sub(15,13);
	op.sub(13.67f,15.34f,34.44f);
}