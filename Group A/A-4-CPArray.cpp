/*Implement a class CppArray which is identical to a one-dimensional C++ array (i.e.,
the index set is a set of consecutive integers starting at 0) except for the following :
1. It performs range checking.
2. It allows one to be assigned to another array through the use of the
 assignment operator (e.g. cp1= cp2)
3. It supports a function that returns the size of the array.
4. It allows the reading or printing of array through the use of cout and cin.
*?

#include<iostream>

using namespace std;

class CppArray
{
   
private: 
   
    int a[10],i,j,n,b[10],temp;
   
public:
   
    void get();
   
    void print();
   
    void sort();
   
    void range();
   
    void exchange();
   
    int size();
};

    
void CppArray::get()
    
{
   
        cout<<"\n Enter the limit of array ";
   
        cin>>n;
   
        cout<<"\n Enter the array elements ";
   
        for(i=0;i<n;i++)
   
        {
       
           cout<<"\n a["<<i<<"]=";
       
           cin>>a[i];
   
        }
    
}  

void CppArray::print()
    
{
   
           cout<<"\n The entered array is ";
   
           for(i=0;i<n;i++)
   
           {
       
                cout<<"\n a["<<i<<"]="<<a[i];
   
           }
    }
void CppArray::sort()
    
{
   
         for(j=0;j<n;j++)
   
         {
      
              for(i=0;i<n-1;i++)
     
                    {
         
                        if(a[i]>a[i+1])
        
                            {
            
                                temp=a[i+1];
            
                                a[i+1]=a[i];
            
                                a[i]=temp;
         
                            }
     
                    }
   
     }
   
    cout<<"\n The sorted array is ";
   
    for(i=0;i<n;i++)
   
        {
       
              cout<<"\n a["<<i<<"]="<<a[i];
   
        }

    }


void CppArray::range()
        
{
   
             cout<<"n The range of array is from "<<a[0]<<" to "<<a[n-1];

        }

void CppArray::exchange()
        
{
   for(i=0;i<n;i++)
   
                 {
       
                        b[i]=a[i];
   
                 }
   
            cout<<"\n The exchanged array is "; 
   
            for(i=0;i<n;i++)
   
                 {
      
                       cout<<"\n b["<<i<<"]="<<b[i];
   
                 }

        }

int CppArray::size()
        
{
   
              return n;
        
}



int main()

  {
   
        int a;
   
        CppArray obj;
   
        obj.get();
   
        obj.print();
   
        obj.range();
   
        obj.exchange();
  
        obj.sort();
   
        a=obj.size();
  
        cout<<"\n The size of array is "<<a;
   
        return 0;

  }
