#include<bits/stdc++.h>
using namespace std;
#define MAXM 104

double func(double x)
{
    return x*x*x-x-1;
}

double e = 0.01;
double c;
double falsi(double a,double b)
{
    if(func(a)*func(b)>=0)
    {
        printf("incorrect value.\n");
    }
c = a;

for(int i=0;i<MAXM;i++)
{
   double p = ((a*func(b))-(b*func(a)));
   double q = ((func(b)-func(a)));
   c = p/q;


   if (func(c) < 0.1)
    {
            cout << "Root = " << c <<endl;
            break;
        }
        else if (func(c)*func(a) < 0)
                  {
                cout << "Root = " << c <<endl;
                b = c;
                   }
        else{
                cout << "Root = " << c <<endl;
                a = c;

              }
    }

   cout<<"Accurate Root calculated is = "<< c <<endl;

}

int main()
{
    double a,b;
    cout<<"Enter value for Falsi Method: "<<endl;
    cin>>a>>b;

    falsi(a,b);

return 0;
}




