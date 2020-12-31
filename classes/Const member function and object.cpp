#include<iostream>
using namespace std;
class student
{
	int rollno,marks;
	public:
		student(int r=1,int m=10):rollno(r),marks(m){}
		void output() const
		{
			//rollno++;     //uncomment it and it will cause error
			cout<<"\nRollno= "<<rollno<<"  Marks= "<<marks;
		}
};

int main()
{
	const student s1;
	s1.output();
	return 0;
}
