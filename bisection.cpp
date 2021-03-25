#include<bits/stdc++.h>

using namespace std;

double func(double x)
{
    return x*x*x-x-1;
}

double e = 0.01;
double c;

double bisection(double a,double b)
{
    if(func(a)*func(b)>=0)
    {
        printf("incorrect value.\n");
    }

c = a;

while((b-a)>=e)
{
    c = ((a+b)/2);

   if (func(c) == 0.0)
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
}

int main()
{
    double a,b;
    cout<<"enter the value of a & b: "<<endl;

    cin>>a>>b;
    bisection(a,b);
    cout<<"\n";
    cout<<"Accurate Root calculated is = "<< c <<endl;

    return 0;
}



