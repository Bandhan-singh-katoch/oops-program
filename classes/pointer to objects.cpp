#include<iostream>
using namespace std;
class add
{
	int a,b;
	public:
		void input()
		{
			cout<<" Enter a and b=";
			cin>>a>>b;
		}
		void output()
		{
			cout<<"\n Sum = "<<a+b;
		}
};
int main()
{
	add a1;
	add *b1;
	b1=&a1;
	b1->input();
	b1->output();
	return 0;
}
