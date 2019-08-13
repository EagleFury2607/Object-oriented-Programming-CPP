#include<iostream>
#include<string.h>

using namespace std;
class database
{
char *name,*class1,*div,*bldgrp,*addr,*dob;
int roll,lisno;
long int mob;
int cnt; 
public:
	database();
	database(char*,char*,char*,char*,char*,char*,int,int,long int);
	inline void get();
	inline void show();
	~database();	
};
database::database()
{
name=new char[1];
class1=new char[1];
div=new char[1];
bldgrp=new char[1];
addr=new char[1];
dob=new char[1];
roll=lisno=0;
mob=0;
}
database::database(char *name,char *class1,char *div,char *bldgrp,char *addr,char *dob,int roll,int mob,long int lisno)
{
int len;
len=strlen(name);
this->name=new char[len+1];
strcpy(this->name,name);

len=strlen(class1);
this->class1=new char[len+1];
strcpy(this->class1,class1);

len=strlen(div);
this->div=new char[len+1];
strcpy(this->div,div);

len=strlen(bldgrp);
this->bldgrp=new char[len+1];
strcpy(this->bldgrp,bldgrp);

len=strlen(addr);
this->addr=new char[len+1];
strcpy(this->addr,addr);

len=strlen(dob);
this->dob=new char[len+1];
strcpy(this->dob,dob);

this->roll=roll;
this->mob=mob;
this->lisno=lisno;
}

void database::get()
{
cout<<"Enter student details\n";
cout<<"Name: ";
cin>>name;
cout<<"Class: ";
cin>>class1;
cout<<"Div: ";
cin>>div;
cout<<"Blood Group: ";
cin>>bldgrp;
cout<<"Address: ";
cin>>addr;
cout<<"Date of Birth: ";
cin>>dob;
cout<<"Roll no: ";
cin>>roll;
cout<<"Mobile no.: ";
cin>>mob;
cout<<"Liscence no.: ";
cin>>lisno;
cout<<"\n";
}

void database::show()
{
cout<<name<<"\t";
cout<<class1<<"\t";
cout<<div<<"\t";
cout<<bldgrp<<"\t";
cout<<addr<<"\t";
cout<<dob<<"\t";
cout<<roll<<"\t";
cout<<mob<<"\t";
cout<<lisno<<"\t";
cout<<"\n";
}
database::~database()
{
delete name;
delete class1;
delete div;
delete bldgrp;
delete dob;
delete addr;
delete &mob;
delete &roll;
delete &lisno;
}

int main()
{
int i,n;
cout<<"Total no of students\n";
cin>>n;
database d[n];
for(i=0;i<n;i++)
{
d[i].get();
}
cout<<"\n\n";
cout<<"NAME:\t";
cout<<"CLASS:\t";
cout<<"DIV:\t";
cout<<"BLOODGRP:\t";
cout<<"ADDRESS:\t";
cout<<"DOB:\t";
cout<<"ROLLNO:\t";
cout<<"MOBILE:\t";
cout<<"LISNO:\n";

for(i=0;i<n;i++)
{
d[i].show();
cout<<"\n";
}
return 0;
}
