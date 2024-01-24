#include<iostream>
using namespace std;
int main()
{

int a,b,i,arry[10];
cout<<"Size of interger in this Code is "<<sizeof(int)<<endl;

         cout<<"Enter size of array "<<endl;
    cin>>a;
         cout<<"Enter The Element To Be Searched ";
    cin>>b;
         cout<<"Enter The Element ";
         for(i=0;i<a;i++)
    cin>>arry[i];
    for(i=0;i<a;i++)
cout<<"Address of the array["<<i<<"] is"<<&arry[i]<<endl;//why <<i<< not <<i




}
