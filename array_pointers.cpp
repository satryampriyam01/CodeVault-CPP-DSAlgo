#include<iostream>
using namespace std;
int main()
{
  int arry[3]={1,2,3};
int *ptr;
ptr=arry;
cout<<"First element  "<<ptr[0]<<endl <<&ptr[0]<<endl;
cout<<"Second element  "<<ptr[1]<<endl <<&ptr[1]<<endl;
cout<<"Third element  "<<ptr[2]<<endl <<&ptr[2]<<endl;
}
