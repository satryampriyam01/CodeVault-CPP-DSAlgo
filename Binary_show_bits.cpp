#include<iostream>
using namespace std;
int main()
{
int x,n,c,i,y,arry[100],m=0;
cout<<"Enter Number For Binary Conversion"<<endl;
cin>>n;
for(i=0;n>0;i++)
{
arry[i]=n%2;
n=n/2;
m++;
}

for(i=m-1;i>=0;i--) /*last m-1 as it stores one extra which is end loop not
implemented as it is zero. So we have to do zero*/
cout<<arry[i];

for(x=0;x<m;x++)
{if(arry[x]==1 && arry[x+1]==1)
y=y-1;
if(arry[x]==1)
y=y+1;}
cout<<endl<<"CET_Bit_Set_Time_Set_to_0 "<<y;
}
