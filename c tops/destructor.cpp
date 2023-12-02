#include<iostream>
using namespace std;
class  destructor
{
	public:
		 destructor()
		 {
		 	cout<<"this is constritor";
		 }
		 ~destructor()
		 {
		 	cout<<"this is destretor";
		 }
};
main()
{
	destructor d1;
}