#include<bits/stdc++.h>
#define  MAXM 104

using namespace std;

double func(double x)
{
    return x*x*x-x*x-1;
}

double e=0.01;
double c;

double secantMethod(double x1,double x2)
{
    double p;
    if(func(x1)*func(x2)>=0)
    {
        cout<<"Incorrect Value."<<endl;
    }

     else
      {
          for(int i=0;i<MAXM;i++)
            {
        double p=(x1 * func(x2) - x2 * func(x1)) / (func(x2) - func(x1));;
        double q=func(x1) * func(p);
        x1=x2;
        x2=p;

            if(q==0)
              {
              cout<<"Root: "<<c<<endl;
                break;
                }

        double xm = (x1 * func(x2) - x2 * func(x1)) / (func(x2) - func(x1));
            }

    double p;
    double xm;
    while(fabs(xm-p)>=e)

    cout<<"The accurate root value is: "<<p<<endl;
}

cout<<"The accurate root value is: "<<p<<endl;
}

int main()
{
    double x1,x2;

    cout<<"Enter the value of x1 & x2: "<<endl;
    cin>>x1>>x2;

    secantMethod(x1,x2);

return 0;
}
