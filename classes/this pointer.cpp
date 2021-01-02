#include<iostream>
using namespace std;
class student
{
	int rollno,marks;
	public:
		void input(int rollno)
		{
			this->rollno=rollno;
			cout<<"enter your marks= ";
			cin>>marks;
		}
		void output()
		{
			cout<<"\n Rollno = "<<rollno<<"  Marks = "<<marks;
		}
};

int main()
{
	student s1;
	int rollno = 3;
	s1.input(rollno);
	s1.output();
	return 0;
}
