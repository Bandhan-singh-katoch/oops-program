#include<iostream>
using namespace std;

class student
{
	int rollno;
	float marks;
	public:
		          
		/*:::::::::::---Initializer list-----:::::::::*/
		
		student(int r=1,float m=100):rollno(r),marks(m){ }
		
		void output()
		{
			cout<<rollno<<"\t"<<marks<<"\n";
		}
};

int main()
{
	student s1;
	s1.output();
	
	student s2(5,98.9); // passing arguments
	s2.output();
	return 0;
}
