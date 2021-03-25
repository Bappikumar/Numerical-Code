#include<bits/stdc++.h>
#define EPSILON 0.001
#define MAXM 104

using namespace std;

double func(double x)
{
    return x*x*x - x*x -1;
}

double derivative_Func(double x)
{
    return 3*x*x - 2*x;
}

void newtonR_method(double x)
{

    for(int k=0;k<MAXM;k++)
        {
        double i = func(x) / derivative_Func(x);
         while (abs(i) >= EPSILON)
          {
            i = func(x)/derivative_Func(x);

            x = x - i;
            cout<<"Root= ";
            cout<<x<<endl;
           }
       }

    cout << "The value of the root is : " << x;
}


int main()
{
    double x0;
    cout<<"Enter the value for rooting: "<<endl;
    cin>>x0;

    newtonR_method(x0);
    return 0;
}
