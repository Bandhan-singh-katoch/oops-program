#include<iostream>
using namespace std;
class student
{
	int rollno;
	char name[10];
	static int count;  //static data member declared
	public:
		void input()
		{
			cout<<"\nEnter your name and rollno= ";
			cin>>name>>rollno;
			count++;
			
		}
		void output()
		{
			cout<<name<<"\t"<<rollno<<"\n";
		}
		
		static void objname()   //static member function
		{
			cout<<"\n Student count= "<<count;
		}
};

int student::count=0;   //static data member initialized outside the class

int main()
{
	student s1,s2;
	s1.input();
	s1.output();
	student::objname();
	
	s2.input();
	s2.output();
	student::objname();
	return 0;
}
