#include<iostream>
using namespace std;

class time
{
	int hour,minute;
	public: 
	void gettime();
	void showtime();
	void sumtime(time,time);
};

void time::gettime()
{
	cout<<" \nEnter hours and minutes = ";
	cin>>hour>>minute;
} 

void time::showtime()
{
	cout<<" \nHours="<<hour<<"\nMinutes="<<minute;
}

void time::sumtime(time t1,time t2)
{
	hour = (t1.hour + t2.hour) + (t1.minute + t2.minute)/60;
	minute = (t1.minute + t2.minute)%60;
}

int main()
{
	time T1,T2,T3;
	cout<<"\n Enter time for t1=";
	T1.gettime();
	cout<<"\n Enter time for t2=";
	T2.gettime();
	T3.sumtime(T1,T2);
	cout<<"\n T1 time=";
	T1.showtime();
	cout<<"\n T2 time=";
	T2.showtime();
	cout<<"\n T3 time or sum of t1 and t2=";
	T3.showtime();
	return 0;
}
