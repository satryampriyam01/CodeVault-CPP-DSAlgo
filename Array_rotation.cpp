#include <iostream>
using namespace std;

int main() {
	int i=0,t=0,l,j,k=0,ary[100000],temp[100000],tem=0,n=0,fin=0;
	cin>>t;
	for(l=0;l<t;l++)
	{
	    cin>>n;
	    cin>>tem;
	    for(i=0;i<n;i++)
	    {
	        cin>>ary[i];
	    }
	    for(i=0;i<tem;i++)
	    {
	        temp[i]=ary[i];
	    }
	    for(i=tem;i<n;i++)
	    {
	        cout<<ary[i]<<" ";
	    }
	    for(i=0;i<tem;i++)
	    {
	        cout<<temp[i]<<" ";
	    }
	    cout<<endl;
	}


	return 0;
}
