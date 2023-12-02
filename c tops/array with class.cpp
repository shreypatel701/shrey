#include<iostream>
//for 1 student//
using namespace std;
class student
{
	public:
		int id;
		string name;
		int marks[5];
		int i;
		void input()
		{
			cout<<"enter your id";
			cin>>id;
			cout<<"enter your name";
			cin>>name;
			for(i=0;i<5;i++)
			{
				cout<<"enter the marks";
				cin>>marks[i];
			}
		}
		void display()
		{
			cout<<"/nyour id is"<<id;
			cout<<"/nyour name is"<<name;
			for(i=0;i<5;i++)
			{
				cout<<"\nmarks="<<marks[i];
			}
		}

};
main()
{
	student s1;
	s1.input();
	s1.display();
}