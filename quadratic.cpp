#include<iostream>
 #include<math.h> 
 using namespace std;
 class quad
 {
 	int a,b,c,x;
 	public:
 		quad()
 		{
 			a=b=c=0;
 		}
 		quad(int a,int b,int c)
 		{
			 this->a=a;
			 this->b=b;
			 this->c=c;
		}

		 friend ostream &operator<<(ostream &out, quad &q);
		 friend istream &operator>>(istream &in, quad &q);
		 quad operator +(quad);
		 void eval();
		 void findRoots();

};
ostream &operator<<(ostream &out, quad &q)
{
	out<<"\nquad equation is\t";
	out <<q.a<<" X * X + "<<q.b<<" X +"<<q.c ;
	return out;
		 
}		 
istream &operator>>(istream &in, quad &q)
{
	cout<<"\nEnter values of a,b,c of quad equation:\n";
	in>>q.a>>q.b>>q.c;
	return in;
}
void quad::eval()
 {
	 cout<<"\nEnter value of x\n";
	 cin>>x;
	 int result=(a*x*x)+(b*x)+c;
	 cout<<"\nFor x= "<<x<<" Answer is : "<<result<<endl;
 }
 void quad::findRoots()
 {
	 int t=(b*b)-(4*a*c);
	 if(t>0)
	 {
	 float r1=(-b+sqrt(t))/(2.0*a);
	 float r2=(-b-sqrt(t))/(2.0*a);
	 cout<<"\nRoots are real and different";
	 cout<<"\nRoot1= "<<r1;
	 cout<<"\nRoot2= "<<r2;
	 }
	 else if(t==0)
	 {
	 cout<<"\nRoots are real and equal";
	 float r=(-b+sqrt(t))/(2.0*a);
	 cout<<"\nEqual Roots are"<<r;
	 }
	 else
	 {
	 cout << "\nRoots are complex and different." << endl;
	 float real = -b/(2*a);
	 float imaginary =sqrt(-t)/(2*a);
	 cout << "Root1 = " << real << "+" << imaginary << "i" << endl;
	 cout << "Root2 = " << real << "-" << imaginary << "i" << endl;
	 }
 }

quad quad::operator +(quad q)
 {
	 quad t;
	 t.a=this->a+q.a;
	 t.b=this->b+q.b;
	 t.c=this->c+q.c;
	 return t;
 }
 int main()
 {
	quad q1,q2,q3;
	 cin>>q1;
	 cin>>q2;
	 q3=q1+q2;
	 cout<<"\nQuadratic equation 1, its roots and result\n";
	 cout<<q1;
	 q1.findRoots();
	 q1.eval();
	 cout<<"\nQuadratic equation 2, its roots and result\n";
	 cout<<q2;
	 q2.findRoots();
	 q2.eval();
	 cout<<"\nQuadratic equation 3, its roots and result\n";
	 q3.findRoots();
	 q3.eval();
	 return 0;
 }
