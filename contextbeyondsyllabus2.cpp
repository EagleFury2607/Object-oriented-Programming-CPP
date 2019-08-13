#include<iostream>
using namespace std;
class shape
{
	public:
	float result;
	void display();
};

void shape::display()
{
	cout<<"This is a program for calculating area\n";
}
class rectangle:public shape
{
	float len,bd;
	public:
	void getr()
	{
		cout<<"Enter length and breadth:\n";
		cin>>len>>bd;
		result=len*bd;
	}
	void display()
	{
		cout<<"Area of rectangle :\t"<<result<<endl;
	}
	
};

class triangle:public shape
{
	float base,ht;
	public:
	void gett()
	{
		cout<<"Enter base and height:\n";
		cin>>base>>ht;
		result=0.5*base*ht;
	}
	void display()
	{
		cout<<"Area of triangle :\t"<<result<<endl;
	}
	
};

class circle:public shape
{
	float radius;
	public:
	float pi=3.142;
	void getc()
	{
		cout<<"Enter radius:\n";
		cin>>radius;
		result=pi*radius*radius;
	}
	void display()
	{
		cout<<"Area of circle :\t"<<result<<endl;
	}
	
};

int main()
{
	rectangle r;
	triangle t;
	circle c;
	int x;
	do
	{
		r.getr();
		t.gett();
		c.getc();
		r.display();
		t.display();
		c.display();
		cout<<"Enter 1to continue else 0\n";
		cin>>x;
	}while(x==1);
	return 0;
}
