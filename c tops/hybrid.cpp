#include<iostream>
using namespace std;
class Vehical
{
	public:
		void vehical()
		{
			cout<<"this is vehical";
		}
};
class Car:public  Vehical
{
	void car()
	{
		cout<<"car";
	}
};
class racing: