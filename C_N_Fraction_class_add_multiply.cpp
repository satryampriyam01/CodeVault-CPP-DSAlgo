#include<iostream>
using namespace std;
class fRaction{
private :
int numerator;
int denominator;
public:
fRaction(int numerator,int denominator)
{
  this->numerator=numerator;
  this->denominator=denominator;
};




void print()
{
  cout<<numerator<<"/"<<denominator<<endl;
}



void simply()
{
  int gcd=1;
  int j=min(numerator,denominator);
  for(int i=1;i<=j;i++)
  {
    if(numerator%i==0 && denominator%i==0)
    {
      gcd=i;
    }

  }
this->numerator=numerator/gcd;
this->denominator=denominator/gcd;


}



void add(fRaction &f2)
{
int lcm=this->denominator*f2.denominator;
int x=lcm/this->denominator;
int y=lcm/f2.denominator;
int num=x*numerator+(y*f2.numerator);
this->denominator=lcm;
this->numerator=num;
  print();
  simply();
  cout<<"Simplified"<<endl;
  print();
}
void multiplying(fRaction &f2)
{
  this->numerator=numerator*f2.numerator;
  this->denominator=denominator*f2.denominator;
cout<<"function_print_multiplying"<<endl;
  print();
  simply();
}

};



int main()
{
fRaction f1(8,4);
fRaction f2(4,2);
cout<<"Both_Added_Changes_Are_Made_In_F1"<<endl;
f1.add(f2);
cout<<"F1_now"<<endl;
f1.print();
cout<<"F2_now"<<endl;
f2.print();
f1.multiplying(f2);
cout<<"NOW_We_Are_Multiplying_Changed_F1_F2_Simplying"<<endl;
f1.print();

}
