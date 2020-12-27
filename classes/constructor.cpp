//All constructors and destructor
#include<iostream>
using namespace std;
class add
{
	int a,b;
	public:
		// Default constructor
		add()   
		{
			a=1;b=2;
		}
		
		// Parametrized constructor
		add(int x,int y)
		{
			a=x;b=y;			
		}
		
		//Copy constructor
		add(add &cpy)
		{
			a=cpy.a;
			b=cpy.b;
		}
		void output()
		{
			cout<<"\nA="<<a<<"  B="<<b;
		}
		
		~add()  // destructor
		{
			cout<<"\nDestructor called";
		}
};
int main()
{
	add a;
	a.output();
	
	add b(23,45);  //parametrized constructor called
	b.output();
	
	add c(a);   // copy constructor called
	c.output();
	return 0;
}
