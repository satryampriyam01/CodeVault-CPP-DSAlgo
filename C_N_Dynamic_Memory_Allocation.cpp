#include<iostream>
using namespace std;
int main()
{
  int *p=new int;
  *p=10;
  cout<<p<<" "<<" Adress of int Memory In Heap"<<endl;
  cout<<*p<<" "<<"Data Stored In Heap Memory "<<endl;
  cout<<&p<<" "<<"Adress Of Pointers"<<endl;
  int *pa=new int[50];
pa[0]=10;
  cout<<*pa<<endl;
}
