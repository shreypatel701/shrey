#include<iostream>
using namespace std;
class papa
{
	public:
		void house()
		{
			cout<<"3 bhk house";
		}
};
class kaka
{
	public:
		void shop()
		{
			cout<<"kirana shop";
		}
};
class son:public papa,public kaka
{
	void car()
	{
	cout<<"bmw car";
	}
};
main()
{
	son s1;
	s1.house();
	s1.shop();
}