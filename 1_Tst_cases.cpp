#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int l;
	cin>>l;
	while(l--)
	{
	    int round;
	    int c=0;
	    int m=0;
	    cin>>round;
	    while(round--)
	    {
	        int chefc,montyc;
	        cin>>chefc>>montyc;
	        int mc=0;
	        while(montyc>0)
	        {
	             mc=mc+montyc%10;
	            montyc=montyc/10;
	        }

	    int cc=0;
	        while(chefc>0)
	        {
	             cc=cc+chefc%10;
	            chefc=chefc/10;
	        }

	        if(cc>mc)
            {
	        c++;
            }
	        else if(mc>cc)
	     {
             m++;
         }
	        else
	        {
	            c++;
	            m++;
	        }
	    }
	    if(c>m)
	    cout<<0<<" "<<c-m<<endl;
	    else if(m>c)
	    cout<<1<<" "<<m-c<<endl;
	    else cout<<2<<" "<<0;
	}
}
