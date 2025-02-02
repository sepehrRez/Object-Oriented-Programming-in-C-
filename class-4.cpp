#include<iostream>
#include<math.h>
using namespace std;

class Polynomial
{
    public:
    float A,B,C;
};

void input(Polynomial *a)
{
    cin>>a->A;
    cin>>a->B;
    cin>>a->C;
}

 void Display(Polynomial a)
 {
     cout<<"("<<a.A<<"x^2)+("<<a.B<<"x)+("<<a.C<<")"<<endl;
 }

 float ComputePx(Polynomial a,float c)
 {
     float z;
     z=a.A*c*c+a.B*c+a.C;
     return z;
 }

 void Root(Polynomial a,float *root1,float *root2)
 {
     *root1=(-a.B+sqrt(a.B*a.B-(4*a.A*a.C)))/(2*a.A);
     *root2=(-a.B-sqrt(a.B*a.B-(4*a.A*a.C)))/(2*a.A);
 }

  Polynomial ADDPolynomial(Polynomial a,Polynomial b)
  {
      Polynomial c;
      c.A=b.A+a.A;
      c.B=b.B+a.B;
      c.C=b.C+a.C;
      return c;
  }

  Polynomial  SUBPolynomial(Polynomial a,Polynomial b)
  {
      Polynomial c;
      c.A=b.A-a.A;
      c.B=b.B-a.B;
      c.C=b.C-a.C;
      return c;
  }

  int main()
  {
      Polynomial vorod1,vorod2,temp;
      input(&vorod1);
      input(&vorod2);
      int x;
      float root1,root2;
      cin>>x;
      cout<<"computepx1 "<<ComputePx(vorod1,x)<<endl;
      cout<<"computepx2 "<<ComputePx(vorod2,x)<<endl;

      if((vorod1.B*vorod1.B-(4*vorod1.A*vorod1.C))>=0)
      {
          Root(vorod1,&root1,&root2);
          cout<<"root1 "<<root1<<" "<<root2<<endl;
      }
      else
          cout<<"root1"<<endl;
      
       if((vorod2.B*vorod2.B-(4*vorod2.A*vorod2.C))>=0)
      {
          Root(vorod2,&root1,&root2);
          cout<<"root2 "<<root1<<" "<<root2<<endl;
      }
      else
          cout<<"root2"<<endl;
        temp=ADDPolynomial(vorod1,vorod2);
      cout<<"add ";
      Display(temp);
      temp=SUBPolynomial(vorod1,vorod2);
      cout<<"sub ";
      Display(temp);
      return 0;
  }