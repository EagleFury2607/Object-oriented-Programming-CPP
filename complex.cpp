#include<iostream>
using namespace std;

class complex
{public:
	float real,img;
	complex operator+(complex);
	complex operator-(complex);
	complex operator*(complex);
	complex operator/(complex);
	void display(complex);
};
complex complex::operator+(complex c)
{
	complex ans;
	ans.real=real+c.real;
	ans.img=img+c.img;
	return ans;
}
complex complex::operator-(complex c)
{
	complex ans;
	ans.real=real-c.real;
	ans.img=img-c.img;
	return ans;
}
complex complex::operator*(complex c)
{
	complex ans;
	ans.real=real*c.real-img*c.img;
	ans.img=real*c.img+c.real*img;
	return ans;
}
complex complex::operator/(complex c)
{
	complex ans,a1;
	int d;
	a1.real=real*c.real-img*c.img;
	a1.img=real*c.img+c.real*img;
	d=c.real*c.real+c.img*c.img;
	ans.real=a1.real/d;
	ans.img=a1.img/d;
	return ans;
}
void complex::display(complex c)
{
cout<<c.real<<"+i"<<c.img<<"\n";
}

int main()
{
int x,m;
complex c1,c2,c3,c4;
int oper;
do
{
cout<<"Enter first complex no.\n";
cin>>c1.real>>c1.img;
cout<<"Enter second complex no.\n";
cin>>c2.real>>c2.img;
do
{
cout<<"Enter your choice: \n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n";
cin>>m;
switch(m)
	{
		case 1: c3=c1+c2;
			c4.display(c3);
		break;
		case 2: c3=c1-c2;
			c4.display(c3);
		break;
		case 3: c3=c1*c2;
			c4.display(c3);
		break;
		case 4: c3=c1/c2;
			c4.display(c3);
		break;
		default: cout<<"Wrong choice";
		break;
	}
	cout<<"Enter 1 if you want to redo with same values ,2 if you want to change values, else 0\n";
	cin>>x;
}while(x==1);
}while(x==2);
return 0;
}
