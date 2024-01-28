

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



fRaction add(fRaction &f2)
{
int lcm=this->denominator*f2.denominator;
int x=lcm/this->denominator;
int y=lcm/f2.denominator;
int num=x*numerator+(y*f2.numerator);
//this->denominator=lcm;
//this->numerator=num;
fRaction fnew(num,lcm);
fnew.simply();
return fnew;
}

fRaction operator+(fRaction &f2)
{
int lcm=this->denominator*f2.denominator;
int x=lcm/this->denominator;
int y=lcm/f2.denominator;
int num=x*numerator+(y*f2.numerator);
//this->denominator=lcm;
//this->numerator=num;
fRaction fnew(num,lcm);
fnew.simply();
return fnew;
}




fRaction operator*(fRaction &f2)
{
  int num=numerator*f2.numerator;
  int dum=denominator*f2.denominator;
cout<<"function_print_multiplying"<<endl;
  fRaction fnew(num,dum);
  fnew.simply();//why fnew not only simply as beacause now we are storing in different variable
  return fnew;
}
bool operator==(fRaction &f2)
{
  simply();//simply both of them so that like 4/2 and 8/4 are equa`
  f2.simply();//simply btoh of them
  return (numerator==f2.numerator && denominator==f2.denominator);

}
//uniary operator
fRaction& operator++()//why use & to remove buffer memoy call
//and always call same memory
//using nesting
{
  numerator=denominator+numerator;
  simply();
  return *this;
}
fRaction operator++(int)//why notfRaction& its beacauseno nesting on post increment
{
  fRaction fnew(numerator,denominator);
  numerator=numerator+denominator;
  fnew.simply();
  simply();
  return fnew;//what if i write *this ? then it will return increment value
}


};



int main()
{
fRaction f1(8,4);
fRaction f2(4,2);
if(f1==f2)
  cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;

fRaction f3=++(++(++f1));
f1.print();//it should be 5/1 after simply
f3.print();
fRaction f4(2,1);
fRaction f5=f4++;
cout<<"Post_Increment";
f4.print();
f5.print();
}
