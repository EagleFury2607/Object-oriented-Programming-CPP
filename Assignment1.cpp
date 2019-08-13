#include<iostream>
using namespace std;


class calci
{

	int n1,n2,r,m,result;
	public:
		void getdata(int,int);
		void calculate();
		void display();
};

void calci::getdata(int a,int b)
{
	cout<<"Enter two numbers\n";
	cin>>a>>b;
	n1=a;n2=b;
	cout<<"Enter your choice: \n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n";
	cin>>m;
}

void calci::calculate()
{

	switch(m)
	{
		case 1: result=n1+n2;
			cout<<"Addition :\n";
		break;
		case 2: result=n1-n2;
			cout<<"Subtraction :\n";
		break;
		case 3: result=n1*n2;
			cout<<"Multiplication :\n";
		break;
		case 4: result=n1/n2;
			r=n1%n2;
			cout<<"Remainder :"<<r<<"\n";
			cout<<"Division :\n";
		break;
default: cout<<"Wrong choice";
break;
	}
}


void calci::display()
{
	cout<<result;
}
int main()
{
int a,b,z;
calci c;
do
{
c.getdata(a,b);
c.calculate();
c.display();
cout<<"Enter 1 if you want to redo else 0\n";
cin>>z;
}while(z==1);
return 0;
}
