#include<iostream>
using namespace std;
int main()
{
  int ary[10],i,k,a,n;
  int *ptr;
  cout<<"Enter Your Element For Array"<<endl;
  cout<<"Number of Element"<<endl;
  cin>>n;
  for(i=0;i<n;i++)
  cin>>ary[i];
  for(i=0;i<n;i++)
  cout<<ary[i]<<" "<<&ary[i]<<endl;
cout<<endl;
  // We can use ptr=&ary[0];(both are same)
  //Assign the address of ary[0] to ptr
      ptr=ary ;
  for(i=0;i<n;i++)
{cout<<*ptr<<" "<<ptr<<endl;
  ptr++;
            }
}
