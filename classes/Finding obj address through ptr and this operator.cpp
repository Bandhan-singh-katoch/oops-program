#include<iostream>
using namespace std;
class student
{
	int rollno,marks;
	public:
		void input()
		{
			cout<<"enter your rollno and marks= ";
			cin>>rollno>>marks;
		}
		void output()
		{
			cout<<"\n Rollno = "<<rollno<<"  Marks = "<<marks;
			cout<<"\n From class, this = "<<this;
			
		}
};

int main()
{
	student s1;
	s1.input();
	s1.output();
	cout<<"\nFrom main,obj address is = "<<&s1;
	
	return 0;
}
