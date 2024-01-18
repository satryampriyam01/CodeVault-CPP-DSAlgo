#include<iostream>
using namespace std;
int main()
{
  int *ptr,ary[10][10],i,j;
  cout<<"Your array";
  for(i=0;i<3;i++)

{for(j=0;j<3;j++)
  {
    cin>>ary[i][j];
  }
     }

     for(i=0;i<3;i++)

   {for(j=0;j<3;j++)
     {
       cout<<ary[i][j] ;
     }
     cout<<endl;
        }

        cout<<"tester "<<*(*(ary+2)+1)<<" ";
        cout<<"tester2 "<<*(*(ary+2)+2)<<endl;

 for(i=0;i<3;i++)
        {for(j=0;j<3;j++)
          {
            cout<<*(*(ary+i)+j) ;//IMPORTANT THEROY
          }
          cout<<endl;
             }
}
