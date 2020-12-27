// Friend function
#include<iostream>
using namespace std;
class demo
{
	int a,b;
	public:
		void input();
		friend void output(demo);
};

void demo::input()
{
	cout<<"\n Enter a and b";
	cin>>a>>b;
}

void output(demo x)
{
	cout<<" \n Sum= "<<x.a+x.b;
}

int main()
{
	demo d1;
	d1.input();
	output(d1);
	return 0;
}
