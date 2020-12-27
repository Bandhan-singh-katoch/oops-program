#include<iostream>
using namespace std;

class xyz;
class abc
{
	int a;
	public:
		void input()
		{
			cout<<" enter a";
			cin>>a;
		}
		friend void output(abc,xyz);
};

class xyz
{
	int x;
	public:
		void input()
		{
			cout<<"\n Enter x";
			cin>>x;
		}
		friend void output(abc,xyz);
		
};

void output(abc m,xyz n)
{
	cout<<"\n SUM= "<<m.a+n.x;
}

int main()
{
	abc a1;
	a1.input();
	xyz x1;
	x1.input();
	output(a1,x1);
	return 0;
}
