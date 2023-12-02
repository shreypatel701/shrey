#include<iostream>
//for more than 1 student//
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
	int i;
	student s1[3];
	for(i=0;i<3;i++)
	{
		s1[i].input();
	}
	for(i=0;i<3;i++)
	{
		s1[i].display();
	}

}