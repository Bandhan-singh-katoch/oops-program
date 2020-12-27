#include<iostream>
using namespace std;
class student
{
	int rollno;
	char name[10];
	public:
		static int count;
		student()
		{
			count++;
		}
		void input()
		{
			cout<<"\nenter your name and rollno=";
			cin>>name>>rollno;
			cout<<"\n name and rollno is=  "<<name<<" "<<rollno;
		}
};
int student::count=0;
int main()
{
	student x;
	x.input();
	student y;
	y.input();
	cout<<"\n Count is = "<<student::count;
	return 0;
}
